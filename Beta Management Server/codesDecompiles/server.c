undefined4 server(void *classePtr)
{
  int intChoix;
  undefined4 uVar1;
  int in_GS_OFFSET;
  void *classe;
  char choix [48];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puts("================================================");
  puts("            Alpha Management Server");
  puts("================================================");
  do {
    printf(&DAT_0804a134);
    fgets(choix,8,stdin);
    putchar(10);
    intChoix = atoi(choix);
    switch(intChoix) {
    case 1:
      print(&classe);
      break;
    case 2:
      create(&classe);
      break;
    case 3:
      update(&classe);
      break;
    case 4:
      delete(&classe);
      break;
    case 5:
      puts("\n\nREBOOTING...\n");
      uVar1 = 1;
      if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
        uVar1 = __stack_chk_fail_local();
      }
      return uVar1;
    }
  } while( true );
}

