void vmPush(undefined4 arg)
{
  *(undefined4 *)(&pile + sp * 4) = arg;
  sp = sp + 1;
  return;
}
