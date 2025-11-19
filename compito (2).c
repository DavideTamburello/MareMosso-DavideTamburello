/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int studenti, numVoti;
    float voto, media;
    char risposta;
    
    do
    {
    printf("quanti studenti ci sono?");
    scanf("%d", &studenti);
    }while(studenti <= 0);
    
    for(int i = 0; i<studenti; i++)
    {
        printf("inserisci un voto");
        scanf("%f", &voto);
        media = 0;
        numVoti = 1;
        media += voto;
        
        do
        {
            printf("vuoi inserire un altro voto? s/n");
            scanf(" %c", &risposta);
            if(risposta == 's')
            {
                numVoti++;
                printf("inserisci il voto");
                scanf("%f", &voto);
                media += voto;
            }
        }while(risposta == 's');
        
        media = media/numVoti;
        printf("la media è: %.2f \n", media);
        if(media < 6)
        {
            printf(" il successo dipende dalla preparazione precedente, e senza una tale preparazione c'è sicuramente fallimento.\n");
        }
    }
    return 0;
}