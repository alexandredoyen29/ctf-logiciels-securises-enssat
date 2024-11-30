char * taraitementDuNumeroDeSerie(char *numeroDeSerie,char masque,char **substitutDuNumeroDeSerie)
{
  int fonction;
  char *nouveauNumeroDeSerie;
  undefined3 in_stack_00000009;
  
  if (numeroDeSerie == (char *)0x0) {
    numeroDeSerie = *substitutDuNumeroDeSerie;
  }
  if (*numeroDeSerie != '\0') {
    fonction = libc_marchin(numeroDeSerie,_masque);
    numeroDeSerie = numeroDeSerie + fonction;
    if (*numeroDeSerie != '\0') {
      fonction = libc_machin2(numeroDeSerie,_masque);
      nouveauNumeroDeSerie = numeroDeSerie + fonction;
      if (*nouveauNumeroDeSerie != '\0') {
        *nouveauNumeroDeSerie = '\0';
        nouveauNumeroDeSerie = nouveauNumeroDeSerie + 1;
      }
      *substitutDuNumeroDeSerie = nouveauNumeroDeSerie;
      return numeroDeSerie;
    }
  }
  *substitutDuNumeroDeSerie = numeroDeSerie;
  return (char *)0x0;
}
