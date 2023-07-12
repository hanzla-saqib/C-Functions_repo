#include<stdio.h>
char sign;
int num = 0,result = 0,count = 0;
int calculator(char che) {
 
 

 if(che >= '0' && che <= '9') {

    num = num * 10 + (che - 48);//0*10 + (50 -48)=2
 }else
 if(count == 0) {
    result = num;//12
    num = 0;//0
    count++;//1
    sign = che;//+ 
 }
 else{
    switch(sign){
        case '+':
        result += num;//12+2=14
        break;
         case '-':
        result -= num;
        break;
         case '*':
        result *= num;
        break;
         case '/':
        result /= num;
        break;
         case '%':
        result %= num;
        break;
    }
    sign = che;//=
    num = 0;//0
    }
    if(sign == '=') {
        return printf("The result is = %d\n",result);
        
    }
    
}
int main(){

    char ch;
    

    while(1) {

        ch = getchar();
        if(ch == '='){
        calculator('=');
        break;
        }
        calculator(ch);
    }
}