 #include <stdio.h>

 void MENU(float A,float B){
         int choix;
         int flag;
         do{
             printf("\t\t\tMenu:\n");
         printf("1-La somme:\n");
         printf("2-La moyenne:\n");
        printf("3-La multiplication:\n");
        printf("4-Exit.\n");
        printf("Entrer votre choix :[1-4]:\n");
        scanf("%d",&choix);
        switch(choix){
            case 1:  printf("La somme est :%.2f\n",SOMME(A,B));
            break;
            case 2:  printf("La moyenne est :%.2f\n",MOYENNE(A,B));
            break;
            case 3:printf("La multiplication est :%.2f\n",MULTIPLICATION(A,B));
            break;
            case 4: printf("Programme termine!\n");
            flag=0;
            break;
        }

             
         }while(flag);
    
       }
int main() {
  float A,B;
  printf("Donner deux valeurs :\n");
  scanf("%f %f",&A,&B);
 
     
    
      MENU(A,B);
    return 0;
}
