#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char* str = malloc(sizeof(char)*1000);
    scanf("%s",str);
    printf("Hello %s\n",str);

	return 0;
}