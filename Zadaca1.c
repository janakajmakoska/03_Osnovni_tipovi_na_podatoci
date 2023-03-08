#include <stdio.h>
int main (){
    int br1,br2;
    printf("Vnesi dva celi broevi\n");
    scanf("%d %d",&br1,&br2);
    if(br1 !=  br2){
    if(br1 > br2)
    printf("Brojot %d e pogolem od %d\n",br1,br2);
    else
    printf("Brojot %d e pogolem od %d\n",br2,br1);
    }
    else
    printf("Broevite se ednakvi ");
    return 0;
}