int printf(const char * restrict fmt, ...);

/* int optional in C89 as return type was int by default, mandatory in C99 and after */
int main (void)
{
  short int c = 10;
  char c0 = 'A', c1 = 'R', c2 = 'C', c3 = 'H';
  /* can't declare variable in for in C89 */
  for (int i = 0; i < c; ++i) {
    printf("(%d)I use %c%c%c%c BTW !\n",
	   i, c0, c1, c2, c3);
  }
  // return 0 optional in main if standard >= C99
}
