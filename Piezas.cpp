
#include"Piezas.hpp"

void p_1_1(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c] = true;
	tablero[l][c+1] = true;
	tablero[l][c+2] = true;
	tablero[l+1][c+2] = true;
	altura = 2;
	largo = 3;
}
void p_1_2(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c+1] = true;
	tablero[l+1][c+1] = true;
	tablero[l+2][c+1] = true;
	tablero[l+2][c] = true;
	altura = 2;
	largo = 3;
}
void p_1_3(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c] = true;
	tablero[l+1][c] = true;
	tablero[l+1][c+1] = true;
	tablero[l+1][c+2] = true;
	altura = 2;
	largo = 3;
}
void p_1_4(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c] = true;
	tablero[l][c+1] = true;
	tablero[l+1][c] = true;
	tablero[l+2][c] = true;
	altura = 2;
	largo = 3;
}
void p_2_1(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c] = true;
	tablero[l][c+1] = true;
	tablero[l+1][c+1] = true;
	tablero[l+1][c+2] = true;
	altura = 2;
	largo = 3;
}
void p_2_2(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c+1] = true;
	tablero[l+1][c+1] = true;
	tablero[l+1][c] = true;
	tablero[l+2][c] = true;
	altura = 2;
	largo = 3;
}
void p_3_1(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l+1][c] = true;
	tablero[l][c] = true;
	tablero[l][c+1] = true;
	tablero[l][c+2] = true;
	altura = 2;
	largo = 3;
}
void p_3_2(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c] = true;
	tablero[l][c+1] = true;
	tablero[l+1][c+1] = true;
	tablero[l+2][c+1] = true;
	altura = 2;
	largo = 3;
}
void p_3_3(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c+2] = true;
	tablero[l+1][c] = true;
	tablero[l+1][c+1] = true;
	tablero[l+1][c+2] = true;
	altura = 2;
	largo = 3;
}
void p_3_4(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c] = true;
	tablero[l+1][c] = true;
	tablero[l+2][c] = true;
	tablero[l+2][c+1] = true;
	altura = 2;
	largo = 3;
}
void p_4_1(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l+1][c] = true;
	tablero[l+1][c+1] = true;
	tablero[l][c+1] = true;
	tablero[l][c+2] = true;
	altura = 2;
	largo = 3;
}
void p_4_2(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l+1][c+1] = true;
	tablero[l+2][c+1] = true;
	tablero[l][c] = true;
	tablero[l+1][c] = true;
	altura = 2;
	largo = 3;
}
void p_5_1(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c] = true;
	tablero[l][c+1] = true;
	tablero[l+1][c] = true;
	tablero[l+1][c+1] = true;
	altura = 2;
	largo = 3;
}
void p_6_1(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c] = true;
	tablero[l][c+1] = true;
	tablero[l][c+2] = true;
	tablero[l+1][c+1] = true;
	altura = 2;
	largo = 3;
}
void p_6_2(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c+1] = true;
	tablero[l+1][c+1] = true;
	tablero[l+1][c] = true;
	tablero[l+2][c+1] = true;
	altura = 2;
	largo = 3;
}
void p_6_3(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c+1] = true;
	tablero[l+1][c] = true;
	tablero[l+1][c+1] = true;
	tablero[l+1][c+2] = true;
	altura = 2;
	largo = 3;
}
void p_6_4(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c] = true;
	tablero[l+1][c] = true;
	tablero[l+1][c+1] = true;
	tablero[l+2][c] = true;
	altura = 2;
	largo = 3;
}
void p_7_1(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c] = true;
	tablero[l][c+1] = true;
	tablero[l][c+2] = true;
	tablero[l][c+3] = true;
	altura = 2;
	largo = 3;
}
void p_7_2(bool tablero[20][10],int l, int c, int& altura, int& largo){
	tablero[l][c] = true;
	tablero[l+1][c] = true;
	tablero[l+2][c] = true;
	tablero[l+3][c] = true;
	altura = 2;
	largo = 3;
}