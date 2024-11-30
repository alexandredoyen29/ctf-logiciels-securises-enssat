void create(void *classe)
{
  int iVar1;
  char *nouvelEtudiant;
  size_t indiceDuFinDeChamp;
  uint i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_GS_OFFSET;
  undefined nouvelEtudiantNomStr;
  undefined4 auStack_98 [21];
  undefined4 uStack_43;
  char buffer [31];
  int canary;
  
  canary = *(int *)(in_GS_OFFSET + 0x14);
  nouvelEtudiant = (char *)((int)classe + current_max_index * 90);
  _nouvelEtudiantNomStr = *(undefined4 *)nouvelEtudiant;
  uStack_43 = *(undefined4 *)(nouvelEtudiant + 0x56);
  iVar1 = -(int)(&nouvelEtudiantNomStr + 1);
  puVar2 = (undefined4 *)(nouvelEtudiant + -(int)(&nouvelEtudiantNomStr + iVar1));
  puVar3 = (undefined4 *)(&nouvelEtudiantNomStr + 1);
  for (i = (uint)(buffer + iVar1) >> 2; i != 0; i = i - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  printf(s_Pr_nom_:_0804a01c);
  fgets(buffer,0x1e,stdin);
  indiceDuFinDeChamp = strcspn(buffer,"\r\n");
  buffer[indiceDuFinDeChamp] = '\0';
  strncpy((char *)((int)classe + current_max_index * 0x5a),buffer,0x1e);
  printf("Nom : ");
  fgets(buffer,0x1e,stdin);
  indiceDuFinDeChamp = strcspn(buffer,"\r\n");
  buffer[indiceDuFinDeChamp] = '\0';
  strncpy((char *)((int)classe + current_max_index * 0x5a + 0x1e),buffer,0x1e);
  printf("City : ");
  fgets(buffer,0x1e,stdin);
  indiceDuFinDeChamp = strcspn(buffer,"\r\n");
  buffer[indiceDuFinDeChamp] = '\0';
  strncpy((char *)((int)classe + current_max_index * 0x5a + 0x3c),buffer,0x1e);
  current_max_index = current_max_index + 1;
  puts(s_Nouvel_l_ve_ajout_0804a039);
  if (canary != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}
