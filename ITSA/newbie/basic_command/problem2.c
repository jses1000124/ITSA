#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *num = (char *)malloc(6 * sizeof(char));
    scanf("%s", num);
    int len = strlen(num);
    for(int i = 0 ; i < len ; i++){
        printf("%c\n", num[i]);
    }
	return 0;
}