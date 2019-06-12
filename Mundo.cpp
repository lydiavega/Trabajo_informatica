#include "Mundo.h"


void Mundo::Dibuja()
{
	//Dibujo del fondo
	
	glBindTexture( GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/Fondo.png").id); //Cargamos la imagen de fondo
	
	glBegin (GL_POLYGON);
                    
		glTexCoord2d(0.0, 1.0);
        glVertex3f(0.0, 0.0, 0.0);

        glTexCoord2d(1.0, 1.0);
        glVertex3f(100.0, 0.0, 0.0);

        glTexCoord2d(1.0, 0.0);
        glVertex3f(100.0, 65.0, 0.0);

        glTexCoord2d(0.0, 0.0);
        glVertex3f(0.0, 65.0, 0.0);
               	
	glEnd();


	//Dibujo del resto de los objetos
	
	disparo.Dibuja();
	gallina1.Dibuja();
	
}

void Mundo::Inicializa()
{
	disparo.SetDims(1.0f, 1.8f); //Establecemos la anchura y la altura del jugador
	disparo.SetPos(67.0f, 30.5f); //Posición del disparo (de prueba)

	gallina1.SetDims(47.2f, 42.3f);
	gallina1.SetPos(44.0f, 20.0f);
	gallina1.SetVel(0.0f, 0.0f);

}

void Mundo::Mueve(void) {

	gallina1.Mueve(0.025f);

}

