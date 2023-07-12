#include<stdio.h>

int swapValue(int numm1,int numm2) {
    
    numm1 = numm1 + numm2;
    numm2 = numm1 - numm2;
    numm1 = numm1 - numm2;
    return printf("Num1 = %d Num2 = %d",numm1,numm2);
    
}
int main(){

    int num1,num2;

    printf("Enter 1st value\n ");
    scanf("%d",&num1);
    printf("Enter 2nd value\n ");
    scanf("%d",&num2);
    
    swapValue(num1,num2);

    


}