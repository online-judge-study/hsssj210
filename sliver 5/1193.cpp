#include <iostream>
using namespace std;
int main()
{
    int mother, son, total = 2;
    int X, count = 0;
    bool t = false;
    cin >> X;
    while (1)
    {
        for (int i = 1; i < total; i++)
        {
            son = i;
            count++;
            if (count == X)
                break;
        }
        if (count == X)
            break;
        total++;
        if (t)
            t = false;
        else
            t = true;
    }
    mother = total - son;
    if(t)
        cout << son << '/' << mother;
    else
        cout << mother << '/' << son;
}
//this is spagetti code :(