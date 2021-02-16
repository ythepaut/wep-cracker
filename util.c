/**
 * Various functions helpful in the program
 * 
 * @author      Yohann THEPAUT (ythepaut) <contact@ythepaut.com>
 * @license     GNU GPL v3.0
 * @see         https://github.com/ythepaut/WEP-cracker
 */

#include "util.h"

void swap(byte* a, byte* b)
{
    byte tmp = *a;
    *a = *b;
    *b = tmp;
}
