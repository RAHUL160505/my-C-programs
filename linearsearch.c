#include<stdio.h>
int linearSearch(int arr[],int n , int x){
    for(int i = 0; i <n ;i++){
        if(arr[i] == x){
            return i ;
        }
        
   
    }
     return -1;

    
}

int main(){
    int array[] = {1,2,3,4,5,6,47,8,9,10,11,12};
    int n = sizeof(array) / sizeof(array[0]);
    int result = linearSearch(array,n,5);
    printf("%d",result);
    return 0 ;
}