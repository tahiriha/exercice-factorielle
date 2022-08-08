#include <stdio.h>
#include <stdlib.h>
void factorielle ( int N ){
       int F = 1,i;
 for (i=1 ; i <N+1 ; i ++ ){
        F= F *i ;
}
printf("le factorielle de   %d , %d", N, F );
}




int main()
{

   float N , i , F;


    printf("veuillez saisir um nombre pour calculer son factorielle \n");
    scanf( "%f",&N);
    F = 1 ;
     for (i=1 ; i <N+1 ; i ++ ){
         F =  F *i ;
     }

printf(" le factorielle du %f est %f ",N,F);

factorielle (N);





    return 0;
}
