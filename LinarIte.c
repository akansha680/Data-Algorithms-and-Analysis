#include<stdio.h>
#include<stdlib.h>
int LinearSearch(int arr[],int size,int key)
{
    int i;
    for(i=0;i<=size;i++)
        if(arr[i]==key)
            return i;
    return -1;

}
int main()
{
int *arr,size,key,i,result;
printf("enter size of array");
scanf("%d",&size);
arr=(int*)malloc(size*sizeof(int));
printf("\nenter elements of array");
for(i=0;i<=size;i++)
{
    scanf("%d",&arr[i]);
}
printf("\nenter the element to be searched");
scanf("%d",&key);
result=LinearSearch(arr,size,key);
if(result==-1)
    printf("not found");
else
    printf("element found at %d position",result);
return 0;
}
