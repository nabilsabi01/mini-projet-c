# Gestion des Scopes en C

Ce programme en langage C, nommé "Gestion des Scopes", vise à simuler la gestion d'entrepôt, permettant aux utilisateurs d'ajouter et de supprimer des produits du stock tout en utilisant correctement les scopes de variable pour une gestion optimale de leur durée de vie.

## Fonctionnalités

1. **Ajouter un Produit au Stock :**
   - Les utilisateurs saisissent le code du produit et la quantité à ajouter.
   - Si le produit n'existe pas, il est ajouté au stock avec la quantité spécifiée.
   - Si le produit existe déjà, la quantité spécifiée est ajoutée à la quantité existante.

2. **Retirer un Produit du Stock :**
   - Les utilisateurs saisissent le code du produit et la quantité à retirer.
   - Si le produit n'existe pas, un message d'erreur est affiché.
   - Si la quantité à retirer dépasse la quantité en stock, un message d'erreur approprié est affiché.
   - Sinon, la quantité spécifiée est retirée du stock.

3. **Afficher le Stock Total :**
   - Le programme affiche la liste de tous les produits et de leurs quantités respectives.

## Utilisation

Le programme continue de s'exécuter tant que l'utilisateur le souhaite, permettant une gestion continue du stock.

### Commandes :

- `ajouterProduit` : Ajoute un produit au stock avec la quantité spécifiée.
- `retirerProduit` : Retire un produit du stock avec la quantité spécifiée.
- `afficherStock` : Affiche la liste de tous les produits et de leurs quantités.

## Installation

Assurez-vous d'avoir un compilateur C installé sur votre système. Clonez le dépôt et accédez au répertoire du projet.

```bash
$ git clone https://github.com/nabilsabi01/Mini-Projet-C.git
$ cd Mini-Projet-C
$ gcc gestion-des-scopes.c -o gestion_scopes
$ ./gestion_scopes
