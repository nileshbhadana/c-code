#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#define NULL 0
void  display();
void sum();
void count();
void insertbeginning();
struct list
{
int val;
struct list *next;
}*start=NULL,*node,*ptr;
main()
{
int ch;
char cho;
clrscr();
do
{
node=(struct list*)malloc(sizeof(struct list));
printf("Enter value in Node:  ");
scanf("%d",&node->val);
node->next=NULL;
if (start==NULL)
{
start=ptr=node;
}
else
{
ptr->next=node;
ptr=ptr->next;
}
fflush(stdin);
printf("Do you want to add more node:");
scanf("%c",&cho);
}while(cho!='n');
display();
do
{
printf("\n1.Sum of Linked list\n2.Count node in Linked List\n3.Insert at beginning\n4.Insert after Item\n5.Insert after position\n6.Insert before item\n7.Insert before Position\n8.Insert at Last\n9.Delete from beginning\n10.Delete Item\n11.Delete from Position\n");
printf("Enter Choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:sum();
break;
case 2:count();
break;
case 3:insertbeginning();
break;
/*case 4:insertafteritem();
break;
case 5:insertafterpos();
break;
case 6:insertbeforeitem();
break;
case 7:insertbeforepos();
break;
case 8:insertatlast();
break;
case 9:deletefrombeginning();
break;
case 10:deleteitem();
break;
case 11:deletefrompos();
break;
case 12:deletelast();
break;
case 13:break; */
}
}while (ch!=13);
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
while(ptr!=NULL)
{
sum=sum+ptr->val;
ptr=ptr->next;
}
printf("Sum= %d",sum);
}

void count()
{
int ch=0;
while(ptr!=NULL)
{
ch++;
ptr=ptr->next;
}
printf("Total Nodes= %d",ch);
}

void insertbeginning()
{
node=(struct list*)malloc(sizeof(struct list));
printf("Enter val to input:");
scanf("%d",&node->val);
if(node==NULL)
{
printf("Overflowed...");
exit(0);
}
else
{
node->next=start;
start=node;
}
display();
}