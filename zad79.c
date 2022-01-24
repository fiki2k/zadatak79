//Program treba izracunat duljinu hipotenuze pravokutnog trokuta.

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
#include<math.h>
//Funkcija za izracunavanje duljine hipotenuze pravokutnog trokuta.
float duljina(int a,int b)
{
	float c;
	c=sqrt((a*a)+(b*b));
    return c;
}
  

int main()
{
    int a,b;
    printf("Unesi duljine stranica pravokutnog trokuta \n");
    scanf("%d %d",&a,&b);
    // Pozivanje funkcije.
    float c= duljina(a,b);
    printf("Duljina hipotenuze pravokutnog trokuta je: %.2f",c);
    return 0;
}
