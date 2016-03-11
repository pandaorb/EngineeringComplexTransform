#include "stdafx.h"
#include "shapes.h"
#include "buildings.h"
#include "student.h"

void drawCampus(void)
{
	drawShelby();
	drawWiggins();
	drawWoltosz();
	drawTextile();
	drawShops();
	drawL();
	drawRamsay();
	drawWilmore();
	drawRoss();
	drawHarbert();
	drawDavis();
	drawBroun();
	initStudent();
	glFlush(); //actually draws things
}

void drawShelby(void)
{
	/* Shelby Central */
	drawSquare();

	/* Shelby Bridges */
	glPushMatrix();
	glTranslatef(75.0, 10.0, 0.0);
	glTranslatef(110.0, 520.0, 0.0);
	glScalef(0.25, 0.25, 1.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(130.0, 10.0, 0.0);
	glTranslatef(110.0, 520.0, 0.0);
	glScalef(0.25, 0.25, 1.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();

	/* Shelby Wings */
	drawRectangle();

	glPushMatrix();
	glTranslatef(150.0, 0.0, 0.0);
	drawRectangle();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(110.0, 540.0, 0.0);
	glRotatef(-90.0, 0.0, 0.0, 1.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(320.0, 540.0, 0.0);
	glRotatef(-90.0, 0.0, 0.0, 1.0);
	glTranslatef(-110.0, -540.0, 0.0);
	drawRectangle();
	glPopMatrix();
}

void drawWiggins(void)
{
	/* Wiggins Main */
	glPushMatrix();
	glTranslatef(-55.0, -120.0, 0.0);
	drawSquare();
	glPopMatrix();

	/* Wiggins Back */
	glPushMatrix();
	glTranslatef(20.0, -120.0, 0.0);
	drawRectangle();
	glPopMatrix();
}

void drawWoltosz(void)
{
	/* Woltosz Main */
	glPushMatrix();
	glTranslatef(60.0, -110.0, 0.0);
	glTranslatef(200.0, 500.0, 0.0);
	glScalef(1.0, 0.75, 1.0);
	glTranslatef(-200.0, -500.0, 0.0);
	drawSquare();
	glPopMatrix();

	/* Woltosz Back */
	glPushMatrix();
	glTranslatef(135.0, -120.0, 0.0);
	drawRectangle();
	glPopMatrix();
}

void drawTextile(void)
{
	glPushMatrix();
	glTranslatef(300.0, 20.0, 0.0);
	glTranslatef(110.0, 520.0, 0.0);
	glScalef(1.0, 0.5, 1.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();
}

void drawShops(void)
{
	/* Shop Top */
	glPushMatrix();
	glTranslatef(310.0, -10.0, 0.0);
	glTranslatef(110.0, 520.0, 0.0);
	glScalef(0.5, 0.3, 0.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();

	/* Shop Middle */
	glPushMatrix();
	glTranslatef(310.0, -30.0, 0.0);
	glTranslatef(110.0, 520.0, 0.0);
	glScalef(0.5, 0.3, 0.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();

	/* Shop Bottom */
	glPushMatrix();
	glTranslatef(310.0, -50.0, 0.0);
	glTranslatef(110.0, 520.0, 0.0);
	glScalef(0.5, 0.3, 0.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();

	/* Shop East */
	glPushMatrix();
	glTranslatef(350.0, -50.0, 0.0);
	glTranslatef(110.0, 520.0, 0.0);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glScalef(0.65, 0.25, 0.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();
}

void drawL(void)
{
	/* L East */
	glPushMatrix();
	glTranslatef(380.0, -80.0, 0.0);
	glTranslatef(110.0, 520.0, 0.0);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glScalef(0.75, 0.5, 1.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();

	/* L South */
	glPushMatrix();
	glTranslatef(300.0, -80.0, 0.0);
	glTranslatef(110.0, 520.0, 0.0);
	glScalef(1.0, 0.5, 1.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();
}

void drawRamsay(void)
{
	glPushMatrix();
	glTranslatef(430.0, 20.0, 0.0);
	glTranslatef(110.0, 520.0, 0.0);
	glScalef(1.0, 0.6, 1.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();
}

void drawWilmore(void)
{
	glPushMatrix();
	glTranslatef(340.0, -30.0, 0.0);
	glTranslatef(200.0, 500.0, 0.0);
	glScalef(1.6, 1.0, 1.0);
	glTranslatef(-200.0, -500.0, 0.0);
	drawSquare();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(350.0, -40.0, 0.0);
	glTranslatef(200.0, 500.0, 0.0);
	glScalef(1.2, 1.4, 1.0);
	glTranslatef(-200.0, -500.0, 0.0);
	drawSquare();
	glPopMatrix();
}

void drawRoss(void)
{
	glPushMatrix();
	glTranslatef(480.0, -110.0, 0.0);
	glTranslatef(110.0, 520.0, 0.0);
	glScalef(0.75, 0.75, 0.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();
}

void drawHarbert(void)
{
	glPushMatrix();
	glTranslatef(550.0, 18.0, 0.0);
	glTranslatef(110.0, 520.0, 0.0);
	glScalef(0.85, 0.70, 0.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();
}

void drawDavis(void)
{
	glPushMatrix();
	glTranslatef(620.0, -60.0, 0.0);
	glTranslatef(110.0, 520.0, 0.0);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glScalef(0.85, 0.70, 0.0);
	glTranslatef(-110.0, -520.0, 0.0);
	drawRectangle();
	glPopMatrix();
}

void drawBroun(void)
{
	/* Square Part */
	glPushMatrix();
	glTranslatef(65.0, -200.0, 0.0);
	glTranslatef(200.0, 500.0, 0.0);
	glScalef(1.0, 0.75, 1.0);
	glTranslatef(-200.0, -500.0, 0.0);
	drawSquare();
	glPopMatrix();

	/* Rectangle Part */
	glPushMatrix();
	glTranslatef(170.0, -190.0, 0.0);
	drawRectangle();
	glPopMatrix();

	/* Weird Part */
	orderedPair weird[] = { { 322.0, 330.0 }, 
							{ 360.0, 330.0 }, 
							{ 358.0, 290.0 },  
							{ 326.0, 290.0 } };
	drawPolygon(weird);
}