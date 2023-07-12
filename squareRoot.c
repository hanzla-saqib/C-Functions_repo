#include<stdio.h>
#include<stdio.h>
float find_sqrt(float numm){

    return sqrt(numm);
}
int main(){

    float num;

    printf("enter a number\n");
    scanf("%f",&num);

    printf("%.2f",find_sqrt(num));
}