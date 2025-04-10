// #include<stdio.h>
// int main(){
//     int prev2 = 0;
//     int prev1 = 1;
//     int newfibo = 0;
//     printf("%d \n",prev2);
//     printf("%d \n",prev1);
//     for(int i = 0 ; i<18; i++){
//         newfibo = prev1 + prev2 ;
//         printf("%d \n",newfibo);
//         prev2 = prev1;
//         prev1 = newfibo ;
//     }
// return 0;
// }


#include <stdio.h>

void matrix(int x, int y, int matt[x][y]) {
    // Input loop
    for(int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &matt[i][j]);
        }
    }

    // Output loop
    for(int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", matt[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3;
    int cols = 3;
    int matt[rows][cols];

    matrix(rows, cols, matt);

    return 0;
}
