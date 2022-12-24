#include<stdio.h>
#include<stdlib.h>
struct node
{
int item;
struct node*left;
struct node*right;
};
struct node*newNode(int item)
{
struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->item=item;
temp->left=NULL;
temp->right=NULL;
return temp;
}
void inorderTraversal(struct node*root)
{
if(root==NULL)
return;
inorderTraversal(root->left);
printf("%c ",root->item);
inorderTraversal(root->right);
}
void preorderTraversal(struct node*root)
{
if(root==NULL)
return;
printf("%c ",root->item);
preorderTraversal(root->left);
preorderTraversal(root->right);
}
void postorderTraversal(struct node*root)
{
if(root==NULL)
return;
postorderTraversal(root->left);
postorderTraversal(root->right);
printf("%c ",root->item);
}
struct node*insert(struct node*node,int item)
{
if(node==NULL)
return newNode(item);
if(item<node->item)
node->left=insert(node->left,item);
else if(item>node->item)
node->right=insert(node->right,item);
}
int main()
{
struct node*root=NULL;
root=insert(root,'A');
insert(root,'B');
insert(root,'D');
insert(root,'C');
insert(root,'E');
insert(root,'F');
printf("inorder :");
inorderTraversal(root);
printf("\npreorder :");
preorderTraversal(root);
printf("\npostorder :");
postorderTraversal(root);
return 0;
}
