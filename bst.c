#include<stdio.h>
#include<stdlib.h>
typedef struct BST
{
    int data;
    struct BST *left;
    struct BST *right;
}node;
int main()
{
    char ch;
    node *root=NULL,temp;
    do
    {
        temp=create();
        if(root==NULL)
            root=temp;
        else
            insert(root,temp);
        printf("Do you want to insert more Y/N");
        getchar();
        scanf("%d",&ch);
    }while(ch=='Y' | ch=='y')
    printf("Pre-order traversal ");
}
node *create()
{
    node *temp;
    printf("enter data");
    temp=(node*)malloc(sizeof(node));
    scanf("d",&temp->data);
    temp->left=temp->right=NULL;
    return temp;
}
void insert(node *root,node *temp)
{
    if(temp->data<root->data)
    {
        root->
    }
}
