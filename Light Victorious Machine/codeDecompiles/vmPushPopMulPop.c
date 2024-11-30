void vmPushPopMulPop(void)
{
  int a;
  int b;
  int res;
  int j;
  int i;
  
  a = vmPop();
  b = vmPop();
  res = 0x2a;
  if (b < 0) {
    for (i = 0; b < i; i = i + -1) {
      res = res + a;
    }
    res = 0x2a - res;
  }
  else {
    for (j = 0; j < b; j = j + 1) {
      res = res + a;
    }
    res = res + -0x2a;
  }
  vmPush(res);
  return;
}
