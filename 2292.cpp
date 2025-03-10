#include <iostream>
using namespace std;
int main(){
    int N,count=1;
    cin >> N;
    N--;
    while(N>0){
        N = N - 6 * count;
        count++;
    }
    cout << count;
}
//1 6 12 18