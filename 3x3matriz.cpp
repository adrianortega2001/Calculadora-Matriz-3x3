#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include<conio.h>
using namespace std;

void multiplicacion(int arre[3][3], int arr[3][3]);
void restaMatrix(int arre[3][3], int arr[3][3]);
void sumaMatrix(int arre[3][3], int arr[3][3]);
void imprimir_menu();

int main(){
    int opt;
    char repetir;
    do{
    imprimir_menu();
    printf("Introduce una opcion:\n");
scanf("%d",&opt);


printf("Matriz A\n\n");
int a[3][3] ;
printf("Introduzca la primer fila ");
scanf("%d %d %d",&a[0][0],&a[0][1],&a[0][2]);
printf("Introduzca la segunda fila");
scanf("%d %d %d",&a[1][0],&a[1][1],&a[1][2]);
printf("Introduzca la tercer fila");
scanf("%d %d %d",&a[2][0],&a[2][1],&a[2][2]);


printf("Matriz B\n\n");
int b[3][3];
printf("Introduzca la primer fila ");
scanf("%d %d %d",&b[0][0],&b[0][1],&b[0][2]);
printf("Introduzca la segunda fila");
scanf("%d %d %d",&b[1][0],&b[1][1],&b[1][2]);
printf("Introduzca la tercer fila");
scanf("%d %d %d",&b[2][0],&b[2][1],&b[2][2]);

switch (opt){
case 1:
printf("Suma\n\n");
sumaMatrix(a,b);
break;
case 2:
printf("Resta\n\n");
restaMatrix(a,b);
break;
case 3:
printf("Multiplicacion\n\n");
multiplicacion(a,b);
break;
}
printf("Desea hacer otra operacion S N:\n");
repetir=getch();
}while(repetir=='s'||repetir=='S');
}

void imprimir_menu(){
printf("1 Suma\n");
printf("2 Resta\n");
printf("3 Multiplicacion\n");
}





void sumaMatrix(int arre[3][3], int arr[3][3]){
  int s00, s01, s02, s10, s11, s12, s21, s22, s20;
  s00 =(arre[0][0])+(arr[0][0]);
    s01 =(arre[0][1])+(arr[0][1]);
    s02=(arre[0][2])+(arr[0][2]);
  printf("%d   %d   %d\n\n",s00,s01,s02);
  s10 =(arre[1][0])+(arr[1][0]);
    s11 =(arre[1][1])+(arr[1][1]);
    s12=(arre[1][2])+(arr[1][2]);
    printf("%d   %d   %d\n\n",s10,s11,s12);

      s20 =(arre[2][0])+(arr[2][0]);
    s21 =(arre[2][1])+(arr[2][1]);
    s22=(arre[2][2])+(arr[2][2]);
    printf("%d   %d   %d\n\n",s20,s21,s22);
}


void restaMatrix(int arre[3][3], int arr[3][3]){
  int s00, s01, s02, s10, s11, s12, s21, s22, s20;
  s00 =(arre[0][0])-(arr[0][0]);
    s01 =(arre[0][1])-(arr[0][1]);
    s02=(arre[0][2])-(arr[0][2]);
printf("%d   %d   %d\n\n",s00,s01,s02);
  s10 =(arre[1][0])-(arr[1][0]);
    s11 =(arre[1][1])-(arr[1][1]);
    s12=(arre[1][2])-(arr[1][2]);
printf("%d   %d   %d\n\n",s10,s11,s12);

      s20 =(arre[2][0])-(arr[2][0]);
    s21 =(arre[2][1])-(arr[2][1]);
    s22=(arre[2][2])-(arr[2][2]);
printf("%d   %d   %d\n\n",s20,s21,s22);
}

void multiplicacion(int arre[3][3],int arr[3][3]){
    int m00,m10,m20,m01,m11,m21,m02,m12,m22;
    m00=((arre[0][0])*(arr[0][0]))+((arre[0][1])*(arr[1][0]))+((arre[0][2])*(arr[2][0]));
    m01=((arre[0][0])*(arr[0][1]))+((arre[0][1])*(arr[1][1]))+((arre[0][2])*(arr[2][1]));
    m02=((arre[0][0])*(arr[0][2]))+((arre[0][1])*(arr[1][2]))+((arre[0][2])*(arr[2][2]));
printf("%d   %d   %d\n\n",m00,m01,m02);

    m10=((arre[1][0])*(arr[0][0]))+((arre[1][1])*(arr[1][0]))+((arre[1][2])*(arr[2][0]));
    m11=((arre[1][0])*(arr[0][1]))+((arre[1][1])*(arr[1][1]))+((arre[1][2])*(arr[2][1]));
    m12=((arre[1][0])*(arr[0][2]))+((arre[1][1])*(arr[1][2]))+((arre[1][2])*(arr[2][2]));
printf("%d   %d   %d\n\n",m10,m11,m12);

    m20=((arre[2][0])*(arr[0][0]))+((arre[2][1])*(arr[1][0]))+((arre[2][2])*(arr[2][0]));
    m21=((arre[2][0])*(arr[0][1]))+((arre[2][1])*(arr[1][1]))+((arre[2][2])*(arr[2][1]));
    m22=((arre[2][0])*(arr[0][2]))+((arre[2][1])*(arr[1][2]))+((arre[2][2])*(arr[2][2]));
printf("%d   %d   %d\n\n",m20,m21,m22);

}

