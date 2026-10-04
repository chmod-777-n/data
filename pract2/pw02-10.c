#include <stdio.h>
#include <stdint.h>

int main(void) {
    int packet_id;
    unsigned int status_input;
    float voltage;
    scanf("%x %o %f", &packet_id, &status_input, &voltage);

    uint8_t status_code = (uint8_t)status_input;
    uint16_t checksum = (uint16_t)(packet_id + status_code);

    printf("PACKET_ID: %d\n", packet_id);
    printf("STATUS_CODE: %u\n", (unsigned int)status_code);
    printf("STATUS_CHAR: %c\n", status_code);
    printf("VOLTAGE: %2f\n", voltage);
    printf("CHECKSUM: %u\n", (unsigned int)checksum);

    return 0;
}