#include <stdio.h>

int len = 0;
int Code[100];
int Quantite[100];

int Search(int c)
{
    for (int i = 0; i < len; i++)
    {
        if (Code[i] == c)
        {
            return i;
        }
    }
    return -1;
}

void Add(int c, int q)
{
    int pos = Search(c);
    if (pos == -1)
    {
        Code[len] = c;
        Quantite[len] = q;
        len++;
        printf("Le produit ajouter avec succes!\n");
    }
    else
    {
        Quantite[pos] += q;
        printf("La quantitie ajouter avec succes!\n");
    }
}

void Delete(int c, int q)
{
    int pos = Search(c);
    if (pos == -1)
    {
        printf("Le produit ne se trouve pas dans ce stock!\n");
    }
    else
    {
        if (q > Quantite[pos])
        {
            printf("La quantite n'est pas exist!\n");
        }
        else
        {
            Quantite[pos] -= q;
            printf("La quantitie supprimer avec succes\n");
        }
    }
}

void Display()
{
    for (int i = 0; i < len; i++)
    {
        printf("CODE: %d | QUANTITE: %d\n", Code[i], Quantite[i]);
    }
}

int main()
{
    int c, q, choix;
    printf("***************************************\n");
    printf("*--------------- Menu ----------------*\n");
    printf("*------------ 1:Ajouter --------------*\n");
    printf("*------------ 2:Supprimer ------------*\n");
    printf("*------------ 3:Afficher -------------*\n");
    printf("*------------ 4:Quitter --------------*\n");
    printf("***************************************\n");
    do
    {
        printf("Choisir:");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            printf("Code: ");
            scanf("%d", &c);
            printf("Quantite: ");
            scanf("%d", &q);
            Add(c, q);
            break;
        case 2:
            printf("Code: ");
            scanf("%d", &c);
            printf("Quantite: ");
            scanf("%d", &q);
            Delete(c, q);
            break;
        case 3:
            Display();
            break;
        default:
            printf("invalide choix!!!\n");
            break;
        }
    } while (choix != 4);
    return 0;
}