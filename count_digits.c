#include<stdio.h>

int main(void) {
    int a;
    scanf('%i', &a);
    int n = 0;
    while (a>0){
        a = a/10;
        n++;
    }
    print('%i', n);
}
