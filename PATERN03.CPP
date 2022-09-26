#include<stdio.h>
#include<conio.h>

int main(){
clrscr();

int i, j, n, a;

printf("Please enter the number of row: ");
scanf("%d", &n);
a = 1;
for(i = 1; i <= n; i++)
{
       //	a = 1;
	for(j = 1; j <= i; j++)
	{
		//printf("%d ", j);
		printf("%d ", a);
		a++;
	}
	printf("\n");
}
getch();
return 0;
}