 #include <stdio.h>

// 1-FAIRE UN FICHIER POUR DEFINIR LES FONCTIONS  : calcul.c (contient tous les fonctions);

//2 UN FICHIER entete qui contient les prototypes des fonctions : calcul.h
float SOMME(float a,float b);
float MOYENNE(float a,float b);
float MULTIPLICATION(float a,float b);

//3 - un fichier main.c qui contient l'implementation gloable du programme :
D'abord on inclure fichier <calcul.h> et ensuite ,
int main() {
  float A,B;
  printf("Donner deux valeurs :");
  scanf("%f %f",&A,&B);
  printf("La somme est :%.2f\n",SOMME(A,B));
  printf("La moyenne est :%.2f\n",MOYENNE(A,B));
  printf("La multiplication est :%.2f\n",MULTIPLICATION(A,B));

    

    return 0;
}

  

 
