 #include <stdio.h>
 float SOMME(float a,float b){
     float s=0;
     s= a + b;
     return s;
     
 }
 float MOYENNE(float a,float b){
     float moy=0;
     if(b!=0){
         moy=(a+b)/2;
     }else{
         printf("Impossibe de diviser par 0");
     }
     return moy;
 }
 float MULTIPLICATION(float a,float b){
     float m=0;
          m=a*b;
      
        
     return m;
 }
int main() {
  float A,B;
  printf("Donner deux valeurs :");
  scanf("%f %f",&A,&B);
  printf("La somme est :%.2f\n",SOMME(A,B));
    printf("La moyenne est :%.2f\n",MOYENNE(A,B));
    printf("La multiplication est :%.2f\n",MULTIPLICATION(A,B));

    

    return 0;
}
