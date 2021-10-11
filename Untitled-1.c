#include<stdio.h>
#include<ctype.h>

void sparse()
{
    int arr[10][10],r,c;
    printf("Enter the number of rows and columns");
    scanf("%d %d",&r,&c);
    printf("Enter the matrix ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
          scanf("%d",&arr[i][j]);  
        }
        
    }
    for (int i = 0; i < r; i++)
    {   for (int j = 0; j < c; j++)
        {
          if (arr[i][j]!=0)
          {
             printf("%d %d %d\n",i,j,arr[i][j]);
          }
        }
    }
   
}
void fibonacci()
{
    int arr[50],n;
    arr[0]=0;
    arr[1]=1;

    printf("Enter the value of n ");
    scanf("%d",&n);

    for (int i = 2; i <= n; i++)
    {
        arr[i]= arr[i-1]+arr[i-2];
    }

    printf("%d",arr[n]);
    

}
void charcount()
{
    char sentence[100];
    int a=0,d=0,p=0;
    printf("Enter the string ");
    scanf("%s[^\n]",sentence);
    int l = strlen(sentence);
    for (int i = 0; i < l; i++)
    {   
      
        if(isalnum(sentence[i]))
       { if(isalpha(sentence[i]))
            a++;
         else
            d++;
       continue; 
       }
          if(ispunct(sentence[i]));
            p++;
    }
    printf("Number of alphabets =%d\nNumber of digits =%d\nNumber of punctuation marks = %d",a,d,p);
    
    }

int main()
{   int n;
    printf("Enter your choice\nSparse Matrix(1)\nFibonacci number 2\nString count(3)\n");
    scanf("%d",&n);
   if(n==1)
    sparse();
    else if(n==2)
    fibonacci();
    else if(n==3)
    charcount();
    else
    printf("invalid Choice");
    return 0;
}