# Exercice Python pour Projet de la vie courante
# Poste de contrôle de la plage qui voit l'état de la mer et qui hisse le drapeau en fonction du temps et l'état de la mer

# On importe la fonction exit
import sys

# On créé un tableau 2D qui s'appelle categorie et qui comporte 3 lignes et 3 colonnes
categorie = [
    ["Hisser le Drapeau vert ! Tout va bien pour les vacanciers.", "Plate", "Calme"],
    ["Hisser le Drapeau Orange ! Faite attention aux vacanciers.", "Agité", "Forte"],
    ["Hisser le Drapeau Rouge ! Personne ne va se baigner !", "Dangeureuse", "Orage"]
]

# On affiche le message suivant et on assigne a (a) la réponse entré dans le terminal grâce à la fonction input.
a = input("Ici le poste de contrôle de la plage, comment est la mer ce matin pour les vacanciers (Plate, Agité, Dangeureuse, Calme, Forte ou Orage) ?\n")

# On créé une boucle for qui va initialiser 3 fois en partant de 0
for i in range(3):

    # On créé un condition if qui va nous permettre de compararer si la variable a est égal aux deux derniers termes de chaque ligne i qu'on compare.
    if a == categorie[i][1] or a == categorie[i][2]:

        # On affiche le premier terme de la ligne 0 du tableau.
        print(categorie[i][0])

        # On sort du programme principal
        sys.exit(0)

# On affiche ce message si on écrit pas l'un des mots dans les 2 dernières termes dans chaque ligne du tableau.
print("Vous mettez la vie des vacanciers en jeu !\n")

