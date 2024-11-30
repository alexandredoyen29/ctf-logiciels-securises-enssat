undefined4 vmPop(void)
{
  sp = sp + -1;
  return *(undefined4 *)(&pile + sp * 4);
}
