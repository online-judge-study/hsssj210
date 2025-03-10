#include <stdio.h>
#include <stdlib.h>
int function(int, int);
void factorization(int, int *);
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
    int at[15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int bt[15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    factorization(a, at);
    factorization(b, bt);
    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++){
            if ((at[i] == bt[j]) && (at[i] != 1)){
                at[i] = 1;
                bt[i] = 1;
            }
        }
    }
    for (int i = 0; i < 15; i++){
            b = b * at[i];
    }
    return b;
}

void factorization(int a, int *n){
    int z = a;
    for (int i = 0; i < 15; i++){
        for (int j = 2; j <= z; j++){
            if (z % j == 0){
                z = z / j;
                n[i] = j;
                break;
            }
        }
        if (z == 1){
            break;
        }
    }
}