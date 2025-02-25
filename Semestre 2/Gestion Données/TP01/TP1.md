# TP01

## Exercice 1, 2

**Entités :**
- Véhicule
  - ID
  - idCategorie
  - Marque
  - Modèle
  - Année
  - Couleur
- Client
  - ID
  - Nom
  - Prenom
  - Adresse
  - Telephone
- Contrat de location
  - ID
  - idClient
  - idVehicule
  - Durée
  - Tarif
  - Caution
  - Kilométrage max
  - Assurance
- Facture
  - ID
  - idClient
  - idContratDeLocation
- Fournisseur
  - ID
  - Nom
  - Adresse
  - Contact
- Entretien
  - ID
  - Date
  - Type d’intervention
  - Coût
  - Garage
  - Intervenant
- Catégorie
  - ID
  - Type

## Exercice 3

**Contrat de location :** Client, Vehicule
**Contrat de vente :** Client, Vehicule
**Entretien :** Garage, Vehicule
**Vehicule :** Categorie, Fournisseur
**Facture :** Contrat de location, Contrat de vente


