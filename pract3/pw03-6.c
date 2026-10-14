#include <stdio.h>

int main(void) {
    char str[100] = ""; 
    int width;
    scanf("%s %d", str, &width);
    printf("%*s\n", width, str);
    printf("%-*s\"\n", width+5, str);
    return 0;
}