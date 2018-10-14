#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct list
{
int val;
struct list *next;
} *start=NULL,*node,*ptr;
int main()
{
char cho,ch;
do
{
node=(struct list *)
malloc(sizeof(struct list));
printf("Enter value in node\n");
scanf("%d",&node->val);
node->next=NULL;
if(start==NULL)
{
start=ptr=node;
}
else
{
ptr->next=node;
ptr=ptr->next;  
}
// fflush(NULL);
printf("Do You Want To add more node y/n\n");
scanf("%s",&cho);
}while(cho!='n');

display();

do
{
printf("\n 1. Sum of link list\n 2. Count node in Link List");
printf("\n 3. Insert at Begin\n 4. Insert after item\n 5. Insert before item ");
printf("\n 6. Insert after Position \n 7. Insert before Position \n");
printf(" 8. Delete Begining\n 9. Delete Particular Postion\n 10. Delete Particular Item \n 11. Delete Last \n 12. Exit");
printf("\nEnter you choice");
scanf("%d",&ch);
switch(ch)
{
case 1:sum();
  break;
case 2:Count();
  break;
case 3:InsertatBegin();
  break;
case 4:Insertafteritem();
  break;
case 5:Insertbeforeitem();
  break;
case 6:Insertafterparticularpos();
  break;
case 7:Insertbeforeparticularpos();
  break;
case 8:delbegin();
  break;
case 9:delparicularpos();
  break;
case 10:delparicularitem();
  break;
case 11:deletelast();
  break;
case 12:
  break;
}  
}while(ch!=12);

getch();
return 0;
}

void display()
{
ptr=start;
while(ptr!=NULL)
{
printf("%d->",ptr->val);
ptr=ptr->next;
}
}

void sum()
{
int sum=0;
ptr=start;
while(ptr!=NULL)
{
sum=sum+node->val;
ptr=ptr->next;
}
printf("sum %d",sum);
}

void Count()
{
int ch=0;
ptr=start;
while(ptr!=NULL)
{
ch=ch+1;
ptr=ptr->next;
}
printf("Total node are %d",ch);
}

void InsertatBegin()
{
node=(struct list *)malloc(sizeof(struct list));
printf("Enter value");
scanf("%d",&node->val);
if(node==NULL)
{
printf("Overflow");
exit(0);
}
else
{
node->next=start;
start=node;
}
display();
}

void Insertafteritem()
{
int item;
node=(struct list *) malloc(sizeof(struct list));
printf("Enter value to be inserted");
scanf("%d",&node->val);
if(node==NULL)
{
printf("Overflow");
exit(0);
}
else
{
printf("Inter after which item do you want to insert value");
scanf("%d",&item);
ptr=start;
while(ptr->val!=item&&ptr!=NULL)
{
ptr=ptr->next;
}
if(ptr->val==item)
{
node->next=ptr->next;
ptr->next=node;
}
display();
}
}

void Insertbeforeitem()
{
int item;
node=(struct list *) malloc(sizeof(struct list));
printf("Enter value to be inserted");
scanf("%d",&node->val);
printf("Inter after which item do you want to insert value");
scanf("%d",&item);
if(node==NULL)
{
printf("Overflow");
exit(0);
}
else
{
if(start->val=item)
{
node->next=start;
start=node;
}
else
{
ptr=start;
while((ptr->next)->val!=item&&ptr!=NULL)
{
ptr=ptr->next;
}
if((ptr->next)->val==item)
{
node->next=ptr->next;
ptr->next=node;
}
}
display();
}
}

void Insertafterparticularpos()
{
int pos,loc;
node=(struct list *) malloc(sizeof(struct list));
printf("Enter value to be inserted");
scanf("%d",&node->val);
if(node==NULL)
{
printf("Overflow");
exit(0);
}
else
{
printf("Enter position do want to insert node");
scanf("%d",&pos);
if(pos==1)
{
node->next=start;
start=node;
display();
}
else
{
ptr=start;
loc=1;
while(loc!=pos && ptr!=NULL)
{
ptr=ptr->next;
loc=loc+1;
}
if(loc==pos)
{
node->next=ptr->next;
ptr->next=node;
display();
}
}
}
}

void Insertbeforeparticularpos()
{
int pos,loc;
node=(struct list *) malloc(sizeof(struct list));
printf("Enter value to be inserted");
scanf("%d",&node->val);
if(node==NULL)
{
printf("Overflow");
exit(0);
}
else
{
printf("Enter position do want to insert node");
scanf("%d",&pos);
if(pos==1)
{
node->next=start;
start=node;
display();
}
else
{
ptr=start;
loc=1;
while(loc!=pos-1 && ptr!=NULL)
{
ptr=ptr->next;
loc=loc+1;
}
if(loc==pos-1)
{
node->next=ptr->next;
ptr->next=node;
display();
}
}
}
}

void delbegin()
{
if(node==NULL)
{
printf("underflow");
exit(0);
}
else
{
ptr=start;
start=start->next;
remove(ptr);
display();
}
}

void delparicularpos()
{
int pos,loc;
if(node==NULL)
{
printf("underflow");
exit(0);
}
else
{
printf("Enter position do want to delete");
scanf("%d",&pos);
if(pos==1)
{
ptr=start;
start=start->next;
remove(ptr);
display();
}
else
{
ptr=start;
loc=1;
while(loc!=pos-1 && ptr!=NULL)
{
ptr=ptr->next;
loc=loc+1;
}
if(loc==pos-1)
{
node=ptr->next;
ptr->next=(ptr->next)->next;
remove(node);
display();
}
}
}
}

void delparicularitem()
{
int item;
printf("Enter item do you want to delete");
scanf("%d",&item);
if(node==NULL)
{
printf("underflow");
exit(0);
}
else
{
if(start->val==item)
{
ptr=start;
start=start->next;
remove(ptr);
display();
}
else
{
ptr=start;
while((ptr->next)->val!=item&&ptr!=NULL)
{
ptr=ptr->next;
}
if((ptr->next)->val=item)
{
node=ptr->next;
ptr->next=(ptr->next)->next;
remove(node);
display();
}
}
}
}

void deletelast()
{
if(node==NULL)
{
printf("underflow");
exit(0);
}
else
{
ptr=start;
while ((ptr->next)->next!=NULL)
{
ptr=ptr->next;
}
node=ptr->next;
ptr->next=(ptr->next)->next;
remove(node);
display();
}
}
