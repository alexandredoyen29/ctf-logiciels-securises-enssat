void main(void)
{
  int choix;
  char choixStr [10];
  undefined *puStack_10;
  
  puStack_10 = &stack0x00000004;
  setvbuf(stdin,(char *)0x0,2,0);
  setvbuf(stdout,(char *)0x0,2,0);
  setvbuf(stderr,(char *)0x0,2,0);
  puts("================================================");
  puts("            Alpha Management Server");
  puts("================================================");
  do {
    while( true ) {
      printf(&DAT_0804a0b8);
      fgets(choixStr,8,stdin);
      putchar(10);
      choix = atoi(choixStr);
      if (choix != 4) break;
      delete();
    }
    if (choix < 5) {
      if (choix == 3) {
        update();
      }
      else if (choix < 4) {
        if (choix == 1) {
          print();
        }
        else if (choix == 2) {
          create();
        }
      }
    }
  } while( true );
}
