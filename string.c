#include<stdio.h>

void main()
{
    char name[10];
    int i, l, t, flag=0;

    printf("Enter the word: ");
    scanf("%s" , name);

    for(l=0; name[l] != '\0'; l++);
    t = l-1;
    for(i = 0; i <= (l/2); i++, t--)
     {
        if(name[i]!=name[t])
         {
            flag=1;
            printf("Word is not pailindrom!");
            break ;
         }
     }
    if(flag == 0)
    {
        printf("%s is pailindrom!", name);
    }
}