/*
	Name: Funzione Media
	Copyright: Colamonico Chiarulli
	Author: Baccellieri Davide
	Date: 24/01/23 13:14
	Description: Scrivi una funzione CalcolaMedia(x,y) che dati in input due numeri reali, dia in
    output la loro media
*/


#include <iostream>
using namespace std;
 
void media(float x, float y)
{
	 float media;
 
    media = (x + y) / 2;
 
    cout << "La media aritmetica è: " << media;
 
}
 
int main()
{

    float num1, num2;
	
    cout << "Inserisci il primo numero: ";
    cin>>num1;
    cout<<"Inserisci il secondo numero: ";
    cin>>num2;
    
   media(num1,num2);
   
    return 0;
}
