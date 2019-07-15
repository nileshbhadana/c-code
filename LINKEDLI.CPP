#include<iostream.h>
#include<conio.h>
struct Node{
int num;
Node*next;
};
struct Node*head =NULL;
void insertNode(int n)
{
struct Node*newNode=new Node;
new Node->num=n;
head=newNode;
}
void display(){
if(head==NULL){
cout<<"list is empty!"<<endl;
return;
}
struct Node * temp=head;
while(temp!=NULL){
cout<<temp->num<<"";
temp=temp->next;
}
cout<<endl;
}
void deleteitem(){
if(head==NULL){
cout<<"list is empty!"<<endl;
return;
}
cout<<head->num<<"is remove"<<endl;
head=head->next;
}
int main(){
display();
insertNode(10);
insertNode(20);
insertNode(30);
insertNode(40);
insertNode(50);
display();
deleteitem();deleteitem();deleteitem();deleteitem();deleteitem();
deleteitem();
display();
return 0;
}