#include<stdio.h>

int find_power(int numm1,int numm2) {

    int mul = 1,i;

    for(i = 1;i <= numm2;i++) {

        mul *= numm1;
    }
    return printf("%d is the %d power of %d\n",mul ,numm1,numm2);
}
int main(){

    int num1,num2;

    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);

    find_power(num1,num2);
    find_power(num2,num1);

}