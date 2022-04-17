#include "LinkedList.h"
#include <stack>
#include <queue>

int Index(char Item){
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
int Ndex(int item)
{
    if(item==65)
    {return 0;}
    else if(item==66)
    {return 1;}
    else if(item==67)
    {return 2;}
    else if(item==68)
    {return 3;}
    else if(item==69)
    {return 4;}
    else if(item==70)
    {return 5;}
    else if(item==71)
    {return 6;}
}
int fofbfs(LinkedList graph[];char start;char goal)
{
    stack <char> s;
    int arr[10]={0,0,0,0,0,0,0,0,0};
    s.push(start);
    arr[Index(start)]=1;
    char tmp;
    while(s.top() != goal)
    {
        tmp=s.top();
        s.pop();
        for(int i=0;i<graph[Index(tmp)].SizeOf();i++)
        {
            {
                if(arr[Ndex(graph[Index(tmp)].getValueAt(i))] == 0)
                {
                    s.push(graph[Index(tmp)].getValueAt(i));
                    arr[Ndex(graph[Index(tmp)].getValueAt(i))] = 1;
                    if(s.top() == goal)
                    {
                        cout<<goal<<endl;
                        goto end_;
                    }
                }
            }
        }
        cout<<s.top();
    }

    end_:
        cout<<endl<<s.top();
        cout<<" GOAL!!! "<<endl;
        return 0;

}


