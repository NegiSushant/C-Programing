#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int data[7], i, j = 6;

	printf("Please enter the number in Array: ");
	for(i = 0; i < 7; i++)
	{
		scanf("%d", &data[i]);
	}

	for(i = 0; j >= 0; i++)
	{
		if(i < 7)
		{
			printf("%d,", data[i]);
			continue;
		}
		if(i == 7)
		{
			printf("\n");
		}
		printf("%d,", data[j]);
		j--;
	}
	getch();
}