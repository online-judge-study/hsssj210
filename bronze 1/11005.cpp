#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(void)
{
    int n, b, temp, midint, count = -1;
    string midstr, a = "";
    cin >> n >> b;
    temp = n;
    while (n != 0)
    {
        n = n / b;
        count++;
    }
    n = temp;
    for (int i = 0; i <= count; i++)
    {
        midint = n / ((int)pow(b, count - i)); // b ^ count - i
        if(midint <10){
            midstr = to_string(midint);
        }
        else{
            midstr = midint + 55;
        }
        a += midstr;
        n = n % (int)pow(b, count - i);
    }
    cout << a;
}