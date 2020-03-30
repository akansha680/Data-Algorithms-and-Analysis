#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int binarySearch(int arr[],int key,int min,int max)
{
    int mid;
    mid=(min+max)/2;
    if(arr[mid]==key)
        return mid;
    else if(key>mid){
       min=mid+1;
        return binarySearch(arr,key,min,max);
    }
    else {
       max=mid-1;
       return binarySearch(arr,key,min,max);
    }
}
int main()
{
  int *arr,size,key,min,max,i,result;
  printf("Enter number of array elements ");
  scanf("%d",&size);
  arr=(int *)malloc(size*sizeof(int));
  printf("Enter array elements");
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
  printf("enter element to be searched");
  scanf("%d",&key);
  min=0;
  max=size-1;
  result=binarySearch(arr,key,min,max);
  printf("element found at %d position",result);
}
