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
- Adresse de diffusion : FF:FF:FF:FF:FF:FF
- Adresse MAC :
   - **Multidiffusion :** IPv4 utilise `01-00-5E`, IPv6 utilise `33-33`.
   - **Table CAM :** Les switches utilisent l’adresse MAC pour décider de la transmission des trames. Si l’adresse MAC de destination est inconnue, la trame est envoyée à tous les ports (monodiffusion inconnue).
- Méthodes de transmission :
   - **Store and Forward :** Reçoit toute la trame, vérifie le CRC, puis retransmet.
   - **Cut Through :** Transmet la trame dès que l’adresse MAC de destination est détectée.
     - **Fast Forward :** Similaire à Cut Through.
     - **Sans fragment :** Vérifie les premiers octets avant transmission.
- Mémoire des switches :
   - **Mémoire axée sur les ports :** Les trames sont stockées dans des files d’attente spécifiques à chaque port.
   - **Mémoire partagée :** Toutes les trames sont stockées dans un tampon commun, avec allocation dynamique de la mémoire.
- Paramètres Duplex et Vitesse :
   - **Duplex :** Full Duplex ou Semi-Duplex.
   - **Vitesse :** Ethernet, Fast Ethernet, Gigabit Ethernet, 10 Gigabit Ethernet.
   - **Auto-MDIX :** Fonctionnalité permettant de détecter automatiquement le type de câble (droit ou croisé) à partir de la version 12.2(18)SE de l’IOS Cisco.
- Points clés :
  - **Adresse MAC :** Utilisée pour la transmission des trames dans les switches.
  - **Méthodes de transmission :** Store and Forward (vérification complète) vs Cut Through (transmission rapide).
  - **Mémoire :** Axée sur les ports ou partagée.
    - **Duplex et Vitesse :** Paramètres de communication et vitesse de transmission.
  - **Auto-MDIX :** Simplifie les connexions en détectant automatiquement le type de câble.

## Chapitre 8

### Couche réseau
**Elle effectue 4 opérations de base :**
1. Adressage des périphériques finaux
2. Encapsulation
3. Routage
4. Décapsulation

**Encapsulation IP :**
Le protocole IP est consideré comme :
- Sans connexion
- Acheminement au mieux
- Indépendant vis à vis des supports

**En-tete de paquet IPv4 :**
- Garantit que le paquet est envoyé vers la meilleure direction (vers la destination)
- Contient les informations de gestion de couche réseau dans différents Domaines
- Les informations sont utilisé par tout les périphériques de couche 3 qui gère le paquet

**Limite IPv4 :**
- Pénurie d'adresse IPv4
- Manque de connectivité de bout en bout
- Augmentation de la complexité du réseau (ex. NAT)

**Présentation IPv6 :**
- Espace d'adressage plus important
- Traitement plus efficace des paquets
- Traduction d'adresse réseau inutile

### Décisions relatives aux transmissions des hotes

**Peut envoyer des paquets aux elements suivants :**
- Lui-meme : 127.0.0.1 (IPv4), ::1 (IPv6)
- Hotes locaux : meme reseau local
- Hotes distants : par sur le meme reseau local

Le trafic local est geré par les equipements sources et intermédiaires
Le trafic distant est directement redirigé a la passerelle par défaut

### Caractéristiques d'une passerelle par défaut
- Doit avoir une adresse IP dans la meme gamme que le reseau local
- Peut accepter les données locales et peut les retransmettre en dehors du réseau local
- Il peut acheminer vers d'autres réseaux

### Table de routage des router

**Trois types de chemin possibles :**
- Route directement connectée
- Route distante
- Route par défaut

## Chapitre 9

**Adresses MAC et IP :**
  - **Adresse MAC :** Identifie de manière unique un périphérique sur un réseau local (couche 2). Elle est utilisée pour la communication entre appareils sur le même réseau.
  - **Adresse IP :** Identifie un périphérique sur un réseau (couche 3). Elle permet la communication entre réseaux différents.

**Protocole ARP (Address Resolution Protocol) :**
  - **Fonction :** ARP permet de résoudre une adresse IP en une adresse MAC sur un réseau local.
  - **Requête ARP :** Un périphérique envoie une requête ARP pour trouver l’adresse MAC associée à une adresse IP spécifique.
  - **Réponse ARP :** Le périphérique avec l’adresse IP demandée répond avec son adresse MAC.
  - **Cache ARP :** Stocke temporairement les correspondances entre adresses IP et MAC pour éviter de répéter les requêtes ARP.

**Inondation de trames par un commutateur :**
  - Un commutateur inonde tous les ports (sauf celui d’entrée) dans deux cas :
    - **Adresse de destination inconnue :** Si l’adresse MAC de destination n’est pas dans la table CAM.
    - **Adresse de diffusion :** Si la trame est destinée à l’adresse de diffusion (broadcast).

**Protocole NDP (Neighbor Discovery Protocol) pour IPv6 :**
  - **Fonction :** NDP remplace ARP dans IPv6. Il utilise deux types de messages :
    - **NS (Neighbor Solicitation) :** Pour demander l’adresse MAC associée à une adresse IPv6.
    - **NA (Neighbor Advertisement) :** Pour répondre avec l’adresse MAC.

**Attaque par usurpation ARP (ARP Spoofing) :**
  - **But :** Associer de fausses adresses MAC à des adresses IP pour intercepter ou perturber le trafic réseau.
  - **Impact :** Peut entraîner une interception de données ou une dégradation des performances du réseau.

**Traitement des trames par un commutateur :**
  - Le commutateur utilise la table CAM pour déterminer où envoyer les trames.
  - Si l’adresse MAC de destination est inconnue, la trame est inondée sur tous les ports (sauf celui d’entrée).
  - Si l’adresse MAC est connue, la trame est envoyée uniquement au port correspondant.

**Commande `arp -d` :**
  - **Fonction :** Vide le cache ARP d’un ordinateur.
  - **Utilisation :** Utile après des changements de configuration réseau pour forcer une nouvelle résolution ARP.

**Adresse de destination dans une requête ARP :**
  - **Adresse MAC de destination :** `FFFF.FFFF.FFFF` (adresse de diffusion).
  - **Adresse IP de destination :** L’adresse IP pour laquelle on cherche l’adresse MAC.

**Réponse ARP :**
  - La réponse ARP contient l’adresse MAC du périphérique qui possède l’adresse IP demandée.

**Points clés :**
- **ARP** résout les adresses IP en adresses MAC sur un réseau local.
- **NDP** est l’équivalent d’ARP pour IPv6.
- Un commutateur inonde les trames si l’adresse MAC de destination est inconnue ou si c’est une adresse de diffusion.
- **Cache ARP** stocke les correspondances IP/MAC temporairement.
- **ARP Spoofing** est une attaque qui falsifie les adresses MAC pour perturber le réseau.


