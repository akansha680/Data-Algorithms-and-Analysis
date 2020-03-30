#include<stdio.h>
#include<stdlib.h>
int knapSack(int W, int wt[], int val[], int n);
int max(int a, int b) { return (a > b)? a : b; }
int knapSack(int W, int wt[], int val[], int n)
{
if (n == 0 || W == 0)
    return 0;
if (wt[n-1] > W)
    return knapSack(W, wt, val, n-1);
else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
                    knapSack(W, wt, val, n-1) );
}
int main()
{
 int i,*pizza,maximum,curr_slice,curr_type,type,counter,*type_arr;
    printf("Maximum number of pizza slices");
    scanf("%d",&maximum);
    printf("types of pizza");
    scanf("%d",&type);
    for(i=0;i<type;i++)
        type_arr[i]=i;
    pizza=(int*)malloc(type*sizeof(int));
    for(i=0;i<type;i++)
        scanf("%d",&pizza[i]);
    knapSack(maximum,pizza,type_arr,type);
}
