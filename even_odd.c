#include<stdio.h>

int even_odd(int numm) {

    if(numm % 2 == 0) {

        return printf("%d is even\n",numm);
    }
    else{
      return  printf("%d is odd\n",numm);
    }
}
int main(){

    int num;

    printf("Enter a number\n");
    scanf("%d",&num);
      
      even_odd(num);

}