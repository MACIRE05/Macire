class Ordinateur:
    def __init__(self, marque, stock, prix):
        self.marque = marque
        self.stock = stock
        self.prix = prix

ordinateurs = []

def ajouterOrdinateur():
    marque = input("Marque de l'ordinateur : ")
    stock = int(input("Stock de l'ordinateur : "))
    prix = float(input("Prix de l'ordinateur : "))

    ordinateur = Ordinateur(marque, stock, prix)
    ordinateurs.append(ordinateur)
    print("L'ordinateur a été ajouté avec succès.")

def consulterDetails():
    if len(ordinateurs) == 0:
        print("Aucun ordinateur disponible.")
        return

    marque = input("Marque de l'ordinateur : ")

    found = False
    for ordinateur in ordinateurs:
        if ordinateur.marque == marque:
            print("Détails de l'ordinateur :")
            print("Marque :", ordinateur.marque)
            print("Stock :", ordinateur.stock)
            print("Prix :", ordinateur.prix)
            found = True
            break

    if not found:
        print("Aucun ordinateur trouvé avec cette marque.")

def mettreAJourStocks():
    if len(ordinateurs) == 0:
        print("Aucun ordinateur disponible.")
        return

    marque = input("Marque de l'ordinateur : ")
    stock = int(input("Nouveau stock : "))

    found = False
    for ordinateur in ordinateurs:
        if ordinateur.marque == marque:
            ordinateur.stock = stock
            print("Stock mis à jour avec succès.")
            found = True
            break

    if not found:
        print("Aucun ordinateur trouvé avec cette marque.")

while True:
    print("1. Ajouter un nouvel ordinateur")
    print("2. Consulter les détails d'un ordinateur")
    print("3. Mettre à jour les stocks")
    print("4. Quitter")
    choix = int(input("Choix : "))

    if choix == 1:
        ajouterOrdinateur()
    elif choix == 2:
        consulterDetails()
    elif choix == 3:
        mettreAJourStocks()
    elif choix == 4:
        break
    else:
        print("Choix invalide")

