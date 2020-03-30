#include<stdio.h>
#include<stdlib.h>
int insertionSort(int arr[],int size)
{
   int i,j,key;
   for(i=1;i<size;i++)
   {
       key=arr[i];
       j=i-1;
       while(j>=0 && arr[j]>key)
       {
           arr[j+1]=arr[j];
           j=j-1;
       }
       arr[j+1]=key;
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
    insertionSort(arr,size);
      for(i=0;i<size;i++)
     printf("%d\t",arr[i]);
    return 0;
}
