#include<stdio.h>
#include<conio.h>
 
  void main ()
  
   {
   	  
   	int salary, HRA,DA,TA, total,a;
   	
   	 printf ("enter the price of salary:");
   	 scanf("%d" ,&salary);
   	 printf ("enter the price of HRA:");
   	 scanf("%d" ,&HRA);
   	 printf ("enter the price of DA:");
   	 scanf("%d" ,&DA);
   	 printf ("enter the price of TA:");
   	 scanf("%d" ,&TA);
   	 
   	 HRA=(salary*HRA)/100;
   	 DA=(salary*DA)/100;
   	 TA=(salary*TA)/100;
   	 
   	 total=(HRA+DA+TA)+salary;
   	 
	printf ("ans=%d",total); 
   	 
   	 
   }