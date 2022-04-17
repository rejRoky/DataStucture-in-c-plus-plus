#pragma once
#include <iostream>
using namespace std;

struct node{
    char item;
    node* next;
    node* previous;
};

class LinkedList{
    node* head;
    node* tail;
    int count;

    public:

    LinkedList()
       {
         count=0;
         head = NULL;
       }

    node* createNode(char item)
    {
        node* n = new node;

        n->item = item;
        return n;
    }

    bool isEmpty()
    {
        if(head == NULL)
        {
            return true;
        }

        return false;
    }

    bool isValidPos(int position)
    {
        if(position<=count)
        {
            return true;
        }
        return false;
    }

    node* getNodeAt(int position)
    {
        if(position > 0)
        {
            node* tmp = head;
            int c = 0;
            while(c != position-2)
            {
                tmp = tmp->next;
                ++c;
            }

          return tmp;
        }

            node* tmp = head;
            while(tmp->next->next != NULL)
            {
                tmp = tmp->next;
            }
            return tmp;

    }

    int getValueAt(int position)
    {
        node* tmp = head;
        if(position==0)
        {
           return tmp->item;
        }
        if(position==1)
        {
           return tmp->next->item;
        }

        int c = 0;
        while(c != position-1)
        {
            tmp = tmp->next;
            ++c;
        }

        return tmp->item;
    }

    void insertFront(char item)
    {
        if(head==NULL)
        {
            node* tmp = createNode(item);
            head=tmp;
            tail=head;
            head->next=NULL;
            head->previous=NULL;
            count++;
        }
        else
        {
          node* tmp = createNode(item);
          tmp->next = head;
          head->previous = tmp;
          head = tmp;
          head->previous = NULL;
          count++;
        }
    }

    void insertBack(char item)
    {
        if(head==NULL)
        {
            node* tmp = createNode(item);
            head=tmp;
            tail=head;
            head->next=NULL;
            head->previous=NULL;
            count++;
        }
        else
        {
            node* tmp = head;
            while(tmp->next != NULL)
            {
                tmp = tmp->next;
            }
            node* last = createNode(item);
            last->next = NULL;
            tail=last;
            last->previous = tmp;
            tmp->next = last;
            count++;
        }
    }

    void insert(int position, char item)
    {
        if(position==1)
        {
            insertFront(item);
        }
        else if(position==count)
        {
            insertBack(item);
        }
        else if( isValidPos(position) )
        {
          node* tmp = getNodeAt(position);
          node* temp = createNode(item);
          temp->next = tmp->next;
          tmp->next->previous=temp;
          tmp->next = temp;
          temp->previous=tmp;
          count++;
        }
        else
        {
            cout<<"Not a Valid Position"<<endl;
        }
    }

    void deleteFront()
    {
        if( !isEmpty() )
        {
            head=head->next;
            head->previous=NULL;
            count--;
        }
        else
        cout<<"Sorry the list is already EMPTY!"<<endl;
    }

    void deleteBack()
    {
        if( !isEmpty() )
        {
            node* tmp = getNodeAt(0);
            tmp->next=NULL;
            tail=tmp;
            tail->previous=tmp->previous;
            count--;
        }
        else
        cout<<"Sorry the list is already EMPTY!"<<endl;
    }

    void deletePos(int position)
    {
        if( !isEmpty() )
        {
            if(position==1)
            {
              head=head->next;
              head->previous=NULL;
              count--;
            }
          else if(position==count)
          {
              deleteBack();
          }
          else if(isValidPos(position))
            {
                node* tmp = getNodeAt(position);
                node* temp = tmp->next;
                tmp->next = temp->next;
                temp->next->previous=tmp;
                count--;
            }
          else
            {
                cout<<"Not a Valid Position"<<endl;
            }
        }
        else
        cout<<"Sorry the list is already EMPTY!"<<endl;
    }

    int SizeOf()
    {
        return count;
    }

    void print()
    {
        node* tmp = tail;
        int pos=count;
        cout<<endl;
        while(tmp != NULL)
        {
          cout<<tmp->item<<" ";
          tmp = tmp->previous;
        }
    }
};
