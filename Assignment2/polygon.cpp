#include "stdafx.h"
#include "polygon.h"

#define FIRST_POINT 0
#define SECOND_POINT 1

/*
 *	This function will draw a convex polygon based upon the points
 *	provided as arguments.
 *	@args - an array of orderedPairs which in order will create
 *			the vertecies of a polygon
 *	@return - none
 */
void drawPolygon(orderedPair points[])
{
	glBegin(GL_POLYGON);
	for (int i = 0; i < sizeof(points); i++)
	{
		glVertex2f(points[i][FIRST_POINT], points[i][SECOND_POINT]);
	}
	glEnd();
}