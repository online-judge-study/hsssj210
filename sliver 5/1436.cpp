#include <iostream>
#include <string>
using namespace std;
bool checknum(int num);		// 666이 들어갈때
int main() {
	int n, t = 665, count = 0;	// n: 입력, t: 반복 숫자, count: n번째 숫자
	cin >> n;
	while (n != count) {	// n번째 값 = count일때 반복문 종료
		t++;				// 다음 t값
		if (checknum(t)) {	// t를 666부터 1을 더해가며 반복
			count++;		// 조건 만족시 count++
		}
	}
	cout << t;				//t값 출력력
}
bool checknum(int num) {
	string str = to_string(num);	//정수형을 문자열으로 형변환
	size_t found = str.find("666"); //문자열 내에 666이 있다면
	if(found != string::npos){		//발견됐다면
		return true;
	}
	return false;
}