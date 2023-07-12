#include<stdio.h>

int PerfectNum(int numm) {

    int i,sum = 0;

    for(i = 1; i <= numm / 2; i++){

        if(numm % i == 0) {

            sum += i;
        }
        }
        if( sum == numm) {
           return printf("%d is a Perfect number",numm);
        }
        else{
             return printf("%d is not a Perfect number",numm);
        }
    
}
int main(){

    int num;

    printf("Enter a number\n");
    scanf("%d",&num);


  PerfectNum(num);


}