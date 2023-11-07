#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;
int x=0;
int y=0;
int b=0;
int c=0;
int r=0;
int s=0;
int g=30;
int a=30;
void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glClearColor(0.0, 0.0, 1.0, 0.0);
    gluOrtho2D(0, 500, 0, 500);
}

void circle(float x1,float y1,float rx, float ry)
{
    float x2,y2;
    glBegin(GL_TRIANGLE_FAN);
    //glColor3ub(255,233,0); //Center Color of Circle
    glVertex2f(x1,y1); //Center Vertex
    int angle;
    for (angle=0; angle<=360; angle++) //0,90,180,270
    {
        //glColor3ub(255,164,0); //Edge color of Circle
        x2 = x1+rx*sin((angle*3.1416)/180);  // convert degree to radian
        y2 = y1+ry*cos((angle*3.1416)/180);
        glVertex2f(x2,y2);
    }
    //glEnd();
}
void circle_kon(int h, int k, int rx,int ry)    //Works
{
    glBegin(GL_POINTS);
    for(int i=1; i<=360; i++) //360 kon
    {
        glVertex2f(h+rx*cos(3.14159*i/180),k+ry*sin(3.14159*i/180));
    }
    glEnd();
}
void half_circle(int h, int k, int rx, int ry)    //Works
{
    glBegin(GL_POLYGON);
    for (int i = 0; i <= 180; i++)   //360 kon
    {
        glVertex2f(h + rx * cos(3.14159 * i / 180), k + ry * sin(3.14159 * i / 180));
    }
    glFlush();
}
//design
void water()
{
    glBegin(GL_POLYGON);
    glColor3ub (30,144,255);
    glVertex2d (0, 0);

    glColor3ub (0,0,205);
    glVertex2d (800, 0);

    glColor3ub (0,0,205);
    glVertex2d (1200, 800);

    glColor3ub (0,0,205);
    glVertex2d (0, 1200);
    glEnd();
}
void ground()
{
    glBegin(GL_POLYGON);
    glColor3f(0.533, 1.293, 0.0);
    glVertex2d(0, 40);
    glVertex2d(0, 60);
    glVertex2d(800, 60);
    glVertex2d(800, 40);
    glEnd();

    //Ground_Shadow
    glBegin(GL_POLYGON);
    glColor3f(0.1, 1.293, 0.0);
    glVertex2d(0, 0);
    glVertex2d(0, 40);
    glVertex2d(800, 40);
    glVertex2d(800, 0);
    glEnd();
}

