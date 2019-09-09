//Opengl maze

#include <GL/glut.h>
#include <GL/glu.h>
#include <math.h>

int main(int argc, char **argv) {
    glutInit(&argc, argv);//is used to initialize the GLUT library.
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);//Bit mask to select a single buffered window.//RGB//Bit mask to select a window with a depth buffer.
    glutInitWindowSize(800, 700);//windowsize
    glutInitWindowPosition(1, 1);//posição da criação da janela (1,1) canto superior esquerdo.
    glutCreateWindow("Opengl CC Maze");
    glutMainLoop();

}
