#include <iostream>
using namespace std;

struct node{
    int item;
    node* left;
    node* right;

public:
    node(int item){
    this->item = item;
    this->left = NULL;
    this->right = NULL;
    }

};

void input ( node *root , int pr , char name)
{

    if (node *root == NULL)
    {
        node *newnode = new node;
        newnode->item = root->item
        newnode->left=NULL;
        newnode->right=NULL;
    }
    else if (node *root->item == pr && name == "L")
    {
        root->left->item = pr;
    }
    else if (node *root->item == pr && name == "R")
    {
        root->right->item = pr;
    }



}

int main()
{
    node *root = new node;

    cout << "Hello world!" << endl;
    return 0;
}
