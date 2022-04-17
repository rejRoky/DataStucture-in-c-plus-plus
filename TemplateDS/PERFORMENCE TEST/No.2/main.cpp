#include <iostream>
#include <queue>
#include <stack>
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

 void BFS(node *root )
{
        queue <node*>q;
        q.push(root);
        while(!q.empty()){
                node * n = q.front();
               cout <<  n->item << "  ";

               q.pop();
               if (n->left!= NULL)
               q.push(n->left);
               if(n->right!=NULL)
               q.push(n->right);
        }

}


 void DFS(node *root )
{
        stack <node*>s;
        s.push(root);
        while(!s.empty()){
                node * n = s.top();
               cout <<  n->item << "  ";

               s.pop();
               if (n->left!= NULL)
               s.push(n->left);
               if(n->right!=NULL)
               s.push(n->right);
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


    cout << endl;
    cout << "    BFS" << endl;
    cout << endl;
    BFS(root);

    cout << endl;
    cout << endl;

    cout << "     DFS" << endl;
    cout << endl;
    DFS(root);
    cout << endl;


}
