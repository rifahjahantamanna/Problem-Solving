// B - Who is missing? 
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    int freq[n+1];
    for (int i=0; i<n+1; ++i){
        freq[i]={0};
    }

    for (int i=0; i<4*n-1;++i){
        int num;
        scanf("%d\n",&num);
        freq[num]+=1;
    }

    for (int i=1; i<=n ; ++i){
        if (freq[i]==3) printf("%d\n",i);
    }


    return 0;
}