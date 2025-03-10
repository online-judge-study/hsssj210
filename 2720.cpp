#include <iostream>
using namespace std;
int main(){
    int times, money;
    int quarter, dime, nickel, penny;
    cin >> times;
    for(int i=0; i<times; i++){
        cin >> money;
        quarter = money / 25;
        money = money % 25;
        dime = money / 10;
        money = money % 10;
        nickel = money / 5;
        money = money % 5;
        penny = money;
        cout << quarter << ' ' << dime << ' ' << nickel << ' '<< penny << endl;
    }
}