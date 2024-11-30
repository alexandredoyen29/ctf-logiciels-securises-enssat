void create(void)
{
  int iVar1;
  size_t tailleDeLEntreeUtilisateur;
  uint i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined nomEleveCourant;
  undefined4 auStack_f0 [27];
  undefined4 prenomEleveCourant;
  char stdinBuffer [112];
  
  _nomEleveCourant = *(undefined4 *)(class + current_max_index * 0x71);
  prenomEleveCourant = *(undefined4 *)(class + current_max_index * 0x71 + 109);
  iVar1 = -(int)(&nomEleveCourant + 1);
  puVar2 = (undefined4 *)((int)(class + current_max_index * 0x71) - (int)(&nomEleveCourant + iVar1))
  ;
  puVar3 = (undefined4 *)(&nomEleveCourant + 1);
  for (i = (uint)(stdinBuffer + iVar1) >> 2; i != 0; i = i - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  printf(s_Pr_nom_:_0804a01c);
  fgets(stdinBuffer,50,stdin);
  tailleDeLEntreeUtilisateur = strcspn(stdinBuffer,"\r\n");
  stdinBuffer[tailleDeLEntreeUtilisateur] = '\0';
  strncpy(class + current_max_index * 0x71,stdinBuffer,0x1e);
  printf("Nom : ");
  fgets(stdinBuffer,50,stdin);
  tailleDeLEntreeUtilisateur = strcspn(stdinBuffer,"\r\n");
  stdinBuffer[tailleDeLEntreeUtilisateur] = '\0';
  strncpy(class + current_max_index * 0x71 + 0x1f,stdinBuffer,30);
  printf("City : ");
  gets(stdinBuffer);
  tailleDeLEntreeUtilisateur = strcspn(stdinBuffer,"\r\n");
  stdinBuffer[tailleDeLEntreeUtilisateur] = '\0';
  strncpy(class + current_max_index * 0x71 + 0x1f,stdinBuffer,50);
  current_max_index = current_max_index + 1;
  puts(s_Nouvel_l_ve_ajout_0804a039);
  return;
}
