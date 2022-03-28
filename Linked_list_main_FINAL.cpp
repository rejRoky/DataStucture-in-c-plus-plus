#include<iostream>
using namespace std;

struct node{
    int item;
    node* next;
};

class LinkedList{
    node* head=NULL;
    int count;

    public:

    LinkedList()
       {
         count=0;
       }

    node* createNode(int item)
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
        int c = 0;
        while(c != position-1)
        {
            tmp = tmp->next;
            ++c;
        }

        return tmp->item;
    }

    void insertFront(int item)
    {
        node* tmp = createNode(item);
        tmp->next = head;
        head = tmp;
        count++;
    }

    void insertBack(int item)
    {
        node* tmp = head;
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        node* last = createNode(item);
        last->next = NULL;
        tmp->next = last;
        count++;
    }

    void insert(int position, int item)
    {
        if( isValidPos(position) )
        {
          node* tmp = getNodeAt(position);

          node* temp = createNode(item);

          temp->next = tmp->next;
          tmp->next = temp;
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
            count--;
        }
        else
        cout<<"Sorry the list is already EMPTY!"<<endl;
    }

    void deletePos(int position)
    {
        if( !isEmpty() )
        {
          if(isValidPos(position))
            {
                node* tmp = getNodeAt(position);
                node* temp = tmp->next;
                tmp->next = temp->next;
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
        node* tmp = head;
        int pos=0;
        while(tmp != NULL)
        {
          cout<<tmp->item<<" @ "<<++pos<<endl;
          tmp = tmp->next;
        }
        cout<<"Size of the list is " <<SizeOf()<<endl;
    }
};

int main()
{
    int a;
    LinkedList ob;
    ob.insertFront(20);
    ob.insertFront(10);
    ob.insertBack(30);
    ob.insertBack(40);
    ob.insertFront(5);
    ob.insertBack(50);
    ob.insertFront(2);
    ob.insertFront(1);
    ob.deleteFront();
    ob.deleteBack();
    ob.deletePos(4);
    ob.insert(4,15);
    ob.insert(5,25);
    ob.print();
pos_check:
    cout<<"Enter a position to know the value ";
    cin>>a;
    if(ob.isValidPos(a))
    {
        cout<<"Value of "<<a<<" is "<<ob.getValueAt(a)<<endl;
    }
    else
    {
        cout<<"Not a Valid Position"<<endl;
        goto pos_check;
    }

    return 0;
}
