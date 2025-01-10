#include <stdio.h>
#include <limits.h>

int main(){
    int n,temp = INT_MIN;
    while(scanf("%d", &n) != EOF){
        if(n > temp) temp = n;
    }
    printf("%d\n", temp);
    return 0;
}