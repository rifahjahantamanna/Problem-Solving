#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    long long given_numbers_sum = 0;
    for (int i = 0; i < n - 1; ++i){
        int x;
        scanf("%d", &x);
        given_numbers_sum += x;
    }

    long long total = (long long)n * (n + 1) / 2;
    long long res = total - given_numbers_sum;

    printf("%lld\n", res);
    return 0;
}