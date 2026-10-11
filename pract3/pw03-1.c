#include <stdio.h>
#include <string.h>

int main(void) {
    char massive1[20] = "SibSUTIS";
    printf("SIZEOF: %zu\n",sizeof(massive1));
    printf("STRLEN: %zu\n", strlen(massive1));
    printf("FREE_BYTES: %zu\n", sizeof(massive1)-(strlen(massive1)+1));
    return 0;
}
//"СибГУТИ"
//SIZEOF: 20
//STRLEN: 14
//FREE_BYTES: 5
