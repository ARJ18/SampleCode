#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int r,c;
void read_matrix(int arr[r][c])
{   
    for (int i = 0; i < r; i++)
    {   for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
void display_matrix(int arr[r][c],int r,int c)
{
    for (int i = 0; i < r; i++)
    {   for (int j = 0; j < c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n"); 
    }
}
void matrix_sum(int arr1[r][c],int arr2[r][c])
{   
    int resmat[r][c];
    for (int i = 0; i < r; i++)
    {   for (int j = 0; j < c; j++)
        {
            resmat[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    printf("Sum\n");
    display_matrix(resmat,r,c);
}
void matrix_product(int arr1[r][c],int arr2[r][c])
{
    int resmat[r][c];
     for (int i = 0; i < r; i++)
    {   for (int j = 0; j<c; j++)
        {
            resmat[i][j]==0;
            for (int k = 0; k < c; k++)
            {
                resmat[i][j] += arr1[i][k]+arr2[k][j];
            }            
            
        }
    }
    printf("Product\n");
    display_matrix(resmat,r,c);
}
void matrix_transpose(int arr[r][c])
{
    int k=0;
    int temp[r+c];
    int resmat[c][r];
    for (int i = 0; i < r; i++)
    {   for (int j = 0; j < c; j++)
        {
            temp[k++] = arr[i][j];        
        }
    }
    k=0;
    for (int i = 0; i < r; i++)
    {   for (int j = 0; j < c; j++)
        {
            resmat[j][i] = temp[k++];
        }  
    }
    printf("Transpose\n");
    display_matrix(arr,c,r);

}

int main()

{   int choice;
    printf("1)Transpose\n2)Matrix Sum\n3)Matrix Product\nEnter your choice(1/2/3) ");
    scanf("%d",&choice);
    printf("Enter the dimensions of the matrice(s) (rows columns) ");
    scanf("%d %d",&r,&c);
    if(r!=c&&choice==2)
    {printf("Multiplication not possible");
    exit(0);
    }
    
    int mat1[r][c],mat2[r][c];
    printf("Enter the first matrix ");
    read_matrix(mat1);
    if(choice==2||choice==3)
    {
        printf("Enter the second matrix ");
        read_matrix(mat2);
    }

    switch (choice)
    {
    case 1:
        matrix_transpose(mat1);
        break;
    case 2:
        matrix_sum(mat1,mat2);
        break;
    case 3:
        matrix_product(mat1,mat2);
    default:
        printf("Invalid choice");
    }
     return 0;
}

