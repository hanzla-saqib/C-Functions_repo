#include<stdio.h>

int find_lcm(int num1,int num2) {
    int i,smaller,LCM = 1;

    num1<num2?smaller = num1:smaller = num2;//10
          
    while(num1 != 1 || num2 != 1) {//

        for(i = 2;i <= smaller / 2; i++) {//2<=5
        	
        	if(num1 % i == 0 || num2 % i == 0 ) {//
        		
        		if(num1 % i == 0) {
        			
        			num1 /= i;//5
        			
				}
				if(num2 % i == 0) {
        			
        			num2 /= i;//1
        			
				}
				LCM *= i;//2*1=2*3=6*3=18*5 = 90
				
				break; 
			}
		}
    }
 
}
int main(){

    int num1,num2;

    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);//10,18
          
             printf("%d is the LCM of %d  %d",find_lcm(num1,num2),num1,num2);
}