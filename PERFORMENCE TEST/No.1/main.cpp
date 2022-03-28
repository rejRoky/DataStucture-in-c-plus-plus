#include <iostream>
using namespace std;

struct node
{
    int items;
    node * left;
    node * right;
};

int main()
{
    node *n1 , *n2, *n3, *n4, *n5,*n6, *n7;

    n1 = new node;
    n2 = new node;
    n3 = new node;
    n4 = new node;
    n5 = new node;
    n6 = new node;
    n7 = new node;

    n1->items = 4;
    n2->items = 1;
    n3->items = 3;
    n4->items = 2;
    n5->items = 16;
    n6->items = 9;
    n7->items = 10;


    n1->left = n2;
    n1->right= n3;

    n2->left = n4;
    n2->right = n5;

    n3->left = n6;
    n3->right = n7;


    n4->left=NULL;
    n4->right=NULL;

    n5->left=NULL;
    n5->right=NULL;

    n6->left=NULL;
    n6->right=NULL;

    n7->left=NULL;
    n7->right=NULL;


    cout << "\t\t    "<< n1->items << "\n\n";
    cout <<"\t"<< n1->left->items << "\t\t   " << n1->right->items << endl;
    cout << endl;
    cout << n2->left->items << "\t    " << n2->right->items;
    cout << "\t       "<< n3->left->items << "\t" << n3->right->items << endl;


    return 0;
}
