#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copy_str(const char *str)
{
  char *ret = malloc(strlen(str));

  if (!ret)
    return NULL;
  return strcpy(ret, str);
}

int main(void)
{
  char *s0, *s1;
  int ret = 1;

  s0 = copy_str("coucou tu veut voir mon code");
  if (!s0)
    return ret;

  s1 = copy_str("wololo");
  if (!s1)
    goto free_s0;

  ret = 0;
  printf("%s - %s\n", s0, s1);

  free(s1);
 free_s0:
  free(s0);
  return ret;
}
