/* reverse of number*/
#include<stdio.h>
int main(){
    int number;
    int reverse =0;
    printf("enter any number : ");
    scanf("%d",&number);

   while(number>0){
    reverse= reverse*10 + number%10;
    number=number/10;
   }

    
    printf("%d",reverse);
    
    return 0;
}