#include<stdio.h>
#include<conio.h>

void main(){
clrscr();
int data[5] = {3, 8, 1, 11, 6};
int i, j = 4;

for(i = 0; j >= 0; i++)
{
	if(i < 5)
	{
		printf("%d,", data[i]);
		continue;
	}
	if(i == 5)
	{
		printf("\n");
	}
	printf("%d,", data[j]);
	j--;
}
getch();
}