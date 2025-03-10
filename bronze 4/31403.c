#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[5], b[5];
    int c;
    int num_result, str_result;
    scanf("%s %s %d", a, b, &c);

    num_result = atoi(a) + atoi(b) - c;
    printf("%d\n", num_result);

    str_result = atoi(strcat(a,b)) - c;
    printf("%d", str_result);
}