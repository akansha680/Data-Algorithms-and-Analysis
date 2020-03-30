#include<stdio.h>
#include<stdlib.h>
int bubbleSort(int arr[],int size)
{
   int i,j,temp;
   for(i=0;i<size-1;i++)
       for(j=0;j<size-i-1;j++)
       {
       if(arr[j]>arr[j+1])
       {
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
       }
   }
   return (*arr);
}
int main()
{
    int *arr,size,i;
    printf("enter size");
    scanf("%d",&size);
    arr=(int *)malloc(size*sizeof(int));
    for(i=0;i<size;i++)
     scanf("%d",&arr[i]);
    bubbleSort(arr,size);
      for(i=0;i<size;i++)
     printf("\t %d",arr[i]);
    return 0;
}
