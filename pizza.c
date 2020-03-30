#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,*pizza,maximum,curr_slice,curr_type,type,counter;
    printf("Maximum number of pizza slices");
    scanf("%d",&maximum);
    printf("types of pizza");
    scanf("%d",&type);
    pizza=(int*)malloc(type*sizeof(int));
    for(i=0;i<type;i++)
        scanf("%d",&pizza[i]);
    counter=0;
    curr_slice=0;
    curr_type=0;
    for(i=type-1;i>=0;i--){
        if(curr_slice<maximum)
        {
           curr_slice+=pizza[i];
           printf("%d\t",curr_type);
           curr_type+=1;
           counter+=1;
        }
    }
             printf("%d",counter);
}
