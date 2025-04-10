#include<stdio.h>
int product();
int product(int n , int m ){
    int pro = m * n;
    return pro ;
}
int matrix();
int matrix(int x, int y ){
    int matt[x][y];
    for (int i =0 ; i< x ; i++){
        for (int j = 0 ; j< y ;j++){
            scanf("%d",&matt[i][j]);
        }
    }
    for (int i =0 ; i< x ; i++){
        for (int j = 0 ; j< y ;j++){
                printf("%d", matt[i][j]);
        }
        printf(" \n ");
    }
    
}
int main(){
    int m = matrix(3,3);
    int n =matrix(3,3);
    product(m,n);
    return 0;
}