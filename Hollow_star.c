#include<stdio.h>
int num = 1;
int Hollow_X(int row,int i) {

    int j;

    

        for(j = 1; j <= row; j++) {

            if(i == j || i + j == row + 1) {

                 printf("*");
                 
            }
            else {
                printf(" ");
            }
        }printf("\n");
    }

int main() {

    int rows,i;

    printf("Enter number of rows\n");
   scanf("%d",&rows);

for(i = 1;i<= rows; i++) {
   Hollow_X(rows,i);
}
}