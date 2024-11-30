void verifierNumeroDeSerie(int arg)
{
  int bonneValeur;
  
  bonneValeur = vmPop();
  if (arg != bonneValeur) {
    puts(s_Le_num_ro_de_s_rie_n'est_pas_val_080ba008);
    end(1);
  }
  return;
}
