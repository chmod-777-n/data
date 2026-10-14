#include <stdio.h>
#include <string.h>

#define DISTRO "LinuxDistro"

int main(void) {
    printf("DISTRO: %s\n", DISTRO);
    const char date[] = "2026";
    printf("RDATE: %s\n", date);
    printf("STRLEN: %zu\n", strlen(DISTRO));
    printf("SIZEOF: %zu\n", sizeof(DISTRO));
    return 0;
}