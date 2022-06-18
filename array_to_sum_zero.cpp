#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int size,i;
	printf("Enter number of elements: ");
	scanf("%d",&size);
	//int a[size];
	//int b=test(size);
	int r[size];
	//printf("\nEnter element of array: \n");
	for( i=0 ; i<size ; i++)
	{
		//int e=test(i);
		r[i]=((2*i)-size+1);
		printf("element of array:%d\n",r[i]);
	}
		getch();
	return 0;	
}
