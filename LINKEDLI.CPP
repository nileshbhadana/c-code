#include<iostream.h>
using namespace std;
struct Node{
int num;
Node * next;
};
struct Node *head =NULL;
void insertNode(int n)
{
struct Node*new Node=new Node;
new Node->bum=n;
head=newNode;
}
void display(){
if(head==NULL){
cout<<"list is empty!"<<end1;
return;
}
struct Node * temp=head;
while(temp!=NULL){
cout<<temp->num<<"";
temp=temp->next;
}
cout<<end1;
}
void delete item(){
if(head==NULL){
cout<<"list is empty!"<<end;
return;
}
cout<<head->num<<"is remove"<<end1;
head=head->next;
}
int main(){
display();
insert Node(10);
insert Node(20);
insert Node(30);
insert Node(40);
insert Node(50);
display()
deleteitem();deleteitem();deleteitem();delete();delete();
deleteitem();
display();
return 0;
}