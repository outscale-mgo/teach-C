#include <stdio.h>

#define ZEON 0
#define RENPU 1

struct mobil_suit {
  int faction;
  char name[8];
};

void print_ms(struct mobil_suit ms)
{
  static char *factions_names[] = {"ZEON", "RENPU"};
  printf("%s mobil suite from: %s\n", ms.name,
	 factions_names[ms.faction]);
}

int main(void)
{
  struct mobil_suit zaku = {0, "ZAKU"};
  struct mobil_suit gundam = {1, "Gundam"};

  print_ms(zaku);
  print_ms(gundam);
}

/* OUTPUT V */
