#include <iostream>

using namespace std;

void fun (int n) // recursion funtion
{
    if (n > 0)
    {
        cout << "Before n = " << n << endl; // Before print // Calling Time // Ascending
        fun(n-1); // recursion perform
        cout << "After n = " << n << endl; // After print // Returning Time // Descending
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
