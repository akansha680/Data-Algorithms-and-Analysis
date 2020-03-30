#include<stdio.h>
#include<stdlib.h>
int partition(int arr[],int low,int high);
void swap(int *a,int *b);
int quickSort(int arr[],int low,int high)
    {
        int pi;
        if(low<high)
            {
        pi= partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
        }
        return (*arr);
    }
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[],int low,int high)
    {
        int pivot;
        int i,j;
        pivot=arr[high];
        i=low-1;
        for(j=low;j<high;j++)
        {
            if(arr[j]<pivot)
            {
                i++;
                swap(&arr[i],&arr[j]);
            }
        }
        swap(&arr[i+1],&arr[high]);
        return (i+1);
    }
int main()
{
    int *arr,i,size;
    printf("enter size");
    scanf("%d",&size);
    arr=(int*)malloc(size*sizeof(int));
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    quickSort(arr,0,size);
    for(i=0;i<=size;i++)
        printf("%d\t",arr[i]);
    return 0;
}












































