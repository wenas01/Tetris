
#include"Piezas.hpp"

void p_1(bool tablero[20][10],int l, int c, int*& altura, int& largo, int& r){
	r = r%4;
	if(r==0){
		tablero[l][c] = true;
		tablero[l][c+1] = true;
		tablero[l][c+2] = true;
		tablero[l+1][c+2] = true;
		largo = 3;
		altura = new int[largo];
		altura[0]=1;altura[1]=1;altura[2]=2;
	}
	if(r==1){
		tablero[l][c+1] = true;
		tablero[l+1][c+1] = true;
		tablero[l+2][c+1] = true;
		tablero[l+2][c] = true;
		largo = 2;
		altura = new int[largo];
		altura[0]=3;altura[1]=3;
	}
	if(r==2){
		tablero[l][c] = true;
		tablero[l+1][c] = true;
		tablero[l+1][c+1] = true;
		tablero[l+1][c+2] = true;
		largo = 3;
		altura = new int[largo];
		altura[0]=2;altura[1]=2;altura[2]=2;
	}
	if(r==3){
		tablero[l][c] = true;
		tablero[l][c+1] = true;
		tablero[l+1][c] = true;
		tablero[l+2][c] = true;
		largo = 2;
		altura = new int[largo];
		altura[0]=3;altura[1]=1;
	}
}
void p_2(bool tablero[20][10],int l, int c, int*& altura, int& largo, int& r){
	r = r%2;
	if(r==0){
		tablero[l][c] = true;
		tablero[l][c+1] = true;
		tablero[l+1][c+1] = true;
		tablero[l+1][c+2] = true;
		largo = 3;
		altura = new int[largo];
		altura[0]=1;altura[1]=2;altura[2]=2;
	}
	if(r==1){
		tablero[l][c+1] = true;
		tablero[l+1][c+1] = true;
		tablero[l+1][c] = true;
		tablero[l+2][c] = true;
		largo = 2;
		altura = new int[largo];
		altura[0]=3;altura[1]=2;
	}
}
void p_3(bool tablero[20][10],int l, int c, int*& altura, int& largo, int& r){
	r = r%4;
	if(r==0){
		tablero[l+1][c] = true;
		tablero[l][c] = true;
		tablero[l][c+1] = true;
		tablero[l][c+2] = true;
		largo = 3;
		altura = new int[largo];
		altura[0]=2;altura[1]=1;altura[2]=1;
	}
	if(r==1){
		tablero[l][c] = true;
		tablero[l][c+1] = true;
		tablero[l+1][c+1] = true;
		tablero[l+2][c+1] = true;
		largo = 2;
		altura = new int[largo];
		altura[0]=1;altura[1]=3;
	}
	if(r==2){
		tablero[l][c+2] = true;
		tablero[l+1][c] = true;
		tablero[l+1][c+1] = true;
		tablero[l+1][c+2] = true;
		largo = 3;
		altura = new int[largo];
		altura[0]=2;altura[1]=2;altura[2]=2;
	}
	if(r==3){
		tablero[l][c] = true;
		tablero[l+1][c] = true;
		tablero[l+2][c] = true;
		tablero[l+2][c+1] = true;
		largo = 2;
		altura = new int[largo];
		altura[0]=3;altura[1]=3;
	}
}
void p_4(bool tablero[20][10],int l, int c, int*& altura, int& largo, int& r){
	r = r%2;
	if(r==0){
		tablero[l+1][c] = true;
		tablero[l+1][c+1] = true;
		tablero[l][c+1] = true;
		tablero[l][c+2] = true;
		largo = 3;
		altura = new int[largo];
		altura[0]=2;altura[1]=2;altura[2]=1;
	}
	if(r==1){
		tablero[l+1][c+1] = true;
		tablero[l+2][c+1] = true;
		tablero[l][c] = true;
		tablero[l+1][c] = true;
		largo = 2;
		altura = new int[largo];
		altura[0]=2;altura[1]=3;
	}
}
void p_5(bool tablero[20][10],int l, int c, int*& altura, int& largo, int& r){
	r = r%1;
	if(r==0){
		tablero[l][c] = true;
		tablero[l][c+1] = true;
		tablero[l+1][c] = true;
		tablero[l+1][c+1] = true;
		largo = 2;
		altura = new int[largo];
		altura[0]=2;altura[1]=2;
	}
}
void p_6(bool tablero[20][10],int l, int c, int*& altura, int& largo, int& r){
	r = r%4;
	if(r==0){
		tablero[l][c] = true;
		tablero[l][c+1] = true;
		tablero[l][c+2] = true;
		tablero[l+1][c+1] = true;
		largo = 3;
		altura = new int[largo];
		altura[0]=1;altura[1]=2;altura[2]=1;
	}
	if(r==1){
		tablero[l][c+1] = true;
		tablero[l+1][c+1] = true;
		tablero[l+1][c] = true;
		tablero[l+2][c+1] = true;
		largo = 2;
		altura = new int[largo];
		altura[0]=2;altura[1]=3;
	}
	if(r==2){
		tablero[l][c+1] = true;
		tablero[l+1][c] = true;
		tablero[l+1][c+1] = true;
		tablero[l+1][c+2] = true;
		largo = 3;
		altura = new int[largo];
		altura[0]=2;altura[1]=2;altura[2]=2;
	}
	if(r==3){
		tablero[l][c] = true;
		tablero[l+1][c] = true;
		tablero[l+1][c+1] = true;
		tablero[l+2][c] = true;
		largo = 2;
		altura = new int[largo];
		altura[0]=3;altura[1]=2;
	}
}
void p_7(bool tablero[20][10],int l, int c, int*& altura, int& largo, int& r){
	r = r%2;
	if(r==0){	
		tablero[l][c] = true;
		tablero[l][c+1] = true;
		tablero[l][c+2] = true;
		tablero[l][c+3] = true;
		largo = 4;
		altura = new int[largo];
		altura[0]=1;altura[1]=1;altura[2]=1;altura[3]=1;
	}
	if(r==1){
		tablero[l][c] = true;
		tablero[l+1][c] = true;
		tablero[l+2][c] = true;
		tablero[l+3][c] = true;
		largo = 1;
		altura = new int[largo];
		altura[0]=4;
	}
}