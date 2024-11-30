void vmPushPopPlusPop(void)
{
  int a;
  int b;
  
  a = vmPop();
  b = vmPop();
  vmPush((a + b * 2) * 2 - (a + b * 3));
  return;
}
