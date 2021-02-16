/**
 * RC4 PRNG algorithm implementation
 * 
 * @author      Yohann THEPAUT (ythepaut) <contact@ythepaut.com>
 * @license     GNU GPL v3.0
 * @see         https://github.com/ythepaut/WEP-cracker
 */

#include "rc4.h"

void ksa(byte* key, short t, short steps, RC4State* state)
{
    // Initializes the permutation array
    for (short i = 0 ; i < 256 ; ++i)
        state->P[i] = i;
    
    // Permutation array "shuffling"
    short j = 0;
    for (short i = 0 ; i < steps ; ++i) {
        j = (j + state->P[i] + key[i % t]) % 256;
        swap(&state->P[i], &state->P[j]);
    }

    // Initialize counters
    state->i = 0;
    state->j = (steps == 256) ? 0 : j;
}

byte prga(RC4State* state)
{
    state->i = (state->i + 1) % 256;                                    // i++
    state->j = (state->j + state->P[state->i]);                         // j = j + P[i]
    swap(&state->P[state->i], &state->P[state->j]);                     // P[i] <-> P[j]
    return state->P[(state->P[state->i] + state->P[state->j]) % 256];   // P[P[i] + P[j]]
}
