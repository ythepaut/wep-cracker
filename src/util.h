/**
 * Various functions helpful in the program
 * 
 * @author      Yohann THEPAUT (ythepaut) <contact@ythepaut.com>
 * @license     GNU GPL v3.0
 * @see         https://github.com/ythepaut/WEP-cracker
 */

#ifndef WEPCRACKER_UTIL_H
#define WEPCRACKER_UTIL_H

typedef unsigned char byte;

/**
 * Swaps two variables
 * @param a         byte*           (in out)    To exchange with b.
 * @param b         byte*           (in out)    To exchange with a.
 */
void swap(byte* a, byte* b);

#endif
