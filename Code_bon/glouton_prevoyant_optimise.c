int actual_tab[taille][taille], tab1[taille][taille], tab2[taille][taille], tab3[taille][taille], tab4[taille][taille];
int acutal_compte, compte1, compte2, compte3, compte4;
int actual_pos,pos1, pos2, pos3;
int best_max=0, pos_best_max=0;
int k1, k2, k3, k4;
char couleurs[7];
couleurs[0]='A'; couleurs[1]='B'; couleurs[2]='C'; couleurs[3]='D'; couleurs[4]='E'; couleurs[5]='F'; couleurs[6]='G';

acutal_tab=tableau actuel;
actual_compte=nombre_de position_posseder_par_le_joueur;
actual_pos=position_du_joueur_dans_le_tableau;

for (k1=0, k1<7, k1++){
  tab1=mis_a_jour(actual_tab,actual_pos,couleur=couleurs[k1]);
  compte1=compte1+nombre_position_ajouté;
  pos1=actual_pos+coordonée_position_ajoutée;
  for (k1=0, k1<7, k1++){
    tab2=mis_a_jour(tab1,pos1,couleur=couleurs[k2]);
    compte2=compte1+nombre_position_ajouté;
    pos2=pos1+coordonée_position_ajoutée;
    for (k1=0, k1<7, k1++){
      tab3=mis_a_jour(tab2,pos2,couleur=couleurs[k3]);
      compte3=compte2+nombre_position_ajouté;
      pos3=pos2+coordonée_position_ajoutée;
      for (k1=0, k1<7, k1++){
        tab4=mis_a_jour(tab3,pos3,couleur=couleurs[k4]);
        compte4=compte3+nombre_position_ajouté;
        if(compte4>best_max){
          best_max=compte4;
          pos_best_max=k1;
        }
      }
    }
  }
}

//avec mis_a_jour(tab,pos,couleur) un script qui execute le programme change_color à partir de la tab avec la couleur indiqué et les positions possédées par le joueur.
//complexité en 7^4 (7^n si on est prévoyant à n coup)
// il faudrait implémenter une condition d'arrêt qui serait si le joueur ne peut pas obtenir davantage de territoire il s'arrête de chercher et alors il prendrait le chemin le plus rapide pour obtenir tous les territoire à disposition. Cette condition d'arrêt serait nécessaire pour 
//
