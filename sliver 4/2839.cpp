#include <iostream>
using namespace std;
int main() {
	int kg3 = 0, kg5[5] = {1, 0, -1, 1, 0};
	int N=0, sum=0, kg5index=0, kg5bias=0;
	cin >> N;
	if (N >= 8) {
		N -= 7;
		kg3 = (2 * N - 1) % 5;
		N += 2;
		kg5index = N % 5;
		kg5bias = N / 5;
		sum = kg3 + kg5[kg5index] + kg5bias;
		cout << sum;
	}
	else {
		if(N == 3 || N == 5) {
			cout << 1;
		}else if(N == 6){
			cout << 2;
		}else{
			cout << -1;
		}
	}
	cout<< endl;
	cout << kg3 << ' ' << kg5index << ' ' << kg5[kg5index] << ' ' << kg5bias;
}
// 1 2 4 7	3 5 6
/*
	5	3
8	1	1		3
9	0	3		4

10	2	0 5%5	5
11	1	2 7%5	6
12	0	4 9%5	7
13	2	1 11%5
14	1	3 13%5

15	3	0
16	2	2
17	1	4
18	3	1
19	2	3
*/