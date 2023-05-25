from boutique import ajouter_ordinateur, consulter_details, mettre_a_jour_stock, modifier_donnees
from tresors import afficher_tresors

def main():
    while True:
        afficher_menu()
        choix = int(input("Entrez votre choix : "))

        if choix == 1:
            ajouter_ordinateur()
        elif choix == 2:
            consulter_details()
        elif choix == 3:
            mettre_a_jour_stock()
        elif choix == 4:
            modifier_donnees()
        elif choix == 5:
            afficher_tresors()
        elif choix == 6:
            print("Au revoir !")
            break
        else:
            print("Choix invalide. Veuillez réessayer.")

def afficher_menu():
    print("===== Menu =====")
    print("1. Ajouter un nouvel ordinateur")
    print("2. Consulter les détails d'un ordinateur")
    print("3. Mettre à jour le stock d'un ordinateur")
    print("4. Modifier les données d'un ordinateur")
    print("5. Afficher les trésors")
    print("6. Quitter")

if __name__ == "__main__":
    main()
