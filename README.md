# Gestion des Scopes en C

Ce programme en langage C, nommé "Gestion des Scopes", permettant aux utilisateurs d'ajouter et de supprimer des produits du stock tout en utilisant correctement les scopes de variable pour une gestion optimale de leur durée de vie.

## Fonctionnalités

1. **Ajouter un Produit :**
   - Saisissez le code et la quantité.
   - Ajoutez un nouveau produit ou mettez à jour la quantité existante.

2. **Retirer un Produit :**
   - Saisissez le code et la quantité à retirer.
   - Gérez les erreurs si le produit n'existe pas ou si la quantité est insuffisante.

3. **Afficher le Stock :**
   - Visualisez la liste des produits et leurs quantités.

## Utilisation

Le programme continue à s'exécuter. Suivez ces étapes :

```bash
$ git clone https://github.com/nabilsabi01/Mini-Projet-C.git
$ cd Mini-Projet-C
$ gcc gestion-des-scopes.c -o gestion_scopes
$ ./gestion_scopes
