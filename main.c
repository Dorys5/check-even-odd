#include <stdio.h>
 
int main()
{
   int nbr;
   
   printf("Entrez un entier\n");
   scanf("%d", &nbr);
 
   nbr % 2 == 0 ? printf("Paire\n") : printf("Impaire\n");
     
   return 0;
}