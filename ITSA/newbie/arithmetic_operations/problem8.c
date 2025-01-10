#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0;i < n;i++){
        int num;
        scanf("%d", &num);
        printf("%d %d %d\n", num, num*num, num*num*num);
    }
    return 0;
}