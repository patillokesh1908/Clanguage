#include<stdio.h>
#include<conio.h>

   main()
  
  // write a program in to check whether a number is even or odd using a user defined function
 
{

		int a,b,c,d;
		printf("enter a : ");
		scanf("%d",&a);
		printf("enter b : ");
		scanf("%d",&b);
		printf("enter c : ");
		scanf("%d",&c);
		printf("enter d : ");
		scanf("%d",&d);


	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is odd");
			}
			else
			{
				printf("d is odd");	
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is even");	
			}
			else
			{
				printf("d is even ");	
			}	
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is odd ");
			}
			else
			{
				printf("d is odd ");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is even");
			}
			else
			{
				printf("d is even");
			}
		}
	
	}
	
}
 	