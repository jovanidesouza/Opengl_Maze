//Opengl maze

#include <GL/glut.h>
#include <GL/glu.h>
#include <math.h>

//variáveis para camera
GLint eyex=0, eyey=150, eyez=0;
GLint centrox=0, centroy=0, centroz=-30;
//variável para esfera
GLint movex=-45, movey=0, movez=-60;

void Keyboard(GLint key, GLint x, GLint y){

  switch(key){
      case(GLUT_KEY_F1):{//initial position of camera
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
      case(GLUT_KEY_F3):{// camera 3
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


int main(int argc, char **argv) {
  glutInit(&argc, argv);//is used to initialize the GLUT library.
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);//Bit mask to select a single buffered window.//RGB//Bit mask to select a window with a depth buffer.
  glutInitWindowSize(800, 700);//windowsize
  glutInitWindowPosition(1, 1);//posição da criação da janela (1,1) canto superior esquerdo.
  glutCreateWindow("Opengl CC Maze");
  glutMainLoop();

}
