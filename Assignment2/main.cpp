#include "stdafx.h"
#include <GL/glut.h>
#include "initialize.h"
#include "buildings.h"
#include "student.h"


int _tmain(int argc, char** argv)
{
	glutInit(&argc, argv);
	viewInit();
	glutDisplayFunc(drawCampus);
		glutSpecialFunc(keyboard);
	programInit();
	glutMainLoop();
	return 0;
}