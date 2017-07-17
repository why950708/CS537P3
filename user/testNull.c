#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


#undef NULL
#define NULL ((void*)0)

#define assert(x) if (x) {} else { \
   printf(1, "%s: %d ", __FILE__, __LINE__); \
   printf(1, "assert failed (%s)\n", # x); \
   printf(1, "TEST FAILED\n"); \
   exit(); \
}


int
main(int argc, char *argv[])
{
//  int i = 1;
//  char *p = 0;
//  char x = *p;
//  printf(1,"%d%d",i,x);
    char *arg;
    int fd = open("tmp", O_WRONLY|O_CREATE);
    assert(fd != -1);

assert((int)sbrk(4096 * 60) != -1);


arg = (char*) 0x0;   
assert(write(fd, arg, 10) == -1);

arg = (char*) 0x400; 

}  


  
