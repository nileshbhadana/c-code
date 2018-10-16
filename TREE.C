#include<stdio.h>
#include<conio.h>
struct tree
{
int val;
struct tree *left;
struct tree *right;
}*node=NULL;
struct tree *create(struct tree *,int);
void preorder(struct tree *);
void inorder(struct tree *);
void postorder(struct tree *);
main()
{
int cho,i,n,value;
clrscr();
do
{
printf("\n1. Create Binary Tree\n");
printf("2. Preorder\n3. Inorder\n4. Postorder\n5. EXIT");
printf("\nEnter your Choice:");
scanf("%d",&cho);
switch(cho)
{
case 1:printf("How many nodes in tree");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter Value");
scanf("%d",&value);
node=create(node,value);
}
break;
case 2:preorder(node);
break;
case 3:inorder(node);
break;
case 4:postorder(node);
break;
case 5:break;
}
}while(cho!=5);
return 0;
}

struct tree *create(struct tree *node,int value)
{
if(node==NULL)
{
node=(struct tree *)malloc(sizeof(struct tree));
node->val=value;
node->left=node->right=NULL;
return node;
}
else
{
if(value<node->val)
{
node->left=create(node->left,value);
return node;
}
else
{
node->right=create(node->right,value);
return node;
}
}
}

void preorder(struct tree *node)
{
if(node!=NULL)
{
printf("%d  ",node->val);
preorder(node->left);
preorder(node->right);
}
}

void inorder(struct tree *node)
{
if(node!=NULL)
{
inorder(node->left);
printf("%d  ",node->val);
inorder(node->right);
}
}

void postorder(struct tree *node)
{
if(node!=NULL)
{
postorder(node->left);
postorder(node->right);
printf("%d  ",node->val);
}
}