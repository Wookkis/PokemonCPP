# **TP Final C++ : Pokemon**

## **Groupe :**

`TROUVÉ Denis`

## **Enoncé :**

Date limite de rendu : 16/03/2020 - 23h59/ rendu sur github

#### Consigne :

- Réalisez une application de combats pokémon en ligne de commande.

- L'utilisateur devra naviguer via un menu, qui lui permettra soit d'afficher sa liste de pokemons, soit de sélectionner son équipe de 6 max, soit de chercher un combat.

- Si il affiche sa liste, il devra voir tous les pokémons qu'il a capturé.

- Si il veut modifier son équipe il devra pouvoir sélectionner un pokemon de son équipe à remplacer, puis un de sa liste pour l'échange.

- Si il veut chercher un combat, un combat aléatoire va démarrer.

#### Gestion du combat:

En combat, le joueur ne peut qu'utiliser les attaques de son pokemon actif, l'échanger contre un autre de ses pokemons ou utiliser une pokéball pour capturer le pokemon adverse (qui sera ajouté soit à son équipe si elle n'est pas pleine, soit à sa liste).

Les pokemons doivent avoir un nombre de pv, si il atteint 0 ils sont KO et inutilisables jusqu'à la fin du combat.

Les pokemons ont une liste d'attaques spécifiques.

#### Bonus:

- Rajoute une option de séléction de starter au lancement du jeu.
- Rajouter l'option "soigner ses pokemon" au menu, qui soigne les pokemons de l'équipe (plutôt qu'un soin auto en fin de combat)
- Rajouter des sensibilités de types au pokémon (dégats doublés/réduits etc)
- Rajouter des conditions de facilitation à la capture (en fonction des dégâts subits)
- Rajouter une notion d'XP des pokemons. (en indexant leurs statistiques à leur niveau par exemple).
- Dissocier les attaques des pokémons en en faisant des entitées uniques.

**Pistes de réflexion :**
- Les pokémons sont une grande famille, ils partagent des attributs similaires mais ont tous des spécificités.
- Le pokémon qui combat est le même pokémon qui est dans l'équipe, pas une copie.
- Le pokémon adversaire aussi.

**Notes :** J'ai volontairement laissé du champ libre dans l'organisation des menus et de l'architecture de votre code, il y a plusieurs façons de réussir ce TP vous pouvez choisir celle qui vous convient le mieux.
(par exemple je n'ai pas spécifié si le joueur commençait avec un pokemon, ou si il devait absolument capturer le premier rencontré, je vous laisse ce genre de choix aussi).