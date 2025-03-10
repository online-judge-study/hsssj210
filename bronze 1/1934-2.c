#include <stdio.h>
#include <stdlib.h>
int function(int, int);
int main(){
    int n, m;
    int cnt;
    int* result = (int*)malloc(sizeof(int)*1000);
    scanf("%d", &cnt);
    for (int i = 0; i < cnt; i++){
        scanf("%d %d", &n, &m);
        result[i]=function(n,m);;
    }
    for(int i = 0; i<cnt; i++){
        printf("%d\n", result[i]);
    }
    free(result);
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
    b= b*(a/max);
    return b;
}