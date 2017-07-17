#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
int *p = (int *)sbrk(0);
*p = 2;
  exit();
}
