/*Program to find determinant*/
#include<stdio.h>
int main()
{
    int A[3][3],i,j,det;

    printf("Enter the elements of 3*3 matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    det = A[0][0]*(A[1][1]*A[2][2]-A[1][2]*A[2][1]) - A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0]) +
          A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);

    printf("\nThe determinant of A is: %d",det);
    return 0; 
}/*end of main*/
