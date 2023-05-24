import random

nombre_a_deviner = random.randint(1, 100)
tentatives = 0

print("Bienvenue dans le jeu de devinette !")

while True:
    nombre_devine = int(input("Devinez le nombre (entre 1 et 100) : "))
    tentatives += 1

    if nombre_devine < nombre_a_deviner:
        print("C'est plus petit !")
    elif nombre_devine > nombre_a_deviner:
        print("C'est plus grand !")
    else:
        print("Félicitations ! Vous avez trouvé le nombre en", tentatives, "tentatives.")
        break
