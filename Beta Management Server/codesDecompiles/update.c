void update(void *classe)
{
  int idEleve;
  size_t buffEnd;
  int gs;
  char buffer [31];
  int canary;
  
  canary = *(int *)(gs + 0x14);
  printf(s_Quel_l_ve_voulez-vous_modifier_?_0804a050);
  fgets(buffer,0x1e,stdin);
  idEleve = atoi(buffer);
  if (idEleve < 0) {
    puts(s_L'index_doit_tre_sup_rieur_0._0804a078);
  }
  else {
    printf(s_Pr_nom_:_>_0804a09c);
    fgets(buffer,30,stdin);
    buffEnd = strcspn(buffer,"\r\n");
    buffer[buffEnd] = '\0';
    if (buffer[0] != '\0') {
      strncpy((char *)((int)classe + idEleve * 90),buffer,30);
    }
    printf("Nom :\n> ");
    fgets(buffer,0x1e,stdin);
    buffEnd = strcspn(buffer,"\r\n");
    buffer[buffEnd] = '\0';
    if (buffer[0] != '\0') {
      strncpy((char *)((int)classe + idEleve * 90 + 30),buffer,30);
    }
    printf("City :\n> ");
    fgets(buffer,0x1e,stdin);
    buffEnd = strcspn(buffer,"\r\n");
    buffer[buffEnd] = '\0';
    if (buffer[0] != '\0') {
      strncpy((char *)((int)classe + idEleve * 90 + 60),buffer,30);
    }
    puts(s_Voici_l'_l_ve_modifi_:_0804a0bc);
    printf("%02d: %s | %s | %s\n",idEleve,(void *)((int)classe + idEleve * 0x5a),
           (int)classe + idEleve * 0x5a + 0x1e,(int)classe + idEleve * 0x5a + 0x3c);
  }
  if (canary != *(int *)(gs + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}
