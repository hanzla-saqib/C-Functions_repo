#include<stdio.h>

int FindFac(int numm) {

    int fac = 1,i;

    for(i = numm;i>1;i--) {

        fac *= i;
    }
    return fac;
}
int main(){

    int num,fac = 1;


    printf("enter a number\n");
    scanf("%d",&num);

    printf("%d",FindFac(num));



    
}