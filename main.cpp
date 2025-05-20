//Multiplicacion de matrices
#include <iostream>
#include <ctime>
#include "Piezas.hpp"
using namespace std;
void imprimir(bool tablero[20][10],int l,int a){
	for(int i=0;i<20;i++){
		for(int j=0;j<10;j++){
			if(tablero[i][j]){	cout<<"X";	}
			else{	cout<<(char)219;	} 
		}
		cout<<endl;
	}
	cout<<"altura : "<<a<<endl;
	cout<<"largo : "<<l<<endl;
}
void reset(bool tablero[20][10]){
	for(int i=0;i<20;i++){
		for(int j=0;j<10;j++){
			tablero[i][j] = false;
		}
	}
}
int main()
{
	void (*pf[7][4])(bool[20][10],int,int,int&,int&);
	pf[0][0]=&p_1_1;
	pf[0][1]=&p_1_2;
	pf[0][2]=&p_1_3;
	pf[0][3]=&p_1_4;
	pf[1][0]=&p_2_1;
	pf[1][1]=&p_2_2;
	pf[1][2]=&p_2_1;
	pf[1][3]=&p_2_2;
	pf[2][0]=&p_3_1;
	pf[2][1]=&p_3_2;
	pf[2][2]=&p_3_3;
	pf[2][3]=&p_3_4;
	pf[3][0]=&p_4_1;
	pf[3][1]=&p_4_2;
	pf[3][2]=&p_4_1;
	pf[3][3]=&p_4_2;
	pf[4][0]=&p_5_1;
	pf[4][1]=&p_5_1;
	pf[4][2]=&p_5_1;
	pf[4][3]=&p_5_1;
	pf[5][0]=&p_6_1;
	pf[5][1]=&p_6_2;
	pf[5][2]=&p_6_3;
	pf[5][3]=&p_6_4;
	pf[6][0]=&p_7_1;
	pf[6][1]=&p_7_2;
	pf[6][2]=&p_7_1;
	pf[6][3]=&p_7_2;
	bool tablero[20][10];
	int a , l;
	for(int i=0;i<7;i++){
		for(int j=0;j<4;j++){
			reset(tablero);
			pf[i][j](tablero,1,5,a,l);
			imprimir(tablero,l,a);
		}
	}
    return 0;
}
