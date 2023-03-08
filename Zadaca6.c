#include <stdio.h>
int main ()
{
    char niza[5];
    int i;
    printf("Vnesi 5 bukvi\n");
    for(i=0;i<5;i++)
    {
    scanf("%c",&niza[i]);
    }
    printf("%c \n",niza[4]);
    printf("%c \n",niza[2]);
    printf("%c \n",niza[1]);
    printf("%c \n",niza[0]);
    printf("%c \n",niza[3]);
    return 0;
}
