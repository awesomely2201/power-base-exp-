int power(int base, int exp)
{
  if(exp==0)
    return 1;
  else
  {
   return (base*power(base,exp-1));
  }
}
