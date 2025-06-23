//Multiplicacion de matrices
#include <iostream>
#include <ctime>
#include <conio.h>
#include "Piezas.hpp"
using namespace std;
void pantalla_inicial(char pantalla[22][22]){
	// 201=╔ | 200 =╚ | 187=╗ | 188=╝ | 186 = ║ | 205=═
	for(int i=0;i<22;i++){
		for(int j=0;j<22;j++){
			pantalla[i][j]=' ';
			if(i==0||i==21){pantalla[i][j]=205;}
			if(j==0||j==21){pantalla[i][j]=186;}
		}
	}
	pantalla[0][0]=201;
	pantalla[0][21]=187;
	pantalla[21][0]=200;
	pantalla[21][21]=188;
}
void set_pantalla(char pantalla[22][22],bool tablero[20][10]){
	for(int i=0;i<20;i++){
		for(int j=0;j<10;j++){
			if(tablero[i][j]){pantalla[i+1][(j*2)+1]=219;pantalla[i+1][(j*2)+2]=219;}
		}
	}
}
void imprimir(char pantalla[22][22], int p){
	cout<<"Puntos : "<<p<<endl;
	for(int i=0;i<22;i++){
		for(int j=0;j<22;j++){
			cout<<pantalla[i][j];
		}
		cout<<endl;
	}
	for(int i=1;i<21;i++){
		for(int j=1;j<21;j++){
			pantalla[i][j]=' ';
		}
	}
}
void blank(bool tablero[20][10]){
	for(int i=0;i<20;i++){
		for(int j=0;j<10;j++){
			tablero[i][j] = false;
		}
	}
}
void C_registro(bool visible[20][10],bool registro[20][10]){
	for(int i=0;i<20;i++){
		for(int j=0;j<10;j++){
			visible[i][j] = registro[i][j];
		}
	}
}
void G_registro(bool visible[20][10],bool registro[20][10]){
	for(int i=0;i<20;i++){
		for(int j=0;j<10;j++){
			registro[i][j] = visible[i][j];
		}
	}
}
bool colision(bool visible[20][10],int*& altura,int largo, int p_l, int p_c){
	bool devolver{false};
	for(int i=0;i<largo;i++){
		if(
			visible[p_l+altura[i]][p_c+i]||p_l+altura[i]>19){devolver = true;
		}
	}
	return devolver;
}
void terminar(bool registro[20][10],bool & vivo){
	for(int i=0;i<10;i++){
		if(registro[1][i]){vivo = false;}
	}
}
void aplicar_gravedad(bool r[20][10]) {
    for (int j = 0; j < 10; j++) {  
        for (int i = 19; i >= 0; i--) {  
            if (r[i][j]) {
                int k = i;
                while (k < 19 && !r[k + 1][j]) {  
                    swap(r[k][j], r[k + 1][j]);  
                    k++;
                }
            }
        }
    }
}

void evaluar_lineas(bool r[20][10], int& puntos){
	for(int i=2;i<20;i++){
		if(r[i][0]&&r[i][1]&&r[i][2]&&r[i][3]&&r[i][4]&&r[i][5]&&r[i][6]&&r[i][7]&&r[i][8]&&r[i][9]){
			for(int j=0 ; j<10 ; j++){r[i][j]=false;}
			aplicar_gravedad(r);
			puntos +=100;
		}
	}
}
void Juego(char pantalla[22][22],bool visible[20][10],bool registro[20][10]
			,void (*pf[7])(bool[20][10],int,int,int*&,int&,int&), bool & vivo, int& p){
	std::cout << "Presiona esc para salir"<<std::endl;
	bool continuar{true};
	int largo{0}; 
	int* altura{nullptr};
	int p_l{0},p_c{4};
	int r{0}, n_p{rand()%7};
	C_registro(visible,registro);
	pf[n_p](visible,p_l,p_c,altura,largo,r);
	set_pantalla(pantalla,visible);
	imprimir(pantalla,p);
	while (continuar) 
	{
        int ch = getch();
		if (ch == 27){ break; }
		if (ch == 'r'){ if(p_l+5<20){r++;} }
        if (ch == 77){if(p_c+largo<10){p_c++;}}
        if (ch == 75){if(p_c-1>-1){p_c--;}}
		if(colision(registro,altura,largo,p_l,p_c)){
			G_registro(visible,registro);
			break;
		}
		p_l++;
		C_registro(visible,registro);
		pf[n_p](visible,p_l,p_c,altura,largo,r);
		set_pantalla(pantalla,visible);
		std::system("cls");
		
		imprimir(pantalla,p);
    }	
	terminar(registro,vivo);
	evaluar_lineas(registro,p);
}

int main()
{
	srand(time(nullptr));
	void (*pf[7])(bool[20][10],int,int,int*&,int&,int&);
	pf[0]=&p_1;
	pf[1]=&p_2;
	pf[2]=&p_3;
	pf[3]=&p_4;
	pf[4]=&p_5;
	pf[5]=&p_6;
	pf[6]=&p_7;
	bool visible[20][10];
	bool registro[20][10];
	blank(visible);
	blank(registro);
	int a , l;
	int puntaje{0};
	char pantalla[22][22];
	pantalla_inicial(pantalla);
	bool vivo{true};
	while(vivo){  Juego(pantalla,visible,registro,pf,vivo,puntaje);  }
    return 0;
}
