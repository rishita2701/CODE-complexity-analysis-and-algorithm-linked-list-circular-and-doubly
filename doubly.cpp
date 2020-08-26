//CODE FOR DOUBLY LINKED LIST:

#include<iostream>  
#include <cstdlib>
using namespace std;
struct node  
{  
     node *prev;  
     node *next;  
    int data;  
}*head; 
void insertion_beginning();  
void insertion_last();  
 void deletion_beginning();  
void deletion_last();  
void display();  
int main ()  
{  
int choice =0;  
    while(choice != 9)  
    {  
        
        cout<<"\n Choose an option : \n";
        cout<<"\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete         from last\n5.Show all the elements\n6.Exit\n";  
        cout<<"\nEnter your choice?\n";         
        cin>>choice; 

        switch(choice)  
        {  
            case 1:  
            insertion_beginning();  
            break;  
            case 2:  
            insertion_last();  
            break;  
            case 3:    
            deletion_beginning();  
            break;  
            case 4:  
            deletion_last();  
            break;  
            case 5:   
            display();  
            break;  
            case 6:  
            exit(0);  
            break;  
            default:  
            cout<<"Please enter valid choice!!"; 
        }  
    }  
    return 0;
}  
void insertion_beginning()  
{  
  node *ptr;   
   int item;  
   ptr = new node; 
   if(ptr == NULL)  
   {  
     cout<<"\nOVERFLOW";
   }  
   else  
   {  
 cout<<"\nEnter the node data : ";  
        cin>>item;  
      
   if(head==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;  
   }  
   else   
   {  
       ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
   }  
   cout<<"\nnode inserted\n";  
}  
}  
void insertion_last()  
{  
   struct node *ptr,*temp;  
   int item;  
   ptr = new node;  
   if(ptr == NULL)  
   {  
        cout<<"\nOVERFLOW";  
   }  
   else  
   {  
      cout<<"\nEnter the node data : ";   
        cin>>item;
        ptr->data=item;  
       if(head == NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          ptr->next = NULL;  
          }      
       }  
cout<<"\nnode inserted\n";   
    }  
void deletion_beginning()  
{  
    node *ptr;  
    if(head == NULL)  
    {  
        cout<<"\n UNDERFLOW";  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
         cout<<"\nnode deleted\n";  
    }  
    else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
        
        cout<<"\nnode deleted\n";  
    }  
  } 
void deletion_last()  
{  
  node *ptr;  
    if(head == NULL)  
    {  
        cout<<"\nUNDERFLOW";     
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
 
             cout<<"\nNode deleted\n";  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != NULL)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = NULL;   

      cout<<"\nNode deleted\n";  
    }  
}  
void display()  
{  
     node *ptr;  
    
    ptr = head;  
    if(head == NULL)  
    {  
       cout<<"\n The list is empty !";
    }    
    else {
       cout<<"\n The elements are : " ;
    while(ptr != NULL)  
    {  
       cout<< ptr -> data<<"\t";  
        ptr=ptr->next;  
    }  
    }
}  

