#include<stdio.h>

int GCD(int numm1,int numm2) {

    int i,div,smaller;

    numm1<numm2?smaller=numm1:smaller=numm2;

    for(i = 2;i<=smaller / 2;i++) {

        if(numm1 % i == 0 && numm2 % i == 0) {
            div = i;
        }
    }
     return div;
} 
int main(){

    int num1,num2,div;

    printf("enter two numbers\n");
    scanf("%d%d",&num1,&num2);

    div = GCD(num1,num2);
    printf("%d is the GCD",div);
}