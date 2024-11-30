byte getCle(char *partOfNumeroDeSerie)
{
  uint sizeOfPartOfNumeroDeSerie;
  byte xor;
  uint i;
  
  xor = 0;
  i = 0;
  while( true ) {
    sizeOfPartOfNumeroDeSerie = strlen(partOfNumeroDeSerie);
    if (sizeOfPartOfNumeroDeSerie <= i) break;
    xor = xor ^ partOfNumeroDeSerie[i];
    i = i + 1;
  }
  return xor;
}
