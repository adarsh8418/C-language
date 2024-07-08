#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	printf("Enter  your maths marks :");
	scanf("%d",&x);
	printf("Enter your english marks :");
	scanf("%d",&y);
	printf("Enter your science marks :");
	scanf("%d",&z);
	
	if(x>100)
	{
		printf("Enter your valid marks");
	}
	else if (y>100)
	{
		printf("Enter your valid marks");
	}
	else if(z>100)
	{
		printf("Enter your valid marks");
	}
	else if(x<0)
	{
		printf("enter valid marks");
	}
	else if(y<0)
	{
		printf("enter valid marks");
	}
	else if(z<0)
	{
		printf("enter valid marks");
	}
	else
	{
		printf("Average = %d",(x+y+z)/3);
	}
}
	
	
		
	
	
