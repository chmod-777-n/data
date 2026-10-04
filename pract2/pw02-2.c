#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int f, s;
    scanf("%d %d", &f, &s);

    bool module_ready = f;
    bool fault_state = s;

    printf("MODULE_READY: %d\n", module_ready);
    printf("FAULT_STATE: %d\n", fault_state);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", module_ready+fault_state);

    return 0;
}