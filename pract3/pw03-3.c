#include <stdio.h>
#include <string.h>

int main(void) {
    char nameuser[20] = "";
    char space[2]= " ";
    scanf("%s", nameuser);
    printf("\"%s\"\n", nameuser);
    printf("\"%20s\"\n", nameuser);
    printf("\"%-20s\"\n", nameuser);
    printf("\"%-5s", space);
    printf("%s", nameuser);
    printf("%5s\"\n", space);
    return 0;
}