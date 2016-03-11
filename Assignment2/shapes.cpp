#include "stdafx.h"
#include "shapes.h"
#include <cstdlib>

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
		glColor3ub((char)rand() % 256, (char)rand() % 256, (char)rand() % 256);
		glVertex2f(points[i][FIRST_POINT], points[i][SECOND_POINT]);
	}
	glEnd();
}

/*
 *	Draws a square.
 */
void drawSquare(void)
{
	orderedPair points[] = { { 200.0, 500.0 }, 
							 { 250.0, 500.0 },
						     { 250.0, 550.0 },
						     { 200.0, 550.0 } };
	drawPolygon(points);
}


/*
 *	Draws a rectangle.
 */
void drawRectangle(void)
{
	orderedPair points[] = { { 190.0, 520.0 },
							 { 190.0, 560.0 },
							 { 110.0, 560.0 },
							 { 110.0, 520.0 } };
	drawPolygon(points);
}