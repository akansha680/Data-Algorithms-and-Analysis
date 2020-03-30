#include<stdio.h>
#include<stdlib.h>
void insertionSort(int arr[],int size)
{
    int last,j;
    if (size <= 1)
        return;
    insertionSort( arr, size-1 );
     last = arr[size-1];
    j = size-2;
    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}
int main()
{
 int *arr,size,i;
 printf("enter size of array");
 scanf("%d",&size);
 arr=(int*)malloc(size*sizeof(int));
 printf("enter the array elements");
 for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
insertionSort(arr,size);
printf("\nsorted array is:");
 for(i=0;i<size;i++){
    printf("\t%d",arr[i]);
 }
return 0;
 }
