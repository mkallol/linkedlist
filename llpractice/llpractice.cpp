#include <iostream>
#include <cstdlib>
using namespace std;
#include "llpractice.h"


list::list()
{
    head=NULL;
    curr=NULL;
    temp=NULL;
}
void list::push(int add_data)
{
    nodeptr n = new node;
    n->next=NULL;
    n->data=add_data;
    
    if (head!=NULL){
        curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
        
    }
        curr->next=n;}
    else
{
    head = n;
 
}
}


void list::deleteNode(int delete_data)
{
    nodeptr delptr=NULL;
    temp=head;
    curr=head;
    while(curr!=NULL && curr->data!=delete_data)
    {
        temp=curr;
        curr=curr->next;
    }
    if (curr==NULL)
    {
        cout<<"deleteData was not in the list \n";
        delete delptr;
        
        
    }
    else
    {
        delptr =curr;
        curr=curr->next;
        temp->next=curr;
        if(delptr==head)
        {
            head=head->next;
            temp=NULL;
        }
        delete delptr;
        cout<<"the value "<<delete_data<<" was deleted."<<endl;
    }
}

void list::display()
{
    curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}
