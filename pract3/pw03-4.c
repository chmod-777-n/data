#include <stdio.h>
#include <string.h>

int main(void) {
    char literal[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";

    printf("%s", literal);
    printf("STRLEN: %zu\n", strlen(literal));
    printf("SIZEOF: %zu\n", sizeof(literal));
    return 0;
}