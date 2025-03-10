#include <stdio.h>
#include <stdlib.h>
int function(int, int);
int main(){
    int n, m;
    int max, min;
    scanf("%d %d", &n,&m);
    max = function(n,m);
    min = n * (m/max);
    printf("%d\n%d", max, min);
}
int function(int a, int b){
    int max;//최대공약수
    int small;
    if(a>b){
        small = b;
    }else{
        small = a;
    }
    for(int i = small; i>=1; i--){
        if(a%i == 0 && b%i == 0){
            max = i;
            break;
        }
    }
    return max;
}