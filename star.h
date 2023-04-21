#include<GL/glut.h>
static int b = 0;

void drawStars() {
	glPushMatrix();
	glTranslatef(0.0, -2.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 2.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, -4.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 4.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.1, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, -6.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.1, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 6.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.1, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, -8.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.1, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 8.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.1, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(8.0, 0.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-8.0, -2.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(6.0, 4.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-6.0, 4.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(5.0, -4.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-7.0, 3.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-7.0, 2.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(7.0, -2.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(7.0, -3.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-7.0, -3.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(7.0, 2.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0, -7.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.0, -5.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 3.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(5.0, -1.0, 0.0);
	gluLookAt(0.0, 10.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.07, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-6.0, 7.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.07, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, 3.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.07, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.5, 4.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.07, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-9.0, 3.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.07, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(9.0, -5.9, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.1, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(6.5, 8.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.1, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(5.0, 7.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.1, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-9.0, 6.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.1, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-10.5, 9.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.07, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-11.0, -7.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.07, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-11.0, 5.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-7.0, -5.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-10.0, 3.7, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-7.0, -2.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-8.0, 5.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.03, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-8.0, -5.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-11.0, -4.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(6.0, -5.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-6.9, 7.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(5.0, -4.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(6.0, 4.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(3.0, -4.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(4.0, -7.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-4.0, -3.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(4.0, -7.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(11.0, -4.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(9.0, -9.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(8.0, -4.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(9.0, 5.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0); glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(7.0, 7.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.9, 7.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0, 6.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.8, -5.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(3.0, -7.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0, 5.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.0, 4.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 7.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 5.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-9.0, 0.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-10.0, 4.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(9.0, 3.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-10.0, -6.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-9.0, -7.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-3.0, 4.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-9.9, -7.5, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0, 5.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(3.0, 6.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-2.0, -5.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-3.0, -2.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-4.0, -8.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(8.3, -7.1, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-10.0, 7.6, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-3.0, 7.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.4, 7.5, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(3.0, 6.5, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-6.0, 4.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-6.0, -6.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.05, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.7, 4.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.0, 2.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, -1.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 1.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0);
	glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 2.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 0.0, 0.0, 0.0); glScalef(200.0, 0.0, 0.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(8.7, 9.0, 0.0);
	gluLookAt(0.0, 10.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)b, 1.0, 7.0, 5.0);
	glColor3f(4.3, 3.5, 1.0);
	glutSolidSphere(0.04, 20, 8);
	glPopMatrix();
}