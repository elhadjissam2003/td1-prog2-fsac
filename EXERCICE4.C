 #include <stdio.h>
void ECRIRE_TAB(int N,int tab[]){
     for(int i=0;i<N;i++){
        printf("tab[%d]=%d /",i,*(tab+i));
    }
}
long SOMME_TAB(int N,int tab[]){
    long s=0;
    for(int i=0;i<N;i++){
        s+= *(tab+i);
    }
    return s;
 }
 int main() {
  int tab[10]={1,2,3,4,5};
 ECRIRE_TAB(10,tab);
 printf("La somme est :%d",SOMME_TAB(10,tab));
     
    
     return 0;
}
