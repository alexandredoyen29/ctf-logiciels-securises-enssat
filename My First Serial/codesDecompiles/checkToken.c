int checkToken(char *numeroDeSerie,char constante)
{
  uint sizeofNumeroDeSerie;
  int i;
  uint j;
  
  i = 0;
  j = 0;
  while( true ) {
    sizeofNumeroDeSerie = strlen(numeroDeSerie);
    if (sizeofNumeroDeSerie <= j) break;
    if (constante == numeroDeSerie[j]) {
      i = i + 1;
    }
    j = j + 1;
  }
  return i + 1;
}
