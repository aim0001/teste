#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// SECTION 1 =============================================================================================
int sommevoy(char chaine[]){
    int i,n=0;
    printf("Entrez le mot: ");
    scanf("%s",chaine);
    for(i=0;i<strlen(chaine);i++){
        if(chaine[i]=='a'||chaine[i]=='e'||chaine[i]=='i'||chaine[i]=='o'||chaine[i]=='u'|chaine[i]=='y'){
            n++;
        }
    }
    printf("le nombre de voyelle du mot est %d",n);
}
// SECTION 2 ===============================================================================================

