#include<stdio.h>
#include<stdlib.h>
int getmax(int arr[],int size);
void radixSort(int arr[],int size);
void countingSort(int array[],int size,int place)
{
    int max=(array[0]/place)%10;
    int *count,i,output[size];
    for(i=0;i<size;i++)
    {
        if(((array[i]/place)%10)>max)
            max=array[i];
    }
    count=(int *)malloc((max+1)*sizeof(int));
//initializing every element with zero in count array
    for(i=0;i<=max;i++)
        count[i]=0;
//storing count of each element respective to the indexes
    for(i=0;i<size;i++)
        count[(array[i]/place)%10]++;
    //getting the cumulative sum and storing in the indexes
    for(i=1;i<=max;i++)
       {
          count[i]+=count[i-1];
       }
     for(i=size-1;i>=0;i--)
     {
         output[count[(array[i]/place)%10]-1]=array[i];
         count[(array[i]/place)%10]--;
     }
     for(i=0;i<size;i++)
        array[i]=output[i];
}
void radixSort(int array[],int size)
{
    int max,place,i;
    max=getmax(array,size);
    for(place=1;max/place>0;place*=10)
        countingSort(array,size,place);
         printf("Sorted elements are");
     for(i=0;i<size;i++)
        printf("%d\t",array[i]);
}
int getmax(int array[],int size)
{
    int max,i;
    max=array[0];
    for(i=0;i<=size;i++)
        if(array[i]>max)
            max=array[i];
    return max;
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
    radixSort(arr,size);
}
