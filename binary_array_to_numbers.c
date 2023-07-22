#include <stddef.h>

unsigned binary_array_to_numbers(const unsigned *bits, size_t count)
{
  int result = 0;
  int number = 1;
  for(int i = count-1; i >= 0; i--)
    {
      result += bits[i] * number;
     number*=2;
    }
    return result;
}