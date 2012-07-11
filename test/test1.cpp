#include <stdio.h>
#include <string.h>

#include "pooh.h"

int main()
{
  Pooh t;

  if(t.get_h())
  {
    printf("FAIL: Test1 -  Pooh h not 0\n");
    return 1;
  }
  else{
  
     printf("OK: Test1  - Initial Pooh h =0 \n");
     return 0;
  }
}