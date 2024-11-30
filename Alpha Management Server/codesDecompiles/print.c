void print(void)
{
  int iVar1;
  uint j;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined local_91 [31];
  undefined auStack_72 [31];
  undefined auStack_53 [47];
  undefined4 uStack_24;
  int i;
  
  bVar4 = 0;
  for (i = 0; i < current_max_index; i = i + 1) {
    local_91._0_4_ = *(undefined4 *)(class + i * 0x71);
    uStack_24 = *(undefined4 *)(class + i * 0x71 + 0x6d);
    iVar1 = -(int)(local_91 + 1);
    puVar2 = (undefined4 *)((int)(class + i * 0x71) - (int)(local_91 + iVar1));
    puVar3 = (undefined4 *)(local_91 + 1);
    for (j = (uint)((int)&i + iVar1) >> 2; j != 0; j = j - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    printf("%02d: %s | %s | %s\n",i,local_91,auStack_72,auStack_53);
  }
  return;
}
