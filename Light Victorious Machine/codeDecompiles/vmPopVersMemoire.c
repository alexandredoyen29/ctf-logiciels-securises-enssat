void vmPopVersMemoire(int arg)
{
  undefined4 valeurDuHautDeLaPile;
  
  valeurDuHautDeLaPile = vmPop();
  *(undefined4 *)(&memoire + arg * 4) = valeurDuHautDeLaPile;
  return;
}
