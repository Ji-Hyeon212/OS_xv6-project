#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{

   int i = 0;
   
   i = getreadcount();

   printf(1,"%d\n", i);
   exit();
}   
