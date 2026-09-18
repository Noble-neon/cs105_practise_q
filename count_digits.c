#include<stdio.h>

int main(void) {
    long long a;
    scanf("%lli", &a);
    long long copy = a;
    int n = 0;
    while (a>0){
        a = a/10;
        n++;
    }
    printf("the number %lli has %i digits", copy, n);
}
