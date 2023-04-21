#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include"star.h"
#include"planets.h"
static int B = 0;
// r and R for MARS
// X Moon
// z Sun Rotation
// B all move
// c for comets

static GLint axis = 2;
GLfloat diffuseMaterial[4] = { 0.5,0.5,0.5,1.0 };

/*initialize material property,light soure,lighting model,and depth buffer*/

void myinit(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	GLfloat mat_specular[] = { 1.0,1.0,1.0,1.0 };
	GLfloat light_position[] = { 1.0,1.0,1.0,0.0 };
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseMaterial);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialf(GL_FRONT, GL_SHININESS, 25.0);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glColorMaterial(GL_FRONT, GL_DIFFUSE);
	glEnable(GL_COLOR_MATERIAL);
}

void display(void)
{

	GLfloat position[] = { 0.0,0.0,1.5,1.0 };
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1.0, 0.5, 0.0);


	/*draw sun*/
	drawSun(position);


	/*draw smaller planet mercury*/
	drawMercury();

	/*draw smaller plant venus*/
	drawVenus();


	/*draw smaller plant earth*/
	drawEarthAndMoon();

	/*draw smaller planet mars*/
	drawMars();


	/*draw smaller planet Jupiter*/
	drawJupiter();


	/*draw smaller plant Saturn with Rings*/
	drawSaturnWithRings();


	/* draw smaller planet Uranus*/
	drawUranusWithRings();


	/* draw smaller planet Neptune */
	drawNeptune();


	/* draw comets */
	drawComets();

	/*const double AST_BELT_DIST = 2.3;	// distance of closest layer of asteroid belt from sun relative to earth
	const double AST_BELT_OFFSET = 0.05;	// offset distance for layers of asteroid belt
	const int AST_BELT_NUM_LAYERS = 10;	// number of layers of asteroid belt
	const int AST_BELT_DENSITY = 30;	// number of asteroids per layer
	const double AST_SIZE = 0.1;		// radii of asteroids
	const double AST_ORBITAL_SPEED = 19.0;	// asteroid orbital speed (random interpolation guess)
	const double AST_COLOUR[3] = { 0.5, 0.5, 0.5 };
	const double DIST_MULT = 0.75;   // scaling factor to adjust for camera
	const double SIZE_MULT = 0.08;
	double angle = 0.0;

	for (int i = 0; i < AST_BELT_DENSITY; i++) {
		for (int j = 0; j < AST_BELT_NUM_LAYERS; j++) {
			glPushMatrix();
			glRotatef((GLfloat)i, 0.0, 1.0, 0.0);
			glRotated(angle * AST_ORBITAL_SPEED + (360.0 * (i + double(rand()) / double(RAND_MAX))) / AST_BELT_DENSITY, 0, 1, 0);
			glTranslated((AST_BELT_DIST + j * AST_BELT_OFFSET) * DIST_MULT, 0, 0);
			glScaled(AST_SIZE * SIZE_MULT, AST_SIZE * SIZE_MULT, AST_SIZE * SIZE_MULT);
			glRotated(angle, 0, 1, 0);
			glColor3dv(AST_COLOUR);
			glutSolidSphere(1.0, 40, 40);
			glPopMatrix();
		}
	}
	*/


	//to put the stars as a background
	drawStars();

	glutSwapBuffers();
}



void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}


// Keyboard Commands for movements of Planets, Sun and Comet
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'z':z = (z + 50) % 360;
		glutPostRedisplay();
		break;
	case 'm':m = (m + 3) % 360;
		glutPostRedisplay();
		break;
	case 'M':M = (M + 12) % 360;
		glutPostRedisplay();
		break;
	case 'v':v = (v + 2) % 360;
		glutPostRedisplay();
		break;
	case 'V':V = (V + 10) % 360;
		glutPostRedisplay();
		break;
	case 'e':e = (e + 5) % 360;
		glutPostRedisplay();
		break;
	case 'E':E = (E + 8) % 360;
		glutPostRedisplay();
		break;
	case 'r':r = (r + 6) % 360;
		glutPostRedisplay();
		break;
	case 'R':R = (R + 6) % 360;
		glutPostRedisplay();
		break;
	case 'j':j = (j + 10) % 360;
		glutPostRedisplay();
		break;
	case 'J':J = (J + 4) % 360;
		glutPostRedisplay();
		break;
	case 's':s = (s + 9) % 360;
		glutPostRedisplay();
		break;
	case 'S':S = (S + 3) % 360;
		glutPostRedisplay();
		break;
	case 'u':u = (u + 8) % 360;
		glutPostRedisplay();
		break;
	case 'U':U = (U + 2) % 360;
		glutPostRedisplay();
		break;
	case 'n':n = (n + 7) % 360;
		glutPostRedisplay();
		break;
	case 'N':N = (N + 1) % 360;
		glutPostRedisplay();
		break;
	case 'b':b = (b + 10) % 360;
		glutPostRedisplay();
		break;
	case 'c':c = (c + 1) % 360;
		b = (b + 10) % 360;
		glutPostRedisplay();
		break;
	case 'X':X = (X + 5) % 360;
		glutPostRedisplay();
		break;
		/*case 'i':i = (i + 1) % 360;
			glutPostRedisplay();
			break;
			*/
	case 'a':z = (z + 50) % 360;
		b = (b + 10) % 360;
		m = (m + 3) % 360;
		v = (v + 2) % 360;
		e = (e + 5) % 360;
		r = (r + 6) % 360;
		j = (j + 10) % 360;
		s = (s + 9) % 360;
		u = (u + 8) % 360;
		n = (n + 7) % 360;
		c = (c + 1) % 360;
		glutPostRedisplay();
		break;
	case 'A':z = (z + 50) % 360;
		b = (b + 10) % 360;
		M = (M + 12) % 360;
		V = (V + 10) % 360;
		E = (E + 8) % 360;
		R = (R + 6) % 360;
		J = (J + 4) % 360;
		S = (S + 3) % 360;
		U = (U + 2) % 360;
		N = (N + 1) % 360;
		c = (c + 1) % 360;
		glutPostRedisplay();
		break;
	case 'B':z = (z + 50) % 360;
		b = (b + 10) % 360;
		c = (c + 1) % 360;
		m = (m + 3) % 360; M = (M + 12) % 360;
		v = (v + 2) % 360; V = (V + 10) % 360;
		e = (e + 5) % 360; E = (E + 8) % 360;
		r = (r + 6) % 360; R = (R + 6) % 360;
		j = (j + 10) % 360; J = (J + 4) % 360;
		s = (s + 9) % 360; S = (S + 3) % 360;
		u = (u + 8) % 360; U = (U + 2) % 360;
		n = (n + 7) % 360; N = (N + 1) % 360;
		glutPostRedisplay();
		break;
	case 27:exit(0);
		break;
	default:break;
	}
}


// Mouse Commands for movements of Planets and Comets
void mouse(int btn, int state, int x, int y)
{
	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		z = (z + 50) % 360;
		b = (b + 10) % 360;
		c = (c + 1) % 360;
		m = (m + 3) % 360; M = (M + 12) % 360;
		v = (v + 2) % 360; V = (V + 10) % 360;
		e = (e + 5) % 360; E = (E + 8) % 360;
		r = (r + 6) % 360; R = (R + 6) % 360;
		j = (j + 10) % 360; J = (J + 4) % 360;
		s = (s + 9) % 360; S = (S + 3) % 360;
		u = (u + 8) % 360; U = (U + 2) % 360;
		n = (n + 7) % 360; N = (N + 1) % 360;
		glutPostRedisplay();
	}
	if (btn == GLUT_MIDDLE_BUTTON && state == GLUT_DOWN)
	{
		z = (z + 50) % 360;
		b = (b + 10) % 360;
		c = (c + 1) % 360;
		m = (m + 3) % 360; M = (M + 12) % 360;
		v = (v - 2) % 360; V = (V - 10) % 360;
		e = (e + 5) % 360; E = (E + 8) % 360;
		r = (r - 6) % 360; R = (R - 6) % 360;
		j = (j + 10) % 360; J = (J + 4) % 360;
		s = (s - 9) % 360; S = (S - 3) % 360;
		u = (u + 8) % 360; U = (U + 2) % 360;
		n = (n - 7) % 360; N = (N - 1) % 360;
		glutPostRedisplay();
	}
	if (btn == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		z = (z - 50) % 360;
		b = (b - 10) % 360; c = (c + 1) % 360;
		m = (m - 3) % 360; M = (M - 12) % 360;
		v = (v - 2) % 360; V = (V - 10) % 360;
		e = (e - 5) % 360; E = (E - 8) % 360;
		r = (r - 6) % 360; R = (R - 6) % 360;
		j = (j - 10) % 360; J = (J - 4) % 360;
		s = (s - 9) % 360; S = (S - 3) % 360;
		u = (u - 8) % 360; U = (U - 2) % 360;
		n = (n - 7) % 360; N = (N - 1) % 360;
		glutPostRedisplay();
	}
}


// Main Function
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("planets amidst stars");
	myinit();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glEnable(GL_DEPTH_TEST);
	glutMainLoop();
	return 0;
}