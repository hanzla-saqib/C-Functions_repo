#include<stdio.h>

int findPow(int numm1,int numm2) {

    int i,mul = 1;

    for(i = 1;i<= numm2;i++) {//3<=3
        mul *= numm1;//1*2=2*2=4*2=8
    }
    return printf("%d",mul);
}
int main(){

    int num1,num2,pow;

    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);

    pow =  findPow(num1,num2); 
}