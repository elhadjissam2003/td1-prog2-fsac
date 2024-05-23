 #include <stdio.h>
int occur(int N,int tab[],int x){
    int *P1=tab;
    int *P2=tab;
    
    while(P1<tab+N){
         if(*P1!=x){
             *P2=*P1;
             P2++;
         }
        
        P1++;
    }
    N=P2-tab;
    return N;
     
}

 int main() {
  int tab[10]={1,2,3,4,5,5,3,2,4,12};
 
 int tailleNew=occur(10,tab,5);
  for(int i=0;i<tailleNew;i++){
        printf("tab[%d]=%d /",i,*(tab+i));
    }
     
    
     return 0;
}
