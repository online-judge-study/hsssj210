#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int Point[100][100];
    memset(Point, 0, sizeof(Point));
    int x = 0, y = 0;
    int times; //입력 반복값
    int count = 0; //결과값
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        cin >> x >> y;
        if(x < 0 || x >= 100 || y < 0 || y >= 100){
            break;
        }
        for(int j=0; j<10; j++){
            for(int k=0; k<10; k++){
                if(Point[x+j][y+k] == 0){
                    count++;
                }
                Point[x+j][y+k] = 1;
            }
        }
    }
    cout << count;
}