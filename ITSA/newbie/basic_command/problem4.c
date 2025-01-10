#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DICT_SIZE 5
#define MAX_WORD_LEN 10

typedef struct {
    char english[MAX_WORD_LEN];
    char chinese[MAX_WORD_LEN];
} DictEntry;

void initDictionary(DictEntry *dict) {
    strcpy(dict[0].english, "dog");
    strcpy(dict[0].chinese, "狗");
    
    strcpy(dict[1].english, "cat");
    strcpy(dict[1].chinese, "貓");
    
    strcpy(dict[2].english, "duck");
    strcpy(dict[2].chinese, "鴨");
    
    strcpy(dict[3].english, "cow");
    strcpy(dict[3].chinese, "牛");
    
    strcpy(dict[4].english, "fox");
    strcpy(dict[4].chinese, "狐");
}

int isEnglish(const char *str) {
    while (*str) {
        if (*str < 0) return 0; 
        str++;
    }
    return 1;
}

void translate(const char *input, char *output, DictEntry *dict) {
    int i;
    int found = 0;
    
    if (isEnglish(input)) {
        for (i = 0; i < DICT_SIZE; i++) {
            if (strcmp(input, dict[i].english) == 0) {
                strcpy(output, dict[i].chinese);
                found = 1;
                break;
            }
        }
    } else {
        for (i = 0; i < DICT_SIZE; i++) {
            if (strcmp(input, dict[i].chinese) == 0) {
                strcpy(output, dict[i].english);
                found = 1;
                break;
            }
        }
    }
    
    if (!found) {
        strcpy(output, "Not found");
    }
}

int main() {
    char input[MAX_WORD_LEN];
    char output[MAX_WORD_LEN];
    DictEntry dictionary[DICT_SIZE];
    
    initDictionary(dictionary);
    
    scanf("%s", input);
    
    translate(input, output, dictionary);
    
    printf("%s\n", output);
    return 0;
}