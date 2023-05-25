class Ordinateur:
    def __init__(self, nom, prix, stock):
        self.nom = nom
        self.prix = prix
        self.stock = stock

    def afficher_details(self):
        print(f"Nom: {self.nom}")
        print(f"Prix: {self.prix}")
        print(f"Stock: {self.stock}")

    def mettre_a_jour_stock(self, quantite):
        self.stock += quantite


def ajouter_ordinateur():
    print("Ajouter un nouvel ordinateur")
    nom = input("Nom de l'ordinateur : ")
    prix = float(input("Prix de l'ordinateur : "))
    stock = int(input("Stock initial : "))

    ordinateur = Ordinateur(nom, prix, stock)
    return ordinateur


def consulter_details(ordinateurs):
    print("Consulter les détails d'un ordinateur")
    nom = input("Nom de l'ordinateur : ")

    for ordinateur in ordinateurs:
        if ordinateur.nom == nom:
            ordinateur.afficher_details()
            break
    else:
        print("L'ordinateur n'a pas été trouvé.")


def modifier_stock(ordinateurs):
    print("Modifier le stock d'un ordinateur")
    nom = input("Nom de l'ordinateur : ")

    for ordinateur in ordinateurs:
        if ordinateur.nom == nom:
            quantite = int(input("Quantité à ajouter (positive) ou retirer (négative) : "))
            ordinateur.mettre_a_jour_stock(quantite)
            break
    else:
        print("L'ordinateur n'a pas été trouvé.")


def afficher_menu():
    print("---- Menu ----")
    print("1. Ajouter un nouvel ordinateur")
    print("2. Consulter les détails d'un ordinateur")
    print("3. Modifier le stock d'un ordinateur")
    print("4. Quitter")
    print("Votre choix : ")


def main():
    ordinateurs = []

    while True:
        afficher_menu()
        choix = input()

        if choix == "1":
            ordinateur = ajouter_ordinateur()
            ordinateurs.append(ordinateur)
        elif choix == "2":
            consulter_details(ordinateurs)
        elif choix == "3":
            modifier_stock(ordinateurs)
        elif choix == "4":
            print("Au revoir !")
            break
        else:
            print("Choix invalide. Veuillez réessayer.")


if __name__ == "__main__":
    main()
