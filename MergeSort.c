#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int first,int middle,int end);
int mergeSort(int arr[],int first,int end)
{
   int middle;
   if(first<end)
    {
   middle=(first+end)/2;
   mergeSort(arr,first,middle);
   mergeSort(arr,middle+1,end);
   merge(arr,first,middle,end);
   }
}
void merge(int arr[],int first,int middle,int end)
{
    int i,j,k;
    int n1,n2;
    n1=middle-first+1;
    n2=end-middle;
    int arr1[n1],arr2[n2];
    for(i=0;i<n1;i++)
        arr1[i]=arr[first+i];
    for(j=0;j<n2;j++)
        arr2[j]=arr[middle+1+j];
    i=0;
    j=0;
    k=first;
    while(i<n1 && j<n2){
    if(arr1[i]<arr2[j])
    {
        arr[k]=arr1[i];
        i++;
    }
    else
    {
        arr[k]=arr2[j];
        j++;
    }
    k++;
}
    while(i<n1)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int *arr,size,i;
    printf("enter size:");
    scanf("%d",&size);
    arr=(int *)malloc(size*sizeof(int));
    printf("enter elements");
    for(i=0;i<size;i++)
     scanf("%d",&arr[i]);
    mergeSort(arr,0,size-1);
    for(i=0;i<size;i++)
     printf("%d\t",arr[i]);
    return 0;
}
