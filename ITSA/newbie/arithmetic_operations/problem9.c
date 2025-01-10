#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0;i < n;i++){
        int j;
        long long int sum = 1;
        scanf("%d", &j);
        if(j > 31){
            printf("Value of more than 31\n");
            continue;
        }
        for(int k = 0;k < j;k++){
            sum *= 2;
        }
        printf("%lld\n", sum);
    }

    return 0;
}