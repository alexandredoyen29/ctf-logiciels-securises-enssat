void main(void)
{
  void *classe;
  
  classe = &stack0x00000004;
  setvbuf(stdin,(char *)0x0,2,0);
  setvbuf(stdout,(char *)0x0,2,0);
  setvbuf(stderr,(char *)0x0,2,0);
  do {
    server(classe);
  } while( true );
}
