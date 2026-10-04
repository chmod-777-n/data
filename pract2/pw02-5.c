#include <stdio.h>
#include <stdint.h>

int main(void) {
    printf("INT8: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int8_t), INT8_MIN, INT8_MAX, (long long)INT8_MAX-INT8_MIN+1);
    printf("UINT8: size=%zu, min=%u, max=%u, values=%llu\n", sizeof(uint8_t), 0, UINT8_MAX, (long long)UINT8_MAX-0+1);
    printf("INT16: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int16_t), INT16_MIN, INT16_MAX, (long long)INT16_MAX-INT16_MIN+1);
    printf("UINT16: size=%zu, min=%u, max=%u, values=%llu\n", sizeof(uint16_t), 0, UINT8_MAX, (long long)UINT16_MAX-0+1);
    printf("INT32: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int32_t), INT32_MIN, INT32_MAX, (long long)INT32_MAX-INT32_MIN+1);
    printf("UINT32: size=%zu, min=%u, max=%u, values=%llu\n", sizeof(uint32_t), 0, UINT32_MAX, (unsigned long long)UINT32_MAX-0+1);
    return 0;
}