class Boutique:
    def __init__(self):
        self.ordinateur = Ordinateur()
        self.tresor = Tresor()

    def afficher_menu(self):
        print("===== Menu =====")
        print("1. Ajouter un nouvel ordinateur")
        print("2. Consulter les détails d'un ordinateur")
        print("3. Mettre à jour le stock d'un ordinateur")
        print("4. Modifier les données d'un ordinateur")
        print("5. Afficher les trésors")
        print("6. Quitter")

    def main(self):
        while True:
            self.afficher_menu()
            choix = int(input("Entrez votre choix : "))

            if choix == 1:
                self.ordinateur.ajouter()
            elif choix == 2:
                self.ordinateur.consulter_details()
            elif choix == 3:
                self.ordinateur.mettre_a_jour_stock()
            elif choix == 4:
                self.ordinateur.modifier_donnees()
            elif choix == 5:
                self.tresor.afficher_tresors()
            elif choix == 6:
                print("Au revoir !")
                break
            else:
                print("Choix invalide. Veuillez réessayer.")


class Ordinateur:
    def ajouter(self):
        # Implémenter la logique d'ajout d'un nouvel ordinateur
        print("Ajouter un nouvel ordinateur")

    def consulter_details(self):
        # Implémenter la logique de consultation des détails d'un ordinateur
        print("Consulter les détails d'un ordinateur")

    def mettre_a_jour_stock(self):
        # Implémenter la logique de mise à jour du stock d'un ordinateur
        print("Mettre à jour le stock d'un ordinateur")

    def modifier_donnees(self):
        # Implémenter la logique de modification des données d'un ordinateur
        print("Modifier les données d'un ordinateur")


class Tresor:
    def afficher_tresors(self):
        # Implémenter la logique d'affichage des trésors
        print("Afficher les trésors")


if __name__ == "__main__":
    boutique = Boutique()
    boutique.main()
