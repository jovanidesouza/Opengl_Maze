//Opengl maze

#include <GL/glut.h>
#include <GL/glu.h>
#include <math.h>
#include <stdio.h>

//variáveis para camera (gluLookAt)
GLfloat eyex = 0, eyey = 0.5, eyez = 0.3;
GLfloat centrox = 0, centroy = 0, centroz = 0.5;
//variáveis para rotação da base
GLfloat rotating_X = 0;
GLfloat rotating_Y = 0;
float tam = 0.1;

//////////////////////////////////////////////////////////////////////////////////

void keyboard(int key, int x, int y){

  if(key == GLUT_KEY_F1){//reset rotation
    rotating_Y = 0;
    rotating_X = 0;
  } else if (key == GLUT_KEY_RIGHT) {
		rotating_Y += 5;
	} else if (key == GLUT_KEY_LEFT) {
		rotating_Y -= 5;
	} else if (key == GLUT_KEY_DOWN) {
		rotating_X -= 5;
	} else if (key == GLUT_KEY_UP) {
		rotating_X += 5;
	} else if(key == GLUT_KEY_F2){
    tam = tam / 2;
  } else if(key == GLUT_KEY_F3){
    tam = tam * 2;

  }
  glutPostRedisplay();
}

void draw(){


	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  // Reset transformations
	glLoadIdentity();
  //gluLookAt(eyex,eyey,eyez, centrox,centroy,centroz, 0,1,0);
	glRotatef(rotating_X, 1.0f, 0.0f, 0.0f);
	glRotatef(rotating_Y, 0.0f, 1.0f, 0.0f);

  glBegin(GL_QUADS);
    //define a cor do chão
    glColor3f(0.41, 0.41, 0.41);
    //posição dos vértices do quadrado usado como parametro para localização do chão
    glVertex3f(-0.8f, -0.8f, 0.f);
    glVertex3f( 0.8f, -0.8f, 0.f);
    glVertex3f( 0.8f,  0.8f, 0.f);
    glVertex3f(-0.8f,  0.8f, 0.f);
  glEnd();

  //inicio quadrado
  //base
  glBegin(GL_QUADS);
    glColor3f(0.20, 0.20, 0.20);
    glVertex3f( -tam, tam, tam);
    glVertex3f( -tam, -tam, tam);
    glVertex3f( tam, -tam, tam);
    glVertex3f( tam, tam, tam);
  glEnd();
  glBegin(GL_QUADS);
    glColor3f(1, 0, 1);
    glVertex3f( -tam, tam, tam);
    glVertex3f( -tam, tam, -tam);
    glVertex3f( tam, tam, -tam);
    glVertex3f( tam, tam, tam);
  glEnd();
  glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex3f( tam, tam, tam);
    glVertex3f( tam, -tam, tam);
    glVertex3f( tam, -tam, -tam);
    glVertex3f( tam, tam, -tam);
  glEnd();
  glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex3f( -tam, tam, tam);
    glVertex3f( -tam, -tam, tam);
    glVertex3f( -tam, -tam, -tam);
    glVertex3f( -tam, tam, -tam);
  glEnd();
  glBegin(GL_QUADS);
    glColor3f(0, 0, 1);
    glVertex3f( -tam, -tam, tam);
    glVertex3f( tam, -tam, tam);
    glVertex3f( tam, -tam, -tam);
    glVertex3f( -tam, -tam, -tam);
  glEnd();
  glBegin(GL_QUADS);
    glColor3f(0.20, 0.20, 0.20);
    glVertex3f( -tam, tam, -tam);
    glVertex3f( -tam, -tam, -tam);
    glVertex3f( tam, -tam, -tam);
    glVertex3f( tam, tam, -tam);
  glEnd();

  glFlush();
	glutSwapBuffers();
}


int main(int argc, char **argv) {

  //is used to initialize the GLUT library.
  glutInit(&argc, argv);
  //Bit mask to select a single(can be GLUT_SINGLE) buffered window.//RGB//Bit mask to select a window with a depth buffer.
  glutInitDisplayMode(GLUT_DOUBLE| GLUT_RGB | GLUT_DEPTH);
  //windowsize
  glutInitWindowSize(1200, 1000);
  //posição da criação da janela (1,1) canto superior esquerdo.
  glutInitWindowPosition(1, 1);
  //name of the window
  glutCreateWindow("Opengl CC Maze");
  // Enable Z-buffer depth test
	glEnable(GL_DEPTH_TEST);
  //callback draw
  glutDisplayFunc(draw);
  //get keyborad actions
	glutSpecialFunc(keyboard);
  //main loop
  glutMainLoop();

}
