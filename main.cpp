#include "grader.h"
#include <stdarg.h>
#include <math.h>

long long solve(int num_args , ... ){

int sum = 0;
int a , tmp;

va_list args;

va_start(args , num_args);

for (int  i = 0; i < num_args; i++)
{

  if(i == 0)
  {
   a = va_arg(args , int);
   tmp = a;
  }
  else{
   a = va_arg(args , int);
    sum +=  fabs(a - tmp);
   tmp = a;
  }


}

  va_end(args);

  return sum;

}