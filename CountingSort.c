#include<stdio.h>
#include<stdlib.h>
void countingSort(int array[],int size)
{
    int max=array[0];
    int *count,i,output[size];
    for(i=0;i<size;i++)
    {
        if(array[i]>max)
            max=array[i];
    }
    count=(int *)malloc((max+1)*sizeof(int));
//initializing every element with zero in count array
    for(i=0;i<=max;i++)
        count[i]=0;
//storing count of each element respective to the indexes
    for(i=0;i<size;i++)
        count[array[i]]++;
    //getting the cumulative sum and storing in the indexes
    for(i=1;i<=max;i++)
       {
          count[i]+=count[i-1];
       }
     for(i=size-1;i>=0;i--)
     {
         output[count[array[i]]-1]=array[i];
         count[array[i]]--;
     }
  printf("Sorted elements are");
     for(i=0;i<size;i++)
        printf("%d\t",output[i]);

}
int main()
{
    int *arr,size,i;
    printf("Enter size of array");
    scanf("%d",&size);
    arr=(int *)malloc(size*sizeof(int));
    printf("Enter elements");
    for(i=0;i<size;i++)
      scanf("%d",&arr[i]);
    countingSort(arr,size);
}
