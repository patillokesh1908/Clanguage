#include<stdio.h>
#include<conio.h>

 void main()
  
{ 
 

     float celsius,fahrenheit;
     
     printf ("enter the price of celsius");
     scanf ("%f,&celsius");
     
     fahrenheit = (9/5 * celsius) + 32;
     printf ("the fahrenheit is %.2f",fahrenheit);
} 