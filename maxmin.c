//finding the largest and smallest elements in an array
#include<stdio.h>
#define N 10

void max_min(int a[], int n, int *max, int *min);
int main(void)
{
 int b[N];
 int big, small;
 
 printf("Enter %d numbers: ",N);
 for(int i=0;i<N;i++)
 {
  scanf("%d",&b[i]);
 }
 printf("\n");

 max_min(b,N,&big,&small);

 printf("Largest: %d\n",big);
 printf("smallest: %d\n",small);

 return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
 *max=a[0];
 *min=a[0];
 for(int i=0;i<N-1;i++)
 {
  if(*max<a[i+1])
   {
    *max=a[i+1];
   }
  if(*min>a[i+1])
   {
    *min=a[i+1];
   }
 }
 
}