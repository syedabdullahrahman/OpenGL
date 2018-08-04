
#define GLEW_STATIC

#include<stdlib.h>
#include<stdio.h>
#include<GL/glew.h>
#include<GL/freeglut.h>

GLfloat vertices [] ={ -0.5,-0.5,0.0,
0.5,-0.5,0.0,
0.0,0.5,0.0 };



void display()
{
    glClear(GL_COLOR_BUFFER_BIT);


    glEnableClientState(GL_VERTEX_ARRAY);
        glVertexPointer(3,GL_FLOAT,0, vertices);

        glDrawArrays(GL_TRIANGLES,0,3);

    glDisableClientState(GL_VERTEX_ARRAY);


    glutSwapBuffers();
}
void initOpenGL()
{
    glClearColor(1.0,0.0,0.0,1.0);

}
void reshape(int w, int h)
{
    glViewport(0,0,w,h);

}

int main(int argc , char ** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutCreateWindow("My One");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutReshapeFunc(reshape);

    initOpenGL();
    glutMainLoop();
    return 0;
}
