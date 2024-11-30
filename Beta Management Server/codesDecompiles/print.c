void print(int param_1)
{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int in_GS_OFFSET;
  byte bVar5;
  int local_80;
  undefined local_7a [30];
  undefined auStack_5c [30];
  undefined auStack_3e [26];
  undefined4 uStack_24;
  int local_20;
  
  bVar5 = 0;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  for (local_80 = 0; local_80 < current_max_index; local_80 = local_80 + 1) {
    puVar2 = (undefined4 *)(param_1 + local_80 * 0x5a);
    local_7a._0_4_ = *puVar2;
    uStack_24 = *(undefined4 *)((int)puVar2 + 0x56);
    iVar1 = -(int)(local_7a + 2);
    puVar2 = (undefined4 *)((int)puVar2 - (int)(local_7a + iVar1));
    puVar4 = (undefined4 *)(local_7a + 2);
    for (uVar3 = (uint)((int)&local_20 + iVar1) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    printf("%02d: %s | %s | %s\n",local_80,local_7a,auStack_5c,auStack_3e);
  }
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}
