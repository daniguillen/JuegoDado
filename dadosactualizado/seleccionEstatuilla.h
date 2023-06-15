#ifndef SELECCIONESTATUILLA_H
#define SELECCIONESTATUILLA_H

int seleccionEstatuilla(int seleccion){
	int valor;
	switch (seleccion){
		
	case 1:
		
		cout << "1- Cangrejo" << endl;
		valor=0;
		cout<< "no gano la estatuilla"<<endl;
		break;
	case 2:
		cout << "2- Hormiga" << endl;
		valor=0;
		cout<< "no gano la estatuilla"<<endl;
		break;
	case 3:
		cout << "3- Medusa" << endl;
		valor=0;
		cout<< "no gano la estatuilla"<<endl;
		break;
	case 4:
		cout << "4- Aguila" << endl;
		valor=0;
			cout<< "no gano la estatuilla"<<endl;
		break;
	case 5:
		cout << "5- Salamandra" << endl;
		
		valor=0;
			cout<< "no gano la estatuilla"<<endl;
		break;
	default:
		cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
		valor=0;
		break;
	}
	return valor;
}

#endif
