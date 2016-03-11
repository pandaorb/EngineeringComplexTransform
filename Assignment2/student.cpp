#include "stdafx.h"
#include "shapes.h"
#include "student.h"
#include "buildings.h"
#include <stdlib.h>

#define FACING_UP		0
#define FACING_RIGHT	1
#define FACING_DOWN		2
#define FACING_LEFT		3

char direction = FACING_UP;
orderedPair topLeft = { 225.0, 470.0 };
orderedPair topRight = { 235.0, 470.0 };
orderedPair bottomRight = { 235.0, 460.0 };
orderedPair bottomLeft = { 225.0, 460.0 };

// An Atari student :D

orderedPair student[] = { { topLeft[FIRST_POINT], topLeft[SECOND_POINT] }, 
						  { topRight[FIRST_POINT], topRight[SECOND_POINT] }, 
						  { bottomRight[FIRST_POINT], bottomRight[SECOND_POINT] }, 
						  { bottomLeft[FIRST_POINT], bottomLeft[SECOND_POINT]} };

void initStudent(void)
{
	glColor3f(0.5, 0.2, 0.0);
	drawStudent();
}

void drawStudent()
{
	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(student)/sizeof(student[0]); i++)
	{
		glVertex2f(student[i][FIRST_POINT], student[i][SECOND_POINT]);
	}
	glEnd();
}

void keyboard(int key, int width, int height)
{
	switch (key)
	{
		case GLUT_KEY_UP:
			moveUp();
			break;
		case GLUT_KEY_RIGHT:
			moveRight();
			break;
		case GLUT_KEY_DOWN:
			moveDown();
			break;
		case GLUT_KEY_LEFT:
			moveLeft();
			break;
		default: 
			break;
	}
}

void moveUp(void)
{
	//if facing up then move up
	if (direction == FACING_UP)
	{
		//clear screen ???
		glPushMatrix();
		glTranslatef(0.0, 10.0, 0.0);
		drawStudent();
		glPopMatrix();
		topLeft[SECOND_POINT] += 10.0;
		topRight[SECOND_POINT] += 10.0;
		bottomRight[SECOND_POINT] += 10.0;
		bottomLeft[SECOND_POINT] += 10.0;
		glutPostRedisplay();
	}
	//if not facing up, rotate to up
	else
	{
		//rotate up algorithm
		direction = FACING_UP;
	}
}

void moveRight(void)
{
	if (direction == FACING_RIGHT)
	{
		glPushMatrix();
		glTranslatef(10.0, 0.0, 0.0);
		drawStudent();
		glPopMatrix();
		topLeft[FIRST_POINT] += 10.0;
		topRight[FIRST_POINT] += 10.0;
		bottomRight[FIRST_POINT] += 10.0;
		bottomLeft[FIRST_POINT] += 10.0;
		glutPostRedisplay();
	}
	else
	{
		//rotate to right
		direction = FACING_RIGHT;
	}
}

void moveDown(void)
{
	if (direction == FACING_DOWN)
	{
		glPushMatrix();
		glTranslatef(0.0, -10.0, 0.0);
		drawStudent();
		glPopMatrix();
		topLeft[SECOND_POINT] -= 10.0;
		topRight[SECOND_POINT] -= 10.0;
		bottomRight[SECOND_POINT] -= 10.0;
		bottomLeft[SECOND_POINT] -= 10.0;
		glutPostRedisplay();
	}
	else
	{
		//rotate down here
		direction = FACING_DOWN;
	}
}

void moveLeft(void)
{
	if (direction == FACING_LEFT)
	{
		glPushMatrix();
		glTranslatef(-10.0, 0.0, 0.0);
		drawStudent();
		glPopMatrix();
		topLeft[FIRST_POINT] -= 10.0;
		topRight[FIRST_POINT] -= 10.0;
		bottomRight[FIRST_POINT] -= 10.0;
		bottomLeft[FIRST_POINT] -= 10.0;
		glutPostRedisplay();
	}
	else
	{
		//rotate left here
		direction = FACING_LEFT;
	}
}
