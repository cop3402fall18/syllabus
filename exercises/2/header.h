#ifndef HEADER_GUARD
#define HEADER_GUARD

#ifndef USER_MACRO
#define MACRO 0x10
#define SEMICOLON ;
#define sq(x) x * x;
#endif

int in_header = MACRO SEMICOLON
int x2 = sq(10);

#endif 
