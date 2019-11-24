#include<stdio.h>
int main()
{
    int matrix_A[2][2]={0};
    int matrix_B[2][2]={0};
    int matrix_Addition[2][2]={0};
    int matrix_Multiplication[2][2]={0};
        printf("Enter Values for Matrix A\n");
    for (int i=0;i<2;++i)
    {
        for (int j=0;j<2;++j)
        {

         printf("Enter Element %d%d : ",i,j);   //Getting Values of Matrix A from user
         scanf("%d",&matrix_A[i][j]);
        }
    }

    printf("\nEnter Value for Matrix B : \n");

        for (int i=0;i<2;++i)
    {
        for (int j=0;j<2;++j)
        {

         printf("Enter Element %d%d: ",i,j);   //Getting Values of Matrix B from user
         scanf("%d",&matrix_B[i][j]);
        }
    }


    for (int i=0;i<2;++i)   //Adding Matrices A and B in this loop
    {
        for (int j=0;j<2;++j)
        {
            matrix_Addition[i][j]=matrix_A[i][j]+matrix_B[i][j];
        }
    }

    printf("\nResult of Addition : \n");

        for (int i=0;i<2;++i)   //Showing Addition result
    {
        for (int j=0;j<2;++j)
        {
            printf("%d\t",matrix_Addition[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<2;++i)   //Multiplying Matrix A and Matrix B
    {
        for (int j=0;j<2;++j)
        {
            int element=0;
            for (int k=0,count=0;k<2;++k)
            {
                element=element+(matrix_A[j][k]*matrix_B[k][i]);
            }
            matrix_Multiplication[i][j]=element;
        }
        printf("\n");
    }
        printf("\nResult of Multiplication : \n");

        for (int i=0;i<2;++i)   //Showing Multiplication result
    {
        for (int j=0;j<2;++j)
        {
            printf("%d\t",matrix_Multiplication[i][j]);
        }
        printf("\n");
    }

    return 0;
}
