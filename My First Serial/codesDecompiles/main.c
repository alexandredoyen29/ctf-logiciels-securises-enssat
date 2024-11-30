undefined4 main(int argc,char **argv)
{
  byte cle;
  undefined4 result;
  int check;
  uint lenPartOfNumeroDeSerie;
  char *partOfNumeroDeSerie;
  int i;
  uint j;
  char *numeroDeSerie;
  
  if (argc == 2) {
    numeroDeSerie = argv[1];
    check = checkToken(numeroDeSerie,'_');
    if (check == 8) {
      puts(s_Le_num_ro_de_s_rie_n'est_pas_val_080b8050);
      result = 1;
    }
    else {
      partOfNumeroDeSerie = (char *)tokenizer(numeroDeSerie,"_");
      for (i = 0; i < 8; i = i + 1) {
        if (0 < i) {
          partOfNumeroDeSerie = (char *)tokenizer((char *)0x0,"_");
        }
        cle = getCle(partOfNumeroDeSerie);
        check = strlen(partOfNumeroDeSerie);
        if (check != *(int *)(BYTE_ARRAY_080ed0c0 + i * 4)) {
          puts(s_Le_num_ro_de_s_rie_n'est_pas_val_080b8050);
          return 1;
        }
        for (j = 0; lenPartOfNumeroDeSerie = strlen(partOfNumeroDeSerie), j < lenPartOfNumeroDeSerie
            ; j = j + 1) {
          if ((byte)(partOfNumeroDeSerie[j] ^ cle) != (&valeurDechiffree)[j + i * 6]) {
            puts(s_Le_num_ro_de_s_rie_n'est_pas_val_080b8050);
            return 1;
          }
        }
      }
      puts(s_Le_num_ro_de_s_rie_est_valide._080b807c);
      result = 0;
    }
  }
  else {
    puts(s_Vous_devez_renseigner_un_num_ro_d_080b8008);
    result = 1;
  }
  return result;
}
