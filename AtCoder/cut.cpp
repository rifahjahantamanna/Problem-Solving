// problem link:https://atcoder.jp/contests/abc368/tasks/abc368_a

#include <stdio.h>

int main(){

    int n,k;
    scanf("%d %d",&n,&k);

    int arr_of_cards[n];
    for (int i=0; i<n; ++i){
        scanf("%d",&arr_of_cards[i]);
        
    }

    for (int i=n-k; i<n; ++i) printf("%d ",arr_of_cards[i]);
    for (int i=0; i<n-k; ++i) printf("%d ",arr_of_cards[i]);
    

    return 0;

}