#include <stdio.h>

int isIdentityMatrix(int n, int matrix[n][n]);

int main() {
    int matrix[5][5] = {{1, 0, 0, 0, 0}, 
                        {0, 1, 0, 0, 0}, 
                        {0, 0, 1, 0, 0}, 
                        {0, 0, 0, 1, 0}, 
                        {0, 0, 0, 0, 1}
                        };
    int matri2[5][5] = {{1, 0, 0, 0, 0}, 
                        {0, 1, 0, 0, 0}, 
                        {0, 0, 1, 0, 0}, 
                        {0, 0, 0, 1, 0}, 
                        {0, 0, 0, 0, 0}
                        };
    int matri3[5][5] = {{1, 0, 0, 0, 0}, 
                        {0, 1, 0, 0, 0}, 
                        {0, 0, 1, 0, 1}, 
                        {0, 0, 0, 1, 0}, 
                        {0, 0, 0, 0, 1}
                        };
    int matri4[5][5] = {{1, 0, 0, 0, 0}, 
                        {0, 1, 0, 0, 0}, 
                        {0, 0, 1, 0, 0}, 
                        {0, 2, 0, 1, 0}, 
                        {0, 0, 0, 0, 1}
                        };

    printf("%d\n", isIdentityMatrix(5, matrix));
    printf("%d\n", isIdentityMatrix(5, matri2));
    printf("%d\n", isIdentityMatrix(5, matri3));
    printf("%d\n", isIdentityMatrix(5, matri4));

    return 0;
}

