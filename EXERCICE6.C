 #include <stdio.h>
void INVERSE(int N,int tab[]){
    int *P1=tab;
    int *P2=tab+N-1;
    while(P1<P2){
        int temp=*P1;
        *P1=*P2;
        *P2=temp;
        P1++;
        P2--;
    }
    
     
}

 int main() {
  int tab[10]={1,2,3,4,5,5,3,2,4,12};
     printf("Avant inverse\n");

   for(int i=0;i<10;i++){
        printf("tab[%d]=%d /",i,*(tab+i));
    }
    printf("\nApres inverse\n");
   INVERSE(10,tab);
   for(int i=0;i<10;i++){
        printf("tab[%d]=%d /",i,*(tab+i));
    }
     
    
     return 0;
}
