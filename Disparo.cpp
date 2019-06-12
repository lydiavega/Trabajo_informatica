#include "Disparo.h"


Disparo::Disparo()
{

}


Disparo::~Disparo(void)
{
}

void Disparo::SetDims(float anch, float alt)
{
	ancho=anch;
	alto=alt;
}
	
void Disparo::SetPos(float vx, float vy)
{
	posicion.x=vx;
	posicion.y=vy;
}

void Disparo::Dibuja()
{
	const float med_anch= ancho/2.0;
	const float med_alt= alto/2.0;

	glBindTexture( GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/Bala.png").id); //Cargamos la imagen de la bala
	
	glBegin (GL_POLYGON);
                    
		glTexCoord2d(0.0, 1.0);
		glVertex3f(posicion.x-med_anch, posicion.y-med_alt, 0.2); //La cota 0.2 se superpone al fondo, con cota 0.0 y a la de los enemigos 0.1

        glTexCoord2d(1.0, 1.0);
		glVertex3f(posicion.x+med_anch, posicion.y-med_alt, 0.2);

        glTexCoord2d(1.0, 0.0);
		glVertex3f(posicion.x+med_anch, posicion.y+med_alt, 0.2);

        glTexCoord2d(0.0, 0.0);
		glVertex3f(posicion.x-med_alt, posicion.y+med_alt, 0.2);
               	
	glEnd();
}

