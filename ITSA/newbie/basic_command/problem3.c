#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *num = (char *)malloc(6 * sizeof(char));
    scanf("%s", num);
    int len = strlen(num);
    for(int i = len-1 ; i >= 1 ; i--){
        printf("%c,", num[i]);
    }
    printf("%c\n", num[0]);
	return 0;
}