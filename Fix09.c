#include <stdio.h>
#define LIN 3
#define COL 3

int main (){
    int m[LIN][COL];

    for (int i = 0; i < LIN; i++){

        for (int j = 0; j < COL; j++){
            printf("Digite m[%d][%d]: ",i,j);
            scanf("%d", &m[i][j]);
        
        }
    }

    for (int k = 0; k < COL; k++){
                printf("Diagonal principal: m[%d][%d] = %d \n", k, k, m[k][k]);
            }

    return 0;
}
