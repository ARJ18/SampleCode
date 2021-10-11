#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int add(int *p, int n)
{int s=0;
  for (int i = 0; i < n; i++)
{
  s+=i[p];
}
return s;
}


int main()
{ 
  int arr[50],n,*p;
  printf("Enter the no of elements :");
  scanf("%d",&n);
  printf("Enter the elements of array");
for (int i = 0; i < n; i++)
{
  p =&i;
  scanf("%d",&arr[*p]);
}

printf("Sum = %d",add(arr,n));
  return 0;

}
