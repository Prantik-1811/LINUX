#include <stdio.h>

int main(){
    int mat1[100][100], mat2[100][100], choice;

    printf("WELCOME TO MATRIX OPS\n ******************\n Enter a choice\n 1. Add Matrices \n 2. Subtract Matrices \n 3. Multiply \n 4. Transpose \n 5. Find Symmetry");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice){
        case 1: {
            int r1, c1, r2, c2;
            printf("Enter rows and columns for first matrix: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter rows and columns for second matrix: ");
            scanf("%d %d", &r2, &c2);

            if (r1 != r2 || c1 != c2) {
                printf("Matrices cannot be added due to size mismatch.\n");
                return 0;
            }

            printf("Enter elements of first matrix:\n");
            for (int i = 0; i < r1; i++)
                for (int j = 0; j < c1; j++)
                    scanf("%d", &mat1[i][j]);

            printf("Enter elements of second matrix:\n");
            for (int i = 0; i < r2; i++)
                for (int j = 0; j < c2; j++)
                    scanf("%d", &mat2[i][j]);

            printf("Resultant Matrix after Addition:\n");
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++)
                    printf("%d ", mat1[i][j] + mat2[i][j]);
                printf("\n");
            }
        } break;

        case 2: {
            int r1, c1, r2, c2;
            printf("Enter rows and columns for first matrix: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter rows and columns for second matrix: ");
            scanf("%d %d", &r2, &c2);

            if (r1 != r2 || c1 != c2) {
                printf("Matrices cannot be subtracted due to size mismatch.\n");
                return 0;
            }

            printf("Enter elements of first matrix:\n");
            for (int i = 0; i < r1; i++)
                for (int j = 0; j < c1; j++)
                    scanf("%d", &mat1[i][j]);

            printf("Enter elements of second matrix:\n");
            for (int i = 0; i < r2; i++)
                for (int j = 0; j < c2; j++)
                    scanf("%d", &mat2[i][j]);
            printf("Resultant Matrix after Subtraction:\n");
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++)
                    printf("%d ", mat1[i][j] - mat2[i][j]);
                printf("\n");
            }
        } break;
        case 3: {
            int r1, c1, r2, c2;
            printf("Enter rows and columns for first matrix: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter rows and columns for second matrix: ");
            scanf("%d %d", &r2, &c2);

            if (c1 != r2) {
                printf("Matrices cannot be multiplied as they are non conformable.\n");
                return 0;
            }

            printf("Enter elements of first matrix:\n");
            for (int i = 0; i < r1; i++)
                for (int j = 0; j < c1; j++)
                    scanf("%d", &mat1[i][j]);

            printf("Enter elements of second matrix:\n");
            for (int i = 0; i < r2; i++)
                for (int j = 0; j < c2; j++)
                    scanf("%d", &mat2[i][j]);

            printf("Resultant Matrix after Multiplication:\n");
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    int sum = 0;
                    for (int k = 0; k < c1; k++)
                        sum += mat1[i][k] * mat2[k][j];
                    printf("%d ", sum);
                }
                printf("\n");
            }
        } break;
        case 4: {
            int r, c;
            printf("Enter rows and columns for the matrix: ");
            scanf("%d %d", &r, &c);

            printf("Enter elements of the matrix:\n");
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    scanf("%d", &mat1[i][j]);

            printf("Transpose of the matrix:\n");
            for (int i = 0; i < c; i++) {
                for (int j = 0; j < r; j++)
                    printf("%d ", mat1[j][i]);
                printf("\n");
            }
        } break;
        case 5: {
            int r, c, isSymmetric = 1;
            printf("Enter rows and columns for the matrix: ");
            scanf("%d %d", &r, &c);

            if (r != c) {
                printf("Matrix is not square, hence cannot be symmetric.\n");
                return 0;
            }

            printf("Enter elements of the matrix:\n");
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    scanf("%d", &mat1[i][j]);

            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    if (mat1[i][j] != mat1[j][i]) {
                        isSymmetric = 0;
                        break;
                    }
                }
                if (!isSymmetric) break;
            }

            if (isSymmetric)
                printf("The matrix is symmetric.\n");
            else
                printf("The matrix is not symmetric.\n");
        } break;
        default:
            printf("Invalid choice. Please try again.\n");
            return 0;

    }

    return 0;

}