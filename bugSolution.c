#include <stdio.h>
#include <limits.h>

int main() {
  int x = INT_MAX; 
  if (x == INT_MAX) { 
    printf("Integer overflow would occur.\n");
  } else { 
    x = x + 1; 
    printf("%d", x); 
  }
  return 0; 
} 