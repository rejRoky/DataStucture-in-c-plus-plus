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

void preorder(node *root)
{
    cout << root->item << "  ";
    if (root->left != NULL )
    {
        preorder(root->left);
    }
    if(root->right != NULL)
    {
        preorder(root->right);
    }

}

void postorder(node *root)
{

    if (root->left != NULL )
    {
        postorder(root->left);
    }

    if(root->right != NULL)
    {
        postorder(root->right);
    }

    cout << root->item << "  ";


}

void inorder(node *root)
{

    if (root->left != NULL )
    {
        inorder(root->left);
    }

    cout << root->item << "  ";

    if(root->right != NULL)
    {
        inorder(root->right);
    }

}


int main(){

    node n1(4), n2(1), n3(3), n4(2), n5(16), n6(9), n7(10);
    node *root = &n1;

    root->left = &n2;
    root->right = &n3;

    root->left->left = &n4;
    root->left->right = &n5;

    root->right->left = &n6;
    root->right->right= &n7;


    cout << " Pre-Order" << endl;
    preorder(root);

    cout << endl;
    cout << endl;

    cout << " Post-Order" << endl;
    postorder(root);

    cout << endl;
    cout << endl;

    cout << " In-Order" << endl;
    inorder(root);

    cout << endl;





}
