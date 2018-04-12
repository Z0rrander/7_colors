int tab1[taille][taille], tab2[taille][taille], tab3[taille][taille],  tab4[taille][taille];
int compte1, compte2, compte3, compte4;
int k1, k2, k3, k4;
int max1, max2, max3, max4, best_max=0, pos_best_max=0;
int pos1, pos2, pos3, pos4;
char couleurs[7];
couleurs[0]='A'; couleurs[1]='B'; couleurs[2]='C'; couleurs[3]='D'; couleurs[4]='E'; couleurs[5]='F'; couleurs[6]='G';

for (k1=0, k1<7, k1++){
  tab1=tableau actuel;
  compte1=nombre_de position_posseder_par_le_joueur
  tab1=mis_a_jour(tab1,couleur=couleurs[k1]);
  compte1=compte1+nombre_position_ajouté;
  for (k1=0, k1<7, k1++){
    tab2=mis_a_jour(tab1,couleur=couleurs[k2]);
    compte2=compte1+nombre_position_ajouté;
    for (k1=0, k1<7, k1++){
      tab3=mis_a_jour(tab2,couleur=couleurs[k3]);
      compte3=compte2+nombre_position_ajouté;
      for (k1=0, k1<7, k1++){
        tab4=mis_a_jour(tab3,couleur=couleurs[k4]);
        compte4=compte3+nombre_position_ajouté;
        if(compte4>best_max){
          best_max=compte4;
          pos_best_max=k1;
        }
      }
    }
  }
}

//avec mis_a_jour(tab,couleur) un script qui execute le programme change_color à partir de la tab avec la couleur indiqué
