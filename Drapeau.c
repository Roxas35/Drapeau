//Exercice C pour Projet de la vie courante
//Poste de contrôle de la plage qui contrôle l'état de la mer et qui hisse le drapeau en fonction du temps et l'état de la mer

//On inclue les différentes bibliothèques utilisés
#include <stdio.h>
#include <string.h>


//On créé la focntion principale
int main(void)
{

//On crée une variable char (caractère) qui alloue 5 de mémoire (des bytes)
    char a[5];


//On crée un tableau en 2D qui comporte 3 ligne et 3 colonnes.
//* sert à savoir quand le caractère devient Null.
    char *categorie[3][3] = 
    {
        {"Hisser le Drapeau vert ! Tout va bien pour les vacanciers.", "Plate", "Calme"},
        {"Hisser le Drapeau Orange ! Faite attention aux vacanciers.", "Agité", "Mauvais"},
        {"Hisser le Drapeau Rouge ! Personne de va se baigner !", "Dangeureuse", "Orage"}
    };


//On affiche le message si dessous grâce à la commande printf
///Scanf sert à assigner à une variable qui est (a) la valeur entré au clavier
    printf("Ici le poste de contrôle de la plage, comment est la mer ce matin pour les vacanciers (Plate, Agité, Dangeureuse, Calme, Mauvais ou Orage) ?\n");
    scanf("%s", a);


//On créé un boucle for qui va comparer les 2 derniers termes des trois lignes du tableau.
//A la variable a.
    for (int i = 0; i < 3; i++)
    {

//On créé un condition if qui va nou permettre de compararer grâce à strcmp les deux derniers termes de chaque ligne du tableau.
//strcmp est utliser grâce à la bibliothèque <string.h>
//Ne mettez pas d'autres mots que ceux du tableau sinon gare aux vacanciers !
        if (strcmp(a, categorie[i][1]) == 0 || strcmp(a, categorie[i][2]) == 0)
        {
            
//On affiche la valeur dans le terminal
            printf("%s\n", categorie[i][0]);


//On mets fin au programme principal
            return 0;
        }

    }
//On affiche le message si on entre pas les bons mots.
    printf("Vous mettez la vie des vacanciers en jeu !\n");
}
