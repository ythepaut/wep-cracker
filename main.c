/**
 * WEP cracker main program
 * 
 * @author      Yohann THEPAUT (ythepaut) <contact@ythepaut.com>
 * @license     GNU GPL v3.0
 * @see         https://github.com/ythepaut/WEP-cracker
 */

#include "rc4.h"
#include <stdio.h>

void test()
{
    RC4State state;
    byte key[] = {0x78, 0x89, 0xec, 0x01, 0x02, 0x03, 0x04};
    ksa(key, 7, 256, &state);

    for (short i = 0 ; i < 256 ; ++i) {
        printf("%02x ", state.P[i]);
        if (i % 16 == 15) {
            printf("\n");
        }
    }

    printf("%d\n", prga(&state));
}

int main(int argc, char* argv[])
{
    test();
    return 0;
}
