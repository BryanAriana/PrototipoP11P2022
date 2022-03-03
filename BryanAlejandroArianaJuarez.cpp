#include <iostream>
#include <stdio.h>
#define N 3
using namespace std;
int main()
{
cout << "Bryan Alejandro Ariana Juarez - 9959-21-2832"<<endl;
    //declara matriz m1
int m1[N][N] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
int m2[N][N];//declara matriz m2
int x, y;
//Ciclo for para filas y columnas
for(x=0; x < N; x++)
for(y=0; y < N; y++)
    //Si m1 esta en x & y se devide dentro de 2 y el residuo es igual a 0
if (m1[x][y]%2 == 0)
m2[x][y]= 0;//m2 tomara el valor de 0
else
m2[x][y] = 1;//m2 tomara el valor de 1
printf("%d , %d , %d", m2[0][0], m2[1][1], m2[2][2]);
// Se imprimen los valores de m2 de la fila 1 y columna 1, fila 2 y columna 2, y fila 3 columna 3, m esta en 0 el valor es (0)(0) el valor es 1
//por tanto el residuo no es 0, si esta en (1)(1) es 2 y el residuo 0, cuando esta (2)(2) es 3 y el residuo no es 0 este retornara a 1.
return 0;
}
