/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numViaggiatori;
    char nomi[5][50];
    float distanze[5][3];
    int difficolta[5];
    char bonus[5];
    float punteggio[5];
    float mediaDistanze;
    float punteggioMax = 0;
    int vincitore;
    

    printf("inserisci il numero di viaggiatori(tra 1 e 5)\n");
    scanf("%d", &numViaggiatori);
    if(numViaggiatori<1 || numViaggiatori >5)
    {
        printf("errore: il numero di viaggiatori deve essere compreso tra 1 e 5");
        return 1;
    }
    
    
    for(int i = 0; i < numViaggiatori; i++)
    {
        printf("viaggiatore numero %d\n", i+1);
        printf("inserisci il nome\n");
        scanf("%s", nomi[i]);
        
        printf("distanze delle tre tappe (km): ");
        for (int j = 0; j < 3; j++) {
            scanf("%f", &distanze[i][j]);
        }
        
        printf("livello di difficolta (1-10): ");
        scanf("%d", &difficolta[i]);
        
        printf("ha trovato un bonus (s/n)? \n");
        scanf(" %c", &bonus[i]);
    }
    
    for(int i = 0; i<numViaggiatori; i++)
    {
        mediaDistanze = (distanze[i][0] + distanze[i][1] + distanze[i][2]) / 3;
        
        punteggio[i] = mediaDistanze * difficolta[i];
        if(bonus[i] == 's' || bonus[i] == 'S')
        {
            punteggio[i] += 50;
        }
    }
    
    for(int i = 0; i<numViaggiatori; i++)
    {
        printf("nome: %s, punteggio: %.2f ", nomi[i], punteggio[i]);
        
        if (punteggio[i] > 400)
        {
            printf("titolo: Esploratore Leggendario\n");
        }else if (punteggio[i] >= 250)
        {
            printf("titolo: Viaggiatore Esperto\n");
        }else if (punteggio[i] >= 100)
        {
            printf("titolo: Avventuriero\n");
        }else
        {
            printf("titolo: Principiante\n");
        }
    }
    
    for(int i = 0; i<numViaggiatori; i++)
    {
        if(punteggio[i] > punteggioMax)
        {
            punteggioMax = punteggio[i];
            vincitore = i;
        }
    }
    printf("vincitore: %s, punti: %.2f", nomi[vincitore], punteggioMax);
    
    return 0;
}