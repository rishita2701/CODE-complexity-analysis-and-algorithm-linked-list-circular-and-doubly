#include<iostream>  
using namespace std;
struct node   
{  
    int data;  
    node *next;   
};  

node *head;  
  
void beginsert ();   
void lastinsert ();  
void randominsert();  
void begin_delete();  
void last_delete();  
void random_delete();  
void display();  
 
int main ()  
{  
    int choice =0;  
    while(choice != 7)   
    {  
        cout<<"\n Choose an option : \n";
   cout<<"\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Show all the elements\n6.Exit\n";  
        cout<<"\nEnter your choice?\n";         
        cin>>choice;  
        switch(choice)  
        {  
            case 1:  
            beginsert();      
            break;  
            case 2:  
            lastinsert();         
            break;  
            case 3:  
            begin_delete();       
            break;  
            case 4:  
            last_delete();        
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
void beginsert()  
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
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   
       cout<<"\nnode inserted\n";  
    }  
              
}  
void lastinsert()  
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
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }  
          
  cout<<"\nnode inserted\n";   
    }  
}  
void begin_delete()  
{  
    node *ptr;   
    if(head == NULL)  
    {  
        cout<<"\nUNDERFLOW";     
    }  
    else if(head->next == head)  
    {  
        head = NULL;     
             cout<<"\nNode deleted\n";  
    }   
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
   
        head = ptr->next;  
      cout<<"\nNode deleted\n";  
    }  
}  
void last_delete()  
{  
     node *ptr, *preptr;  
    if(head==NULL)  
    {  
       cout<<"\nUNDERFLOW"; 
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
     
     cout<<"\nNode deleted\n";  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
      
  cout<<"\nNode deleted\n";  
    }  
}  
void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
       cout<<"\n The list is empty !";
    }     
    else  
    {  
       cout<<"\n The elements are : " ;
          
        while(ptr -> next != head)  
        {  
                 cout<< ptr -> data<<"\t";  
            ptr = ptr -> next;  
        }  
        cout<< ptr -> data<<"\t";  
    }        
}  

