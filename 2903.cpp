#include <iostream>
using namespace std;
int main(){
    int N, value=2, result;
    cin >> N;
    for(int i=0; i<N; i++){
        value = 2 * value - 1;
    }
    result = value * value;
    cout << result;
}