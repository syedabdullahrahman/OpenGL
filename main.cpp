
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include<stdio.h>

void display()  //every time it is called
{
    glClear(GL_COLOR_BUFFER_BIT); //first call & second call er moddhe ja korbo

    //degree , x , y , z
    glRotatef(1,0.0,1.0,0.0);

    glBegin(GL_TRIANGLES);
        glColor3f(1.0,0.0,0.0); // ekbar set korsilam dekhe ek color ee // ekhon ekbar color set korbo r ekbo , set korbo and akbo
        //x y z

        glVertex3f(-0.5,-0.5,0.0);
        glColor3f(0.0,1.0,0.0);
        glVertex3f(0.5,-0.5,0.0);
        glColor3f(0.0,0.0,1.0);
        glVertex3f(0.0,0.5,0.0);


    glEnd();






    //second call
    glutSwapBuffers(); //Double buffering er jonno , memory te lekhe ekbar , screen a lekkhe ekbar
}
void reshape(int w, int h)
{
    glViewport(0,0,w,h);
}

void initOpenGL()
{

    //RGBA
    glClearColor(0.0,0.0,0.0,1.0); //set color , not use this


}
int main(int argc, char **argv)
{
    //start up freeglut
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH );
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("My One");

    initOpenGL();

    glutDisplayFunc(display);  // function to call display my things
    glutIdleFunc(display);  // function to call display my things
    glutReshapeFunc(reshape);
    glutMainLoop(); //calling display over and over again

    return 0;
}
