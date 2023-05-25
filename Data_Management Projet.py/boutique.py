from ordinateur import Ordinateur

def ajouter_ordinateur():
    nouvel_ordinateur = Ordinateur()
    nouvel_ordinateur.marque = input("Marque de l'ordinateur : ")
    nouvel_ordinateur.stock = int(input("Stock de l'ordinateur : "))

    # Logique pour ajouter l'ordinateur à la boutique
    print("L'ordinateur a été ajouté avec succès.")

def consulter_details():
    # Logique pour consulter les détails d'un ordinateur
    ordinateur_id = int(input("ID de l'ordinateur : "))
    # Logique pour récupérer les détails de l'ordinateur correspondant à l'ID donné
    print("Détails de l'ordinateur")

def mettre_a_jour_stock():
    # Logique pour mettre à jour le stock d'un ordinateur
    ordinateur_id = int(input("ID de l'ordinateur : "))
    nouveau_stock = int(input("Nouveau stock : "))
    # Logique pour mettre à jour le stock de l'ordinateur correspondant à l'ID donné
    print("Stock mis à jour avec succès.")

def modifier_donnees():
    # Logique pour modifier les données d'un ordinateur
    ordinateur_id = int(input("ID de l'ordinateur : "))
    nouvelle_marque = input("Nouvelle marque : ")
    nouveau_stock = int(input("Nouveau stock : "))
    # Logique pour modifier les données de l'ordinateur correspondant à l'ID donné
    print("Données modifiées avec succès.")
