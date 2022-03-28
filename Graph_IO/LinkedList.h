#include<iostream>
using namespace std;

struct node{
    int item;
    node* next;

    node(int item){
        this->item = item;
        this->next = NULL;
    }
};

class LinkedList{
    node* head;
    int count;

    node* createNode(int item){
        return new node(item);
    }
    node* getNodeAt(int position){
        node* t; int c;
        t = head; c=1;
        while(c<position){
            t = t->next;
            c++;
        }
        return t;
    }
public:
    LinkedList(){
        head = NULL;
        count=0;
    }
    void insertFront(int item){
        node* n = createNode(item);
        if(head==NULL){
            head = n;
        }
        else{
            n->next = head;
            head = n;
        }
        count++;
    }
    void insertBack(int item){
        node* n = createNode(item);
        if(head==NULL){
            head = n;
        }
        else{
            node* t = getNodeAt(count);
            t->next = n;
        }
        count++;
    }
    void removeFront(){
        head = head->next;
        count--;
    }
    void removeBack(){
        if(head!=NULL){
            node* t = getNodeAt(count-1);
            t->next = NULL;
        }
        else if(head->next==NULL){
            head = NULL;
        }
        count--;
    }
    int getValueAt(int position){
        node* t = getNodeAt(position);
        return t->item;
    }
    int size(){
        return count;
    }
};