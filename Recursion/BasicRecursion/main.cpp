#include <iostream>

using namespace std;

void fun (int n) 
{
    if (n > 40)
    {
        cout <<  n << endl; 
        fun(n-1); // recursion perform
       
    }
}

// Exp :
// 1. Switch on bulb
// 2. goto next Room

void room (int numberOfRoom) // recursion funtion
{
    if (numberOfRoom > 0)
    {
        cout << "Switch Bulb of Romm No : " << numberOfRoom << endl; // Switch on bulb
        room(numberOfRoom-1); // goto next room
        cout << "Come Back in room no: " << numberOfRoom << endl;

    }
}


int main()
{
    fun(5); // funtion call
    room(6);
    return 0;
}
