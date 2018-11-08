#include <stdio.h>

int main() {
  printf("STARTED RUNNING\n");
  
  /* int x = 1 * 1.7; */


  /* int x = ((int)(((double)1) * 1.7)); */


  /* /\* int x = 1.7 * " degrees"; *\/ */







  



  
  /* double temp = (double)2; */
  /* int y = 1.7 * temp; */
  /* int y = ((void *)1.7) * (float)((void *)2); */

  float x = 1.7;

  float *p = &x;
  int *ip = (int *)p;
  
  printf("%d\n", *ip);
  
  /* int y = *ip; */
  /* printf("%d\n", y); */


  /* void *vp = (int *)ip; */
  /* int *ptr = (void *)vp; */


  

  /* int a = 5; */
  /* int *aptr = &a; */

  /* void *vptr = aptr; */
  /* int *bptr = vptr; */
  /* long *fptr = vptr; */

  /* printf("%x\n", aptr); */
  /* printf("%x\n", vptr); */
  /* printf("%x\n", bptr); */
  /* printf("%x\n", fptr); */

  /* aptr++; */
  /* vptr++; */
  /* bptr++; */
  /* fptr++; */
  
  /* printf("%x\n", aptr); */
  /* printf("%x\n", vptr); */
  /* printf("%x\n", bptr); */
  /* printf("%x\n", fptr); */

  /* /\* float yf = 1.7 * 2; *\/ */

  /* /\* printf("%x\n", y); *\/ */
  /* /\* printf("%f\n", yf); *\/ */

  
  
  return 0;
}