void fish()
{
    //leg
    glBegin(GL_TRIANGLES);
    glColor3f(240,230,140);
    glVertex2f(x+60,y+300);
    glVertex2f(x+70,y+310);
    glVertex2f(x+70,y+290);
    glEnd();
    //hand
    glBegin(GL_TRIANGLES);
    glColor3f(240,230,140);
    glVertex2f(x+38,y+315);
    glVertex2f(x+45,y+310);
    glVertex2f(x+50,y+340);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(240,230,140);
    glVertex2f(x+38,y+285);
    glVertex2f(x+45,y+290);
    glVertex2f(x+50,y+260);
    glEnd();
    //body
    glColor3f(255,215,0);
    glBegin(GL_POLYGON);
    glVertex2f(x+20,y+300);
    glVertex2f(x+40,y+320);
    glVertex2f(x+60,y+300);
    glVertex2f(x+40,y+280);
    glEnd();
    //eye
    glColor3f(0,0,0);
    glPointSize(7.0);
    glBegin(GL_POINTS);
    glVertex2f(x+30,y+305);
    glEnd();

//==========2=========
//leg
    glBegin(GL_TRIANGLES);
    glColor3f(240,230,140);
    glVertex2f(x+160,y+200);
    glVertex2f(x+170,y+210);
    glVertex2f(x+170,y+190);
    glEnd();
    //hand
    glBegin(GL_TRIANGLES);
    glColor3f(240,230,140);
    glVertex2f(x+138,y+215);
    glVertex2f(x+145,y+210);
    glVertex2f(x+150,y+240);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(240,230,140);
    glVertex2f(x+138,y+185);
    glVertex2f(x+145,y+190);
    glVertex2f(x+150,y+160);
    glEnd();
    //body
    glColor3f(51,0,102);
    glBegin(GL_POLYGON);
    glVertex2f(x+120,y+200);
    glVertex2f(x+140,y+220);
    glVertex2f(x+160,y+200);
    glVertex2f(x+140,y+180);
    glEnd();
    //eye
    glColor3f(0,0,0);
    glPointSize(7.0);
    glBegin(GL_POINTS);
    glVertex2f(x+130,y+205);
    glEnd();

//==========2=========
//leg
    glBegin(GL_TRIANGLES);
    glColor3f(240,230,140);
    glVertex2f(x+160,y+400);
    glVertex2f(x+170,y+410);
    glVertex2f(x+170,y+390);
    glEnd();
    //hand
    glBegin(GL_TRIANGLES);
    glColor3f(240,230,140);
    glVertex2f(x+138,y+415);
    glVertex2f(x+145,y+410);
    glVertex2f(x+150,y+440);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(240,230,140);
    glVertex2f(x+138,y+385);
    glVertex2f(x+145,y+390);
    glVertex2f(x+150,y+360);
    glEnd();
    //body
    glColor3f(0,255,0);
    glBegin(GL_POLYGON);
    glVertex2f(x+120,y+400);
    glVertex2f(x+140,y+420);
    glVertex2f(x+160,y+400);
    glVertex2f(x+140,y+380);
    glEnd();
    //eye
    glColor3f(0,0,0);
    glPointSize(7.0);
    glBegin(GL_POINTS);
    glVertex2f(x+130,y+405);
    glEnd();
//==========3=========
    glBegin(GL_TRIANGLES);
    glColor3f(221,160,221);
    glVertex2f(x+320,y+300);
    glVertex2f(x+330,y+310);
    glVertex2f(x+330,y+290);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(221,160,221);
    glVertex2f(x+298,y+315);
    //glColor3f(1.0,0.0,0.0);
    glVertex2f(x+305,y+310);
    glVertex2f(x+310,y+340);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(221,160,221);
    glVertex2f(x+298,y+285);
    glVertex2f(x+305,y+290);
    glVertex2f(x+310,y+260);
    glEnd();
    //body
    glColor3f(0,0,215);
    glBegin(GL_POLYGON);
    glVertex2f(x+280,y+300);
    glVertex2f(x+300,y+320);
    glVertex2f(x+320,y+300);
    glVertex2f(x+300,y+280);
    glEnd();
    //eye
    glColor3f(0.0,0.0,0.0);
    glPointSize(7.0);
    glBegin(GL_POINTS);
    glVertex2f(x+290,y+305);
    glEnd();
//==========rrrr=========
    glColor3f(0,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(r+220,s+400);
    glVertex2f(r+240,s+420);
    glVertex2f(r+260,s+400);
    glVertex2f(r+240,s+380);
    glEnd();
    //leg
    glBegin(GL_TRIANGLES);
    glColor3f(224,255,255);
    glVertex2f(r+220,s+400);
    glVertex2f(r+200,s+380);
    glVertex2f(r+210,s+410);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(224,255,255);
    glVertex2f(r+220,s+400);
    glVertex2f(r+200,s+420);
    glVertex2f(r+210,s+390);
    glEnd();
    //p
    glBegin(GL_TRIANGLES);
    glColor3f(224,255,255);
    glVertex2f(r+240,s+380);
    glVertex2f(r+235,s+385);
    glVertex2f(r+220,s+360);
    glEnd();
    //p
    glBegin(GL_TRIANGLES);
    glColor3f(224,255,255);
    glVertex2f(r+240,s+420);
    glVertex2f(r+235,s+415);
    glVertex2f(r+220,s+440);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glPointSize(7.0);
    glBegin(GL_POINTS);
    glVertex2f(r+250,s+405);
    glEnd();
//=======rr2=====
    glColor3f(128,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(r+20,s+300);
    glVertex2f(r+40,s+320);
    glVertex2f(r+60,s+300);
    glVertex2f(r+40,s+280);
    glEnd();
    //leg
    glBegin(GL_TRIANGLES);
    glColor3f(216,191,216);
    glVertex2f(r+20,s+300);
    glVertex2f(r+0,s+280);
    glVertex2f(r+10,s+310);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(216,191,216);
    glVertex2f(r+20,s+300);
    glVertex2f(r+0,s+320);
    glVertex2f(r+10,s+290);
    glEnd();
    //p
    glBegin(GL_TRIANGLES);
    glColor3f(216,191,216);
    glVertex2f(r+40,s+280);
    glVertex2f(r+35,s+285);
    glVertex2f(r+20,s+260);
    glEnd();
    //p
    glBegin(GL_TRIANGLES);
    glColor3f(216,191,216);
    glVertex2f(r+40,s+320);
    glVertex2f(r+35,s+315);
    glVertex2f(r+20,s+340);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glPointSize(7.0);
    glBegin(GL_POINTS);
    glVertex2f(r+50,s+305);
    glEnd();
//==========rrrr3=========
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(r+220,s+200);
    glVertex2f(r+240,s+220);
    glVertex2f(r+260,s+200);
    glVertex2f(r+240,s+180);
    glEnd();
    //leg
    glBegin(GL_TRIANGLES);
    glColor3f(224,255,255);
    glVertex2f(r+220,s+200);
    glVertex2f(r+200,s+180);
    glVertex2f(r+210,s+210);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(224,255,255);
    glVertex2f(r+220,s+200);
    glVertex2f(r+200,s+220);
    glVertex2f(r+210,s+190);
    glEnd();
//p
    glBegin(GL_TRIANGLES);
    glColor3f(224,255,255);
    glVertex2f(r+240,s+180);
    glVertex2f(r+235,s+185);
    glVertex2f(r+220,s+160);
    glEnd();
//p
    glBegin(GL_TRIANGLES);
    glColor3f(224,255,255);
    glVertex2f(r+240,s+220);
    glVertex2f(r+235,s+215);
    glVertex2f(r+220,s+240);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glPointSize(7.0);
    glBegin(GL_POINTS);
    glVertex2f(r+250,s+205);
    glEnd();
}

void bubble()
{
    glPointSize(3);
    glColor3f(1.0, 1.0, 1.0);
    circle_kon(b+30, c+10, 5, 5);

    glColor3f(1.0, 1.0, 1.0);
    circle_kon(b+15, c+0, 10, 10);


    glColor3f(1.0, 1.0, 1.0);
    circle_kon(b+215, c+0, 5, 5);

    glColor3f(1.0, 1.0, 1.0);
    circle_kon(b+230, c+10, 10, 10);


    glColor3f(1.0, 1.0, 1.0);
    circle_kon(b+415, c+0, 5, 5);

    glColor3f(1.0, 1.0, 1.0);
    circle_kon(b+430, c+10, 10, 10);
}
void starf()
{
    //Star
    glColor3ub (219,112,147);
    glBegin(GL_POLYGON);
    glVertex2d (x+30, 40);
    glVertex2d (x+40,50);
    glColor3ub (x+139,0,139);
    glVertex2d (x+60, 40);
    glVertex2d (x+40,30);
    glEnd();

    glColor3ub (219,112,147);
    glBegin(GL_POLYGON);
    glVertex2d (x+30, 40);
    glVertex2d (x+40,30);
    glColor3ub (x+139,0,139);
    glVertex2d (x+30, 10);
    glVertex2d (x+20,30);
    glEnd();

    glColor3ub (219,112,147);
    glBegin(GL_POLYGON);
    glVertex2d (x+30, 40);
    glVertex2d (x+20,30);
    glColor3ub (x+139,0,139);
    glVertex2d (x+0, 40);
    glVertex2d (x+20,50);
    glEnd();

    glColor3ub (219,112,147);
    glBegin(GL_POLYGON);
    glVertex2d (x+30, 40);
    glVertex2d (x+20,50);
    glColor3ub (x+139,0,139);
    glVertex2d (x+30, 70);
    glVertex2d (x+40,50);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    circle(x+25, 45, 3, 3);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    circle(x+35, 45, 3, 3);
    glEnd();
}
void stone()
{
    glColor3ub(176,196,222);
    half_circle(390, 10, 35, 40);
    glEnd();
    glColor3ub(112,128,144);
    half_circle(360, 0, 45, 30);
    glEnd();
    glColor3ub(188,143,143);
    half_circle(420, 0, 35, 20);
    glEnd();
}
void grass(int g,int a)
{
    glColor3ub(34,139,34);
    glPointSize(50.0);
    glBegin(GL_POLYGON);
    glVertex2d (g+50, a-50);
    glVertex2d (g+60,a-50);
    glVertex2d (g+40,a+90);
    glVertex2d (g+50,a-50);
    glEnd();
}
void display()
{
    water();
    ground();
    fish();
    bubble();
    stone();

    grass(g,a);
    grass(g-20,a);
    grass(g+20,a);
    grass(g-10,a-80);
    grass(g-30,a-10);
    grass(g-40,a-40);
    grass(g-50,a);
    grass(g+50,a);
    grass(g+30,a);
    grass(g+70,a);
    grass(g-70,a);
    grass(g-60,a-20);
    grass(g-80,a);
    grass(g+60,a-30);
    grass(g+10,a-20);
    grass(g-90,a);
    grass(g-100,a-30);
    grass(g+80,a);
    grass(g+100,a-20);
    grass(g+110,a);
    grass(g+120,a-30);
    grass(g+125,a-30);
    grass(g+130,a);
    grass(g+150,a-20);
    grass(g+155,a-20);
    grass(g+160,a);
    grass(g+170,a-30);
    grass(g+180,a);
    grass(g+200,a-20);
    grass(g+205,a-20);
    grass(g+210,a);
    grass(g+220,a-30);
    grass(g+380,a);
    grass(g+400,a-20);
    grass(g+405,a-20);
    grass(g+410,a);
    grass(g+420,a-30);
    grass(g+440,a);
    grass(g+460,a-20);
    grass(g+465,a-20);
    grass(g+470,a);
    grass(g+480,a-30);
    grass(g+490,a);
    grass(g+500,a-20);
    grass(g+505,a-20);
    grass(g+510,a);
    grass(g+520,a-30);

    starf();

    //bubble
    if(c<=500)
    {
        c++;
    }
    else
        c=0;

    //fl
    if(x>=0)
    {
        x--;
    }
    else
        x=500;
    //fr
    if(r<=500)
    {
        r++;
    }
    else
        r=0;

    glFlush();
}

void update(int val)
{
    glutTimerFunc(16,update, 0);
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1200,800);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Aquarium");
    init ();
    glutDisplayFunc(display);
    glutTimerFunc(16,update,0);
    glutMainLoop();
}
