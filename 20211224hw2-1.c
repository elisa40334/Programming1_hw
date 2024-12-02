#include <stdio.h>
#include <string.h>
#define LEN 1000

int main(void) {
    char source[LEN];
    char search_1[2] = {"my"};
    char search_2[2] = {"My"};

    fgets(source, LEN, stdin);

    fgets(search_1, 2, stdin);
    fgets(search_2, 2, stdin);

    // 去除最後的換行字元
    search_1[strlen(search_1) - 1] = '\0';
    search_2[strlen(search_2) - 1] = '\0';

    char *loc = strstr(source, search_1);
    char *loc_2 = strstr(source, search_2);

    if(loc != NULL) {
        char temp = source[loc-source+4],temp_1 = source[loc-source+5];
        for (int i = 1000; i >= 0 ; i--)
        {
            if (source[i] !='\0')
            {
                source[i+2] = source[i];
            }
            
        }
        source[loc-source] = 'y';
        source[loc-source+1] = 'o';
        source[loc-source+2] = 'u';
        source[loc-source+3] = 'r';
    }
    printf("%s\n", source);

    return 0;
}