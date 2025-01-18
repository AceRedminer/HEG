# CCNA

## Chapitre 1

### Architecture client-serveur
Client -> Internet -> Serveur

### Architecture peer-to-peer
Imprimante -> Client -> Client

**Avantages :**
- Facile à configurer
- Moins complexe
- Réduction des couts
- Utilisé pour des taches simple : *partage de fichier et partage d'imprimantes*

**Incovenients :**
- Pas d'administration centralisée
- Peu sécurisé
- Non évolutif
- Performances plus lentes

### Périphériques intermédiaires
- Wireless router
- LAN switch
- Router
- Multilayer switch
- Firewall

### Périphériques finaux
- Ordinateur fixe
- Ordinateur portable
- Imprimante
- Téléphone IP
- Tablette
- TelePresence

Un périphérique final **génére** les données, un périphérique intérmediaires **gère** les données

### Supports réseau
- **Cuivre :** impulsions électriques
- **Fibre de verre :** impulsions lumineuse
- **Transmission sans fil :** modulation de fréquence d'onde éléctromagnetiques

### Topologies :
**Logique :** dispositif, ports et système d'addressage
**Physique :** emplacement physique des dispositif et l'installation des cables
**Types de topologies physiques :**
- En étoile
- En étoile étendue
- En bus
- En anneau


### Types de réseaux
**LAN :** interconnecter les périphériques terminaux dans une zone limitée, administré par une seule entité, bande passante haut débit aux appareils internes
**WAN :** interconnecter les réseaux locaux sur des vastes zones géographique, géré par un ou plusieurs fournisseur de services, ils fournissent des liasion a vitesse plus lente entre les réseaux locaux
**Internet :** interconnecter des WAN a travers le monde
  **Connexion a internet :**
  - Cable : large bande passante, toujours en service, offert par les founisseurs de service
  - DSL : haut débit, toujours active, passe par une ligne téléphonique
  - Cellulaire : utlise un réseau de téléphonie mobile
  - Satellite : pour les zones rurales sans fournisseurs de services
  - Ligne commutée : peu couteuse, faible bande passante, utilise un modem
**Extranet :** interconnecter l'entreprise aux fournisseurs et clients par exemple
**Intranet :** pour l'utlisation on premise de l'entreprise
**Réseaux convergents :**
**Caractéristiques :**
- **Unification des services :** Utilisation d'un seul réseau pour la voix, la vidéo et les données.
- **Protocole IP :** Tout passe par Internet Protocol (IP), ce qui simplifie l'interconnexion.
- **Gestion centralisée :** Une seule infrastructure à gérer, réduisant les coûts et la complexité.

**Exemples de connexion :**
- **Voix sur IP (VoIP) :** Appels téléphoniques via le réseau IP.
- **Vidéo en streaming :** Diffusion de vidéos sur le même réseau que les données.
- **Données :** Transfert de fichiers, accès internet, etc.

**Avantages :**
- Simplification de l'infrastructure.
- Réduction des coûts.
- Flexibilité pour ajouter de nouveaux services.

**Inconvénients :**
- Dépendance à une seule infrastructure.
- Besoin d'une bonne gestion de la qualité de service (QoS).

### Réseaux fiables
- **Tolerence aux pannes :** les connexions redondantes permettent des chemis alternatif lorsqu'un périphérique ou une liaison tombe
- **Quality of Service :** géré par le routeur, s'assure que la priorité correspond aux types de communication ainsi qu'au priorité spécifique de l'entreprise
- **Evolutivité :** des utlisateurs supplémentaire ainsi que des réseaux entier peuvent etre connecté a internet sans que cela n'affecte les performances
- **Securité :** confidentialité, intégrité, disponibilité, l'administrateur peut proteger le réseau, avec des logiciels et des sécurités matérielles, pour éviter tout accès non autorisé aux périphériques du réseau

## Chapitre 2

### Système d'exploitation
**GUI, Graphic User Interface :** utilise une interface graphique
**CLI, Command Line Interface :** utilise des commandes pour intéragir avec la machine

**Méthodes d'accès :**
- Console
- Telnet
- SSH

### Programme d'émulation de terminal
Utilisé pour se connecter à un périphérique via le port console, telnet ou SSH

### Navigation IOS :
**Mode d'exécution utilisateur :** nombre limité de commandes de surveillance de base, >
**Mode d'exécution privilégié :** accès a toutes les commandes et fonctionnalités, #
**Mode de configuration gloable :** pour accéder aux options de configuration
**Mode de configuration de ligne :** pour configurer l'accès par la console, SSH, telnet ou l'accès AUX
**Mode de configuration d'interface :** pour configurer un port de commutateur ou une interface de routeur

## Chapitre 3

### Modèle OSI
- Application : données, 
- Présentation : données
- Session : données
- Transport : segments
- Réseau : paquets
- Liaison : trames
- Physique : bits

### Modèle TCP/IP
- Application : données, HTTP, DNS, FTP, DHCP
- Transport : segments, TCP, UDP (datagrammes)
- Internet : paquets, IPv4, IPv6
- Accès réseau : trames, Ethernet, Wlan

## Chapitre 4

### Couche physique :
**Domaines des normes :** 
- Composants physiques
- Codage
  - **Exemple de codage :** Manchester, NRZ, etc.
- Signalisation
  - **Exemple de signal :** digital, am, fm

**Bande passante :** Détermine la capacité de transmission d'un réseau.
**Latence :** Mesure le délai d'attente affectant la réactivité.
**Débit :** Indique la vitesse et le volume de transfert des données.

**Cables :**
1. **Câbles à fibre optique :**
   - **Types de connecteurs :** ST, LC (unidirectionnels et bidirectionnels), SC.
   - **Avantages :** Haute bande passante (10 Gbit/s), longue distance (transocéanique), résistance aux perturbations électromagnétiques et électriques.
   - **Comparaison avec le cuivre :** Fibre optique plus chère mais offre une meilleure performance et résistance.
2. **Câblage cuivre (paires torsadées) :**
   - **Types :** UTP, FTP, STP, S/FTP, etc., avec différents niveaux de blindage.
   - **Performances :** Bande passante de 10 Mbit/s à 10 Gbit/s, distance limitée (1 à 100 mètres), sensible aux perturbations électromagnétiques.
   - **Applications :** Ethernet droit (hôte à périphérique), croisé (hôte à hôte), inversé (console Cisco).
3. **Sans-fil :**
   - **Technologies :** Wi-Fi (IEEE 802.11), Bluetooth (IEEE 802.15), WiMAX (IEEE 802.16), Zigbee (IEEE 802.15.4).
   - **Avantage :** Mobilité, nombre croissant de connexions.
4. **Utilisation des fibres optiques :**
   - **Réseaux d’entreprise :** Dorsale et interconnexion d’infrastructure.
   - **FTTH :** Services à large bande pour foyers et petites entreprises.
   - **Réseaux longue distance :** Connexions inter-pays et inter-villes.

**Points clés :**
- **Fibre optique :** Performances supérieures, coût élevé.
- **Cuivre :** Moins cher, distance et bande passante limitées.
- **Sans-fil :** Mobilité, technologies variées (Wi-Fi, Bluetooth, etc.).

## Chapitre 5

**Système binaire :**
- 0 et 1, bits
- Addressage binaire
- IPv4, 32 bits divisé en 4
- Octet, 8 bits
**Système héxadecimal :**
- De 0 a F, F = 15

## Chapitre 6

### Couche liaison de données
- Responsable des communication entre la carte réseau du périphérique final
- Encapsule les paquets de couche 3 en trames de couche 2
- Détection d'erreurs et rejet des trames corrompues

**Trames :** (Debut de trame, Adressage, Type, Control) En-tete, Data, (Detection d'erreurs, Fin de trame) Fin

**Fonctions de base :**
- Réception et interprétation des trames de la couche réseau.
- Décapsulation de la trame pour retirer l'ancien protocole de couche 3.
- Ré encapsulation de paquet dans la nouvelle trame adaptée.
- Transmission de la nouvelle trame sur le support du segment suivant.

**Organisme de normalisation de la couche 2 :**
- IEEE
- ANSI
- ITU
- ISO

**La topologie logique et le support physique déterminent le protocole de liaison de données utilisé :**
- Ethernet
- 802.11 sans fil
- PPP (Point-to-Point Protocol)
- HDLC (High Level Data Link Control) Frame-Relay

## Chapitre 7

### Commutation Ethernet :
**Trame Ethernet :**
- Sous-couche MAC : assure l'encapsulation des données et l'accès au support
- Encapsulation des données :
  - Préparer la trame ethernet
  - Adressage ethernet
  - Detection des erreurs
- Méthodologie d'accès au support physique, CSMA/CD, Déterministe
- Taille de la trame ethernet : 64 octets à 1518 octets
- Trame Ethernet :
  - Preambule : 8 octets
  - Adresse MAC de destination : 6 bytes
  - Adresse MAC source : 6 bytes
  - Type/Longeur : 2 bytes
  - Data : 45-1500 bytes
  - FCS : 4 bytes

**Adresse MAC :**
- 48 bits, 12 valeurs HEX ou 6 octets
- Toute les carte réseau Ethernet possède une adresse MAC
- Les cartes réseaux acceptent uniquement les trames qui ont la meme adresse MAC que lui en destination, diffusion, multi-diffusion



