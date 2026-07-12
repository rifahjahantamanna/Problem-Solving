// radiantrifah
#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int scores[n];
 
    for(int i=0; i<n; ++i)
    {
        scanf("%d", &scores[i]);
    }
 
    int total_score = 0;
    for(int i=0; i<m; ++i)
    {
        int idx; 
        scanf("%d",&idx);
 
        total_score += scores[idx-1];
 
    }
 
    printf("%d\n",total_score);
    return 0;
}