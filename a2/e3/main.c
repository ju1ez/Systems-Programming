
#include <stdio.h>        
unsigned int countBits(unsigned int n) { 
  unsigned int i = 0; 
  while (n) { 
    i += n & 1; 
    n >>= 1; 
  } 
  return i; 
} 
