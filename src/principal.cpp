#include <stdlib.h> 
#include "ETSIDI.h"
#include <stdio.h>
#include "glut.h"

#include "Mundo.h"

#define ANCHO_VENTANA 1000
#define ALTO_VENTANA 650

Mundo mundo;

//Prototipo de las funciones callback
void onDraw (void);
void onTimer (int value);
void onKeyboard (unsigned char key, int x, int y);
void onSpecialKeyboard (int key, int x, int y);


int main (int argc, char* argv[])
{
	//Inicialización de la ventana gráfica
	glutInit (&argc, argv); //Inicia la glut
	glutInitWindowSize (ANCHO_VENTANA,ALTO_VENTANA); //Configura el tamaño de la ventana inicial, en pixeles
	glutInitWindowPosition(150,50); //Posición inicial de la pantalla
	glutCreateWindow ("Mi juego"); //Da título a la ventana

	//Código de inicialización

	
	//Registrar los callbacks
	glutDisplayFunc (onDraw);
	glutTimerFunc (25,onTimer,0);
	glutSpecialFunc (onSpecialKeyboard);
	glutKeyboardFunc (onKeyboard);

	mundo.Inicializa();

	glutMainLoop(); //pasa el control a la glut, que llamará a los callbacks
	return 0;

}

//Definición de las funciones callback
void onDraw(void)
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_TEXTURE_2D);
	glMatrixMode(GL_MODELVIEW);      // To operate on Model-View matrix
	glLoadIdentity();

	glViewport(0, 0, ANCHO_VENTANA, ALTO_VENTANA); //Establece el punto de vista y el eje de cordenadas de éste en el centro de la pantalla
	glOrtho(-50.0, 50.0, -32.5, 32.5, 0.0, -1.0); // Establece la vista 2D, con las coordenadas deseadas.
												 //0.0 es el valor más bajo en el que podemos dibujar en z y 1.0 la coordenada más alta
	glTranslatef(-50.0f, -32.5f, 0.0f); //Traslada el eje de coordenadas a la esquina inferior izquierda de la pantalla
										//El área visible constituye un rectángulo cuyos vértices tienen las coordenadas (0,0), (100,0), (100,65), (0,65)
	glEnable(GL_BLEND); //Habilita el uso de imágenes transparentes

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glDisable(GL_LIGHTING);

	//Código del dibujo
	mundo.Dibuja();


	glEnable(GL_LIGHTING); //Habilita las luces
	//Redibujado
	glFlush();


}

void onTimer (int value)
{
	//Código de la animación
	mundo.Mueve();

	//No borrar las siguientes líneas, ni escribir nada después
	glutTimerFunc(25,onTimer,0);
	glutPostRedisplay();

}

void onKeyboard (unsigned char key, int x, int y)
{

}

void onSpecialKeyboard (int key, int x, int y)
{
	mundo.teclaEspecial(key);

}

