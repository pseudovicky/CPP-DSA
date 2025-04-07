#include<iostream>
using namespace std;
int main(){
    struct Node{
        int data;
        struct Node* link;
    };
    struct Node *temp=nullptr,*head=nullptr;
    int choice=1;
    cout<<"press 1 for enter a data or exit 0 :  \n";
    while(choice==1){
       temp=new Node;
       cout<<"enter your data:  \n";
       cin>>temp->data;
       temp->link=head;
       head=temp;
       cout<<"continue:  ";
       cin>>choice;
    }
    temp=head;
    cout<<"your data is like:  ";
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    return 0;
}