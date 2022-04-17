#include "LinkedList.h"
#include "dfs_connect.h"

int Ind(char Item){
    if(Item=='A'){
        return 0;
    }
    else if(Item=='B'){
        return 1;
    }
    else if(Item=='C'){
        return 2;
    }
    else if(Item=='D'){
        return 3;
    }
    else if(Item=='E'){
        return 4;
    }
    else if(Item=='F'){
        return 5;
    }
    else if(Item=='G'){
        return 6;
    }

}
int main()
{
    LinkedList cgraph[10];
    int n;
    char f,t;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>f>>t;
        cgraph[Ind(f)].insertFront(t);
    }
    cout<<"Start and end node input"<<endl;
    char start,goal;
    cin>>start;
    for(int i=0;i<9;i++)
    {
        if(arr[i]==0)
        {
            fofDFS(cgraph,start);
        }
    }
}

