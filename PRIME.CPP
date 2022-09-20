#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
clrscr();
int num, flag = 0, i;
printf("Please enter the number: ");
scanf("%d", &num);

for(i = 2; i <= sqrt(num); i++){
	if(num % i == 0){
		flag = 1;
		break;
	}
}
if(flag == 1){
	printf("Not Prime");
}
else{printf("Prime");}
getch();
return 0;
}