#include<stdio.h>

int prime_check(int numm) {

    int i,count = 0;

    for(i = 1; i <= numm / 2;i++) {

        if(numm % i == 0) {
            count++;
        }
        
    }
    if(count == 1) {
         
         return printf("%d is prime number\n",numm);
        }
        else{
           return printf("%d is not prime",numm);
        }
    }

int main(){

    int num;

    printf("Enter a number\n");
    scanf("%d",&num);
   
    prime_check(num);  

}