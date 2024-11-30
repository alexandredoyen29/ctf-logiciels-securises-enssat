void vmPushValeurEnMemoire(int param_1)
{
  vmPush(*(undefined4 *)(&memoire + param_1 * 4));
  return;
}
