from etudiant import Etudiant

# Création des étudiants
etudiant1 = Etudiant("berete", "koryka", 62345, 25)
etudiant2 = Etudiant("Mame", "camara", 12345, 17)
etudiant3 = Etudiant("karim", "diallo", 54321, 22)

# Ajout des étudiants à la liste
liste_etudiants = [etudiant1, etudiant2, etudiant3]

# Parcourir la liste des étudiants et afficher leurs informations
for etudiant in liste_etudiants:
    print("Nom :", etudiant.getNom())
    print("Prénom :", etudiant.getPrenom())
    print("Est plus âgé(e) que 18 ans :", etudiant.estPlusAgeQue(18))
    print("--------------------")

