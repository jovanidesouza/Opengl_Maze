//Opengl maze

#include <GL/glut.h>
#include <GL/glu.h>
#include <math.h>

//variáveis para camera
GLint eyex = 0, eyey = 0, eyez = 0;
GLint centrox = 0, centroy = 0, centroz = 0;
//variável para esfera
GLint move_x = 0, move_y = 0, move_z = 0;

void keyboard(int key, int x, int y){

  switch(key){
      case(GLUT_KEY_F1):{//initial position of camera 1
        eyex = 0;
        eyey = 0;
        eyez = 0;
        centrox = 0;
        centroy = 0;
        centroz = 0;
        break;
      }
      case(GLUT_KEY_F2):{//camera 2
        eyex = 0;
        eyey = 0;
        eyez = 0;
        centrox = 0;
        centroy = 0;
        centroz = 0;
        break;
      }

    }
}


void draw(){

  //Background Color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	// Clear screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  glBegin(GL_QUADS);
      //define a cor do chão
      glColor3f(0.41, 0.41, 0.41);
      //posição dos vértices do quadrado usado como parametro para localização do chão
      glVertex3f(-0.5f, -0.5f, 0.f);
      glVertex3f(0.5f, -0.5f, 0.f);
      glVertex3f(0.5f, 0.5f, 0.f);
      glVertex3f(-0.5f, 0.5f, 0.f);

  glEnd();


  glFlush();
	glutSwapBuffers();

}


int main(int argc, char **argv) {
  //is used to initialize the GLUT library.
  glutInit(&argc, argv);
  //Bit mask to select a single(can be GLUT_DOUBLE) buffered window.//RGB//Bit mask to select a window with a depth buffer.
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
  //windowsize
  glutInitWindowSize(800, 700);
  //posição da criação da janela (1,1) canto superior esquerdo.
  glutInitWindowPosition(1, 1);
  //name of the window
  glutCreateWindow("Opengl CC Maze");
  // Enable Z-buffer depth test
	glEnable(GL_DEPTH_TEST);

  glutDisplayFunc(draw);
	glutSpecialFunc(keyboard);

  glutMainLoop();

}
