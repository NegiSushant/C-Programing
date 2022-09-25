#include<stdio.h>
#include<conio.h>

int main(){
clrsrc();

int data[7], i;
printf("Please enter the number in array: ");

for(i = 0; i < 7; i++){
	scanf("%d", &data[i]);
}
for(i = 0; i < 7; i++){
	printf("%d ", data[i]);
}
getch();
return 0;
}