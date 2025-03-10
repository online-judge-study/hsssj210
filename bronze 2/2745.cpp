#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(void)
{
    int B, resultB = 0;
    string a;
    cin >> a >> B;
    int value;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 48 && a[i] < 58) //0~9
        {
            value = a[i] - 48;
        }
        else if (a[i] >= 65 && a[i] < 91) // A~Z
        {
            value = a[i] - 55;
        }
        resultB += value * (int)(pow(B, (a.size() - i - 1)));
    }
    cout << resultB;
}