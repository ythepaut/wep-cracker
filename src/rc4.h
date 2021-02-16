/**
 * RC4 PRNG algorithm implementation
 * 
 * @author      Yohann THEPAUT (ythepaut) <contact@ythepaut.com>
 * @license     GNU GPL v3.0
 * @see         https://github.com/ythepaut/WEP-cracker
 */

#ifndef WEPCRACKER_RC4_H
#define WEPCRACKER_RC4_H

#include "util.h"

/**
 * Stores RC4 internal state.
 */
typedef struct {
    // Permutation array
    byte P[256];
    // Counters
    byte i;
    byte j;
} RC4State;

/**
 * Key Scheduling Algorithm : Initializes RC4's internal state
 * @param key       byte*           (in)        RC4 seed, as an array of bytes
 * @param t         short           (in)        Key size
 * @param steps     short           (in)        KSA steps count, 256 by default
 * @param state     RC4State*       (out)       RC4 internal state
 */
void ksa(byte* key, short t, short steps, RC4State* state);

/**
 * Pseudo Random Generator Algorithm : Get a new pseudo random number from RC4
 * @param state     RC4State*       (in out)    RC4 internal state
 * @return new random byte
 */
byte prga(RC4State* state);

#endif
