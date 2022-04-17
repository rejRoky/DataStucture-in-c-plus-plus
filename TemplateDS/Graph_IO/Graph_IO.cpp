#include<iostream>
#include "LinkedList.h"
using namespace std;

int main(){
	int x, y;
	LinkedList g[7];
	int a, b, c;

	cin>>c;
	for(int z=0; z<c; z++){
		cin>>a>>b;
		g[a].insertBack(b);
		g[b].insertBack(a);
	}	

	for(y=0; y<=6; y++){
		cout<<y<<": ";
		for(x=1; x<=g[y].size(); ++x){ cout<<g[y].getValueAt(x); }
		cout<<endl;
	}


	


	return 0;
}