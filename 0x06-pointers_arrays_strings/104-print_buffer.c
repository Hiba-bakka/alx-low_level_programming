#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size) {
    if (size <= 0) {
        printf("\n");
        return;
    }

    int i, j;
    for (i = 0; i < size; i += 10) {
        // Print line position in hexadecimal
        printf("%08x ", i);

        // Print hexadecimal content and corresponding characters
        for (j = 0; j < 10; j += 2) {
            if (i + j < size) {
                unsigned char byte1 = b[i + j];
                unsigned char byte2 = (i + j + 1 < size) ? b[i + j + 1] : 0;
                printf("%02x", byte1);
                printf("%02x", byte2);
                printf(" ");
            } else {
                printf("   ");
            }
        }

        printf(" ");

        for (j = 0; j < 10; j++) {
            if (i + j < size) {
                unsigned char byte = b[i + j];
                if (isprint(byte)) {
                    printf("%c", byte);
                } else {
                    printf(".");
                }
            } else {
                break;
            }
        }

        printf("\n");
    }
}
