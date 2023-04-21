#include<GL/glut.h>

static int z = 0, m = 0, M = 0, v = 0, V = 0, E = 0, e = 0, r = 0, R = 0, j = 0, J = 0, s = 0, S = 0, U = 0, u = 0, n = 0, N = 0, c = 0, i = 0, X = 0;

void drawSun(GLfloat position[]) {
	glPushMatrix();
	glRotatef((GLfloat)z, 1.0, 1.0, 1.0);
	glLightfv(GL_LIGHT0, GL_POSITION, position);
	glDisable(GL_LIGHTING);
	glutSolidSphere(0.8, 40, 16);
	glPopMatrix();
	glPushMatrix();
	glLightfv(GL_LIGHT0, GL_POSITION, position);
	glDisable(GL_LIGHTING);
	glEnable(GL_LIGHTING);
	glColor3f(1.5, 0.5, 0.0);
	glutSolidTorus(0.2, 0.9, 6, 20);
	glPopMatrix();
}
void drawMercury() {
	glPushMatrix();
	glRotatef((GLfloat)M, 0.0, 1.0, 0.0);
	glTranslatef(1.5, 0.0, 0.0);
	glRotatef((GLfloat)m, 0.0, 1.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glutSolidSphere(0.2, 20, 8);
	glPopMatrix();
}
void drawVenus() {
	glPushMatrix();
	glRotatef((GLfloat)V, 0.0, 1.0, 0.0);
	glTranslatef(2.0, 0.0, 1.0);
	glRotatef((GLfloat)v, 0.0, 1.0, 0.0);
	glColor3f(7.5, 9.5, 1.0);
	glutSolidSphere(0.2, 20, 8);
	glPopMatrix();
}
void drawEarthAndMoon() {
	glPushMatrix();
	glRotatef((GLfloat)E, 0.0, 1.0, 0.0);
	glTranslatef(3.5, 0.0, 0.0);
	glRotatef((GLfloat)e, 0.0, 1.0, 0.0);
	glColor3f(0.1, 6.5, 2.0);
	glutSolidSphere(0.2, 20, 8);

	// draw moon of the Earth
	glRotatef((GLfloat)X, 0.0, 1.0, 0.0);
	glTranslatef(0.3, 0.2, 0.0);
	glColor3f(4.3, 3.5, 8.0);
	glutSolidSphere(0.1, 20, 14);
	glPopMatrix();
}

void drawMars() {
	glPushMatrix();
	glRotatef((GLfloat)R, 0.0, 1.0, 0.0);
	glTranslatef(5.0, 0.0, 3.0);
	glRotatef((GLfloat)r, 0.0, 1.0, 0.0);
	glColor3f(1.0, 0.2, 0.0);
	glutSolidSphere(0.2, 20, 8);
	glPopMatrix();
}

void drawJupiter() {
	glPushMatrix();
	glRotatef((GLfloat)J, 0.0, 1.0, 0.0);
	glTranslatef(-2.5, 0.0, 1.0);
	glRotatef((GLfloat)j, 0.0, 1.0, 0.0);
	glColor3f(0.9, 0.7, 0.3);
	glutSolidSphere(0.2, 20, 8);
	glPopMatrix();
}

void drawSaturnWithRings() {
	glPushMatrix();
	glRotatef((GLfloat)S, 0.0, 1.0, 0.0);
	glTranslatef(-5.0, 0.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)s, 0.0, 0.0, 5.0);
	glColor3f(4.5, 0.5, 0.0);
	glutSolidSphere(0.5, 20, 16);


	int i = 0;
	glBegin(GL_QUAD_STRIP);
	for (i = 0; i <= 360; i++)
	{
		glVertex3f(sin(i * 3.1416 / 180) * 0.5, cos(i * 3.1416 / 180) * 0.5, 0);
		glVertex3f(sin(i * 3.1416 / 180) * 0.7, cos(i * 3.1416 / 180) * 0.7, 0);
	}
	glEnd();
	glPopMatrix();
}

void drawUranusWithRings() {
	glPushMatrix();
	glRotatef((GLfloat)U, 0.0, 1.0, 0.0);
	glTranslatef(-6.5, 0.0, 0.0);
	gluLookAt(10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 1.0);
	glRotatef((GLfloat)u, 0.0, 0.0, 5.0);
	glColor3f(1.2, 0.6, 0.2);
	glutSolidSphere(0.5, 20, 16);


	glBegin(GL_QUAD_STRIP);
	for (i = 0; i <= 360; i++)
	{
		glVertex3f(sin(i * 3.1416 / 180) * 0.5, cos(i * 3.1416 / 180) * 0.5, 0);
		glVertex3f(sin(i * 3.1416 / 180) * 0.7, cos(i * 3.1416 / 180) * 0.7, 0);
	}
	glEnd();
	glPopMatrix();
}

void drawNeptune() {
	glPushMatrix();
	glRotatef((GLfloat)N, 0.0, 1.0, 0.0);
	glTranslatef(-8.0, 0.0, 0.0);
	glRotatef((GLfloat)n, 0.0, 1.0, 0.0);
	glColor3f(1.0, 2.0, 0.0);
	glutSolidSphere(0.4, 20, 8);
	glPopMatrix();
}

void drawComets() {
	glPushMatrix();
	glRotatef((GLfloat)c, 6.0, -14.0, -6.0);
	glTranslatef(5.0, 3.0, -1.0);
	glScalef(0.60, 0.0, 2.5);
	glColor3f(7.5, 9.5, 2.0);
	glutSolidSphere(0.2, 12, 6);
	glPopMatrix();
}