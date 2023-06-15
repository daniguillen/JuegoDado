#include <iostream>
#include <locale.h>
#include "comienzo.h"
#include "cangrejo.h"
#include "seleccionMenu.h"
#include "tiraDadoInicia.h"
#include "nombreStatuillas.h"
#include "hormiga.h"
#include "medusa.h"
#include "aguila.h"
#include "salamandra.h"
#include "nombres.h"
#include "creditos.h"
#include "seleccionEstatuilla.h"
#include "seleccionEstatuillaNombre.h"
#include "dados10Caras.h"
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;

int main(int argc, char *argv[]) {
	//semilla de los dados
	srand(time(0));
	//pedido de seleccion de menu
	int selecionMenuPrincial ;
	//string credito = creditos();
	int seleccion ;
	int jugadorActual;
	do{
	
	selecionMenuPrincial=seleccionMenu(comienzo,creditos);

	
	if(selecionMenuPrincial==1){
		//nombres
		cout << "Ingrese el nombre del Jugador 1: " << endl;
		cin.ignore();
		string jugador1 = nombre();
		
		cout << "Ingrese el nombre del Jugador 2: " << endl;
		string jugador2 = nombre();
		
		cout << "nombre jugador 1: " << jugador1 << endl;
		cout << "nombre de jugador 2: " << jugador2 << endl;
		
		
		int dadojugador1=0;
		int dadojugador2=0;
		do{
			
		cout << jugador1 << endl;
	
		dadojugador1 = dados10Caras();
		cout << "Dado de:  "<< jugador1 << " es: "<< dadojugador1<<endl;
		
		cout << jugador2 << endl;
		dadojugador2 = dados10Caras();
		cout << "Dado de:  "<< jugador2 << " es: "<< dadojugador2 <<endl;
		
		tiraDadoInicia(dadojugador1,  dadojugador2,  jugador1,jugador1, jugadorActual);
		}
		while (dadojugador1==dadojugador2);
	
		int Statuillas[5];
		cout<<"1"<<endl;
		string StatuillasNombres[4]{};
		Statuillas[2]=3;
		cout<<"2"<<endl;
		nombreStatuillas(StatuillasNombres);

		
		
		
		StatuillasNombres[0]=cangrejo();
		StatuillasNombres[1]="hormiga \n";
		StatuillasNombres[2]="medusa \n";
		StatuillasNombres[3]="aguila \n";
		StatuillasNombres[4]="Salamandra \n";
		
		
		int seleccionEstatuillaDisponibleJugador1;
		int seleccionEstatuillaDisponibleJugador2;
		
		int contadorEstatuillasDisponibles=5;
		cout<<"estoy en contador"<<endl;
		while(contadorEstatuillasDisponibles >0){
			cout<<"entre al while"<<endl;
			if(jugadorActual==1 || jugadorActual==2){

				for(int i =0; i<=4; i++){
					if(Statuillas[i]!=3){
						cout << StatuillasNombres[i];
					}
					/*
					if(Statuillas[2]!=3){
						hormiga();
						
					}
					if(Statuillas[3]!=3){
						medusa();
						
					}
					if(Statuillas[4]!=3){
						aguila();
						
					}
					if(Statuillas[5]!=3){
						salamandra();
						*/
					}
				}
				cout<<jugador1<<" elija estatuilla"<<endl;
				cout<<" elija estatuilla con un numero del 1 al 5"<<endl;
				cin >>seleccionEstatuillaDisponibleJugador1;
				while(Statuillas[seleccionEstatuillaDisponibleJugador1]!=3)
					
					
				Statuillas[seleccionEstatuillaDisponibleJugador1]=1;
				cout<<jugador2<<" elija estatuilla"<<endl;
				cin >>seleccionEstatuillaDisponibleJugador2;
				Statuillas[seleccionEstatuillaDisponibleJugador2]=20;
				cout<<" jugador1 eligio: "<< Statuillas[seleccionEstatuillaDisponibleJugador1]<<endl;
				cout<<" jugador2 eligio: "<< Statuillas[seleccionEstatuillaDisponibleJugador2]<<endl;
				
				
				
				
				
				if(Statuillas[seleccionEstatuillaDisponibleJugador1]==3){
					
				}
				
				
			
			
			
			
				else {
					cout<<jugador2<<" elija estatuilla"<<endl;
					cout<<jugador1<<" elija estatuilla"<<endl;
				}
			
		}
		
		
		
		
		
	}
	//fin de nombres
	
	

	
	}while(selecionMenuPrincial != 4);
	
	return 0;
}


