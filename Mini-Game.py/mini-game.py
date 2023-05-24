# Déclaration des variables
choixJoueur = 0
caracteristiques = [10, 8, 5, 3, 12]
nom = ""
score = 0.0
tresorsTrouves = 0

# Affichage des données
print("Bienvenue dans le mini-jeu textuel !")

# Demande d'informations au joueur
nom = input("Veuillez entrer votre nom : ")

# Boucle principale du jeu
while tresorsTrouves < 3:
    # Affichage des options disponibles
    print("\nQue voulez-vous faire ?")
    print("1. Explorer l'environnement")
    print("2. Consulter les caractéristiques")
    print("3. Quitter le jeu")

    # Demande au joueur de faire un choix
    choixJoueur = int(input("Entrez votre choix : "))

    # Utilisation des conditions pour modifier l'état du jeu
    if choixJoueur == 1:
        # Boucle pour chercher des trésors
        for i in range(5):
            print("Vous cherchez un trésor...")
            # Simulation de la recherche d'un trésor
            # ...
            # Si un trésor est trouvé
            tresorsTrouves += 1
            print("Félicitations, vous avez trouvé un trésor !")
    elif choixJoueur == 2:
        # Affichage des caractéristiques
        print("Vos caractéristiques :")
        for i in range(5):
            print("Caractéristique", i + 1, ":", caractéristiques[i])
    elif choixJoueur == 3:
        # Quitter le jeu
        print("Merci d'avoir joué !")
        break
    else:
        # Choix invalide
        print("Choix invalide. Veuillez réessayer.")
