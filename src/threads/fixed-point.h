#ifndef FIXED_POINT
#define FIXED_POINT


static const int Q=14;


static const int64_t f=16384;

int Convert_To_Fixed(int n)
{
  return (n*f);
}

int Convert_To_IntZero(int x)
{
  return (x/f);
}

int Convert_To_IntNear(int x)
{
  if (x>=0)
   return (x+f/2);
  else if (x<=0)
   return(x-f/2);
}


int AddFixed(int x, int y)
{
  return (x+y);
}

int SubFixed(int x, int y)
{
  return (x-y);
}

int AddInt (int x, int n)
{
  return(x+n*f);
}

int SubInt(int x, int n)
{
  return (x-n*f);
}

int MulFixed(int64_t x, int y)
{
  return (x*y/f);
}

int MulInt(int x, int n)
{
 return (x*n);
}

int DivFixed(int64_t x, int y)
{
  return (x*f/y);
}

int DivInt(int x, int n)
{
  return (x/n);
}


#endif
