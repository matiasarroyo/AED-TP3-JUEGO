/*TP3 - Juego
*Matias Arroyo
*Legajo 144658-7
*25/04/2015
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <string>
#include <conio.h>

using namespace std;
int main( ) 
{
	int tematica = 1;
	int puntos=0;
	string pregunta;
	string respuesta;
	int numero;
	
	
	cout<<"Bienvenido al Juego\n";
	
	while (tematica!=0)
	{
		cout<<"\nElija el numero de la tematica sobre la cual desea responder:\n\n";
		cout<<"1)Musica\n2)Historia\n3)Peliculas\n4)Ciencia\n\n";
		cout<<"Para salir ingrese 0\n";
		cin>>tematica;
		
		//Preguntas y respuestas
		
		string *Preg_Musica = new string[4];
				Preg_Musica[0] = "Como se llama el baterista de los Beatles?\n";
				Preg_Musica[1] = "Que instrumento tocaba Jimi Hendrix?\n";
				Preg_Musica[2] = "Como era el apellido el cantante de Queen?\n";
				Preg_Musica[3] = "Como se llama la primer opera rock de The Who?\n";
		string *Resp_Musica = new string[4];
				Resp_Musica[0] = "ringo";
				Resp_Musica[1] = "guitarra";
				Resp_Musica[2] = "mercury";
				Resp_Musica[3] = "tommy";	
		
		string *Preg_Historia = new string[4];
				Preg_Historia[0] = "Como se llamaba el lider de los nazis?\n";
				Preg_Historia[1] = "En que año fue la revolucion de mayo?\n";
				Preg_Historia[2] = "En que pais se arrojaron 2 bombas atomicas?\n";
				Preg_Historia[3] = "Que emperador romano fue responsable del incendio de Roma?\n";
		string *Resp_Historia = new string[4];
				Resp_Historia[0] = "hitler";
				Resp_Historia[1] = "1810";
				Resp_Historia[2] = "japon";
				Resp_Historia[3] = "neron";

		string *Preg_Peliculas = new string[4];
				Preg_Peliculas[0] = "Que pelicula famosa narra una tragedia en altamar?\n";
				Preg_Peliculas[1] = "Cual es el nombre de un monstruo japones iconico?\n";
				Preg_Peliculas[2] = "Cual es el apellido del protagonista de Volver al Futuro?\n";
				Preg_Peliculas[3] = "Como llamaban al personaje de Marlon Brando en el padrino?\n";
		string *Resp_Peliculas = new string[4];
				Resp_Peliculas[0] = "titanic";
				Resp_Peliculas[1] = "godzilla";
				Resp_Peliculas[2] = "mcfly";
				Resp_Peliculas[3] = "don";
				
		string *Preg_Ciencia = new string[4];
				Preg_Ciencia[0] = "Cual es la composicion quimica del agua?\n";
				Preg_Ciencia[1] = "Como se llama la unidad de frecuencia?\n";
				Preg_Ciencia[2] = "Quien planteo la teoria de la relatividad?\n";
				Preg_Ciencia[3] = "Quien planteo el modelo del atomo actual?\n";
		string *Resp_Ciencia = new string[4];
				Resp_Ciencia[0] = "h2o";
				Resp_Ciencia[1] = "hertz";
				Resp_Ciencia[2] = "einstein";
				Resp_Ciencia[3] = "bohr";
										
		//Musica
		
		if (tematica==1)
		{
			cout<<"\nMusica\n\n";
			numero = rand() % 4;
			pregunta = Preg_Musica[numero];
			cout<<pregunta;
			cin>>respuesta;
			
			if ( respuesta == Resp_Musica[numero] )
			{
				cout<<"Correcto\n\n\n\n\n";
				puntos = puntos + 1;
				}
			else
			{
				cout<<"Incorrecto\n\n\n\n\n";
				puntos = puntos - 1;
			}
		}
			
		//Historia
			
		if (tematica==2)
		{
		
			cout<<"\nHistoria\n";
			numero = rand() % 4;
			pregunta = Preg_Historia[numero];
			cout<<pregunta;
			cin>>respuesta;
			
			if ( respuesta == Resp_Historia[numero] )
			{	cout<<"Correcto\n\n\n\n\n";
				puntos = puntos + 1;
			}
			else
			{
				cout<<"Incorrecto\n\n\n\n\n";
				puntos = puntos - 1;
			}
		}
		//Peliculas
		
		if (tematica==3)
		{
		
			cout<<"\nPeliculas\n";
			numero = rand() % 4;
			pregunta = Preg_Peliculas[numero];
			cout<<pregunta;
			cin>>respuesta;
			
			if ( respuesta == Resp_Peliculas[numero] )
			{	cout<<"Correcto\n\n\n\n\n";
				puntos = puntos + 1;
			}
			else
			{
				cout<<"Incorrecto\n\n\n\n\n";
				puntos = puntos - 1;
			}
		}
		//Ciencia
		
		if (tematica==4)
		{
		
			cout<<"\nCiencia\n";
			numero = rand() % 4;
			pregunta = Preg_Ciencia[numero];
			cout<<pregunta;
			cin>>respuesta;
			
			if ( respuesta == Resp_Ciencia[numero] )
			{	cout<<"Correcto\n\n\n\n\n";
				puntos = puntos + 1;
			}
			else
			{	cout<<"Incorrecto\n\n\n\n\n";	
				puntos = puntos - 1;
			}
		}
		cout<<"Puntaje actual: ";
		cout<<puntos;
		cout<<"\n\n\n\n\n";
	}
	return 0;	
}
