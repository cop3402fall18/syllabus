/* #define HEADER_GUARD */
#include "header.h"
/* #include "header.h" */

int main() {
  printf("%d\n", in_header);
  printf("%d\n", MACRO);
#define MACRO -10
  printf("%d\n", MACRO);
  return 0;
}
