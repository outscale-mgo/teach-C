int printf(const char * restrict fmt, ...);

void f();
void f(char const * const str);
void f(const char * const s) {
  printf("%s\n", s);
}

int main(void) {
  f("Wololo");
}
