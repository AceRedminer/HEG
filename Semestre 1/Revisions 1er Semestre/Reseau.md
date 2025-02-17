# Cours Infrastructure et réseau

## Semaine 1

### Adressage IPv4

**Adresse IP :**
- **32 bits**
- **Partie réseau :** doit etre identique dans tout le réseau
- **Partie hotes :** doit etre unique sur le réseau

**Masque de sous-réseau :**
- Utilisé pour identifier la partie réseau d'une adresse IP
- On fait un AND avec l'adresse IP ce qui permet de trouver la partie réseau

**Préfixes :**
- Pour ne pas avoir a écrire les masque de sous réseau en entier on utiliser l'ecriture /X ou X equivaut aux nombre de bits a 1 de gauche a droite

**Types d'adresses :**
- **Hote :** adresses comprises entre l'adresse réseau et l'adresse broadcast, sauf contrainte de normes d'entreprise qui établissent des plage d'adresse pour des appareils spécifique tel que les commutateur ou les périphériques finaux
- **Reseau :** premiere adresse du réseau
- **Broadcast :** dernière adresse du réseau
- **Publiques :** acheminée entre ISP
- **Privée :** utilisation pour les hotes internes relativement au routeur, unique dans le réseau, pas unique au niveau mondial, les adresses doivent etre traduites en adresse publiques afin de communiquer avec l'extérieur du réseau local, le routeur utilise NAT pour faire cette traduction
  - | Adresse réseau et préfixe | Plage d'adresses privée RFC 1918 |
    |---------------------------|----------------------------------|
    | 10.0.0.0/8                | 10.0.0.0 - 10.255.255.255        |
    | 172.16.0.0/12             | 172.16.0.0 - 172.31.255.255      |
    | 192.168.0.0/16            | 192.168.0.0 - 192.168.255.255    |
- **Adresse de bouclage :** 127.0.0.0 /8 ou 127.0.0.1 à 127.255.255.254
- **Adresse link-local :** 169.254.0.0 /16 ou 169.254.0.1 à 169.254.255.254, permet Windows d'assigner des adresse dynamique lorsqu'il n'y pas de serveur DHCP

**Types de diffusion :**
- **Monodiffusion :** communication un-a-un
- **Diffusion :** communication un-a-tous, pas dans IPv6, désactivé par défaut a partir de Cisco IOS 12.0 pour des raisons de sécurité
- **Multidiffusion :** 224.0.0.0 à 239.255.255.255, plage d'adresses de multidiffusion IPv4, lorsqu'un hote rejoint un groupe de multidiffusion il recevra tout les paquets envoyé sur ce canal de diffusion

**Adressage IPv4 par Classe :**
- **Classe A (0.0.0.0/8 à 127.0.0.0/8)** : Conçue pour les très grands réseaux avec plus de 16 millions d'adresses d'hôte. Utilisait un préfixe fixe /8.
- **Classe B (128.0.0.0/16 à 191.255.0.0/16)** : Pour les réseaux de moyenne à grande envergure avec environ 65 000 adresses d'hôte. Utilisait un préfixe fixe /16.
- **Classe C (192.0.0.0/24 à 223.255.255.0/24)** : Pour les petits réseaux avec un maximum de 254 hôtes. Utilisait un préfixe fixe /24.
**Note:** Il existe également des blocs de multidiffusion (Classe D) et des adresses expérimentales (Classe E), de nos jours on utilise plus le classful mais le classless

**Gestion des Adresses IP par l'IANA et les RIR :**
- Les adresses IPv4 et IPv6 sont gérées par l'IANA (Internet Assigned Numbers Authority), qui attribue des blocs d'adresses IP aux organismes d'enregistrement Internet locaux (RIR). Il existe cinq RIR principaux, ARIN, LACNIC, RIPENCC, AfriNIC, APNIC
- Les RIR sont responsables de l'attribution des adresses IP aux fournisseurs de services Internet (ISP), qui distribuent ensuite ces adresses aux entreprises et aux plus petits ISP. Les organisations peuvent également obtenir des adresses IP directement auprès d'un RIR, selon les politiques spécifiques de celui-ci.

**Protocole ARP :**
1. **Requete ARP :** diffusion d'une demande pour trouver l'adresse MAC correspondant a une adresse IP
2. **Reception :** touts les périphériques recoivent la requete et vérifie si elle correspond a leurs adresse IP
3. **Reponse ARP :** le périphérique en question repond avec son adresse MAC
4. **Table ARP :** le périphérique ajoute l'adresse MAC a sa table ARP

**Domaine de diffusion :** 
- Chaque interface d'un routeur correspond a un domaine de diffusion
- Les émissions ne sont propagées que par l'interface du domaine de diffusion d'ou elle provienne
- **Problèmes des grands domaines de diffusion :** quantité excessive de trafic de diffusion, réseau saturé, hotes ralentit car doit traiter tout les paquets de diffusion
- **Solution :** mettre en place des sous réseaux afin réduire le domaine de diffusion

**Raisons pour segmenter le réseau :**
- Par étage d'un bureau
- Par groupe ou fonctions : admin, RH, étudiants, Compta
- Par type d'appareil : hotes, serveurs, imprimantes

**Réseaux privées vs Public :**
- **Intranet :** réseau interne a une entreprise, accessible uniquement au sein de celle-ci, utilise des adresse privées
- **DMZ :** partie du réseau de l'entreprise disponible sur internet, utilise des adresse publiques
- **Extranet :** Réseau étendu qui permet à une entreprise de partager des ressources de manière sécurisée avec des partenaires externes (clients, fournisseurs), utilise des adresses privées ou publiques selon la configuration, intranet avec accès controlé depuis l'extérieur

**VLSM :**
- Permet de diviser un réseau en sous-réseaux de tailles différentes, optimisant ainsi l'utilisation des adresses IP.
- Contrairement au subnetting classique, où tous les sous-réseaux ont la même taille, le VLSM offre une flexibilité pour adapter la taille des sous-réseaux aux besoins spécifiques de chaque segment du réseau.

---

## Semaine 2

### Configuration de base des commutateurs et terminaux

**Méthodes d'accès aux appareils :**
- **Console :** Port de gestion permettant un accès hors réseau à un périphérique Cisco, accessible même sans services réseau configurés, nécessitant un ordinateur avec un logiciel d'émulation de terminal et un câble de console spécial.
- **SSH (Secure Shell) :** Méthode sécurisée pour établir une connexion CLI à distance via une interface virtuelle, nécessitant des services réseau actifs et une adresse IP sur le périphérique.
- **Telnet :** Méthode non sécurisée pour établir une session CLI à distance, envoyant les informations en clair, et devant être remplacée par SSH pour des raisons de sécurité.

**Modes de commandes :**
- **Execution utilisateur :** nombre limité de commandes de surveillance de base, view-only
- **Execution privilegié :** permet d'accéder a toutes les commandes et fonctionnalités, 

**Mode de configuration :**
- **Configuration en ligne :** pour configurer l'accès console, aux, ssh/telnet 
- **Configuration d'interface :** pour configurer une interface réseau

**Configuration de base :**
- **Hostname :** enable, conf t, hostname R1
- **Mot de passe :** 
  - **Ligne :** enable, conf t, line con 0, password cisco, login, end
  - **Privilege :** enable, conf t, enable secret class, exit
  - **Chiffrement :** enable, conf t, service password-encryption
- **Bannière :** enable, conf t, banner motd #Authorized Acces Only#

**Fichier de config :**
- **Afficher :** enable, show running-config
- **Restaurer la config de démmarrage :** reload

**Différences entre les types de support réseau :**
-  La distance
-  L'environnement
-  Quantité de donnée et débit
-  Cout de supports et d'installation

**Interface virtuelle :**
- Crée au niveau logiciel
- Permet de géré a distance un commutateur
- Par défaut VLAN1

**Configuration d'interface de commutateur virtuelle :**
- enable, conf t, int vlan 1, ip address x.x.x.x x.x.x.x, no shutdown, exit, ip default-gateway x.x.x.x (adresse du routeur du routeur le plus proche)

## Semaine 4

### Modèles et protocoles

**Notions de base de communication :**
- **Source (expéditeur)**
- **Destination (destinataire)**
- **Canal :** supoprt qui assure le cheminement du message

**Exigences :**
- Identification de l'expediteur et du destinataire
- Utilisation d'une langue et syntaxe commune
- Vitesse et rythme d'élocution
- Demande de confirmation de réception
- Codage du message
- Format et encapsulation des messages
- La taille du message
- **Synchronisation des messages :**
  - **Contrôle de flux :** Processus de gestion de la vitesse de transmission des données entre périphériques source et destination pour éviter la surcharge et assurer une communication efficace.
  - **Délai de réponse :** Règles définissant le temps d'attente pour une réponse avant de prendre des mesures, comme répéter la demande ou abandonner.
  - **Méthode d'accès :** Détermine quand un périphérique peut transmettre des données pour éviter les collisions, notamment en vérifiant la disponibilité du support de communication.
- Options de remise des messages

**Protocoles :**
- **Communications des réseaux :** permet a plusieurs periphériques de communiquer a travers les réseaux
  - **Ethernet implique :** IP, TCP, HTTP, etc.
- **Sécurité des réseaux :** assure l'authentification, l'intégrité des données et le cryptage des données, SSH, SSL, TLS
- **Protocoles de routage :** permettent aux routeurs d'échanger des informatios de routage, de comparer les informations sur les chemins, sélectionner le meilleur chemin vers le réseau de destination, OSPF, BGP
- **Protocoles de découverte de services :** utiliser pour la détection automatique des appareils ou des services, DHCP, DNS
- **Fonctions :**
  - **Adressage :** Ethernet, IPv4, IPv6
  - **Fiabilité :** TCP
  - **Controle de flux :** TCP
  - **Séquençage :** TCP
  - **Détection d'erreurs :** Ethernet, IPv4, IPv6 et TCP
  - **Interface de l'application :** HTTP, HTTPS
- **HTTP (Hypertext Transfer Protocol) :** Protocole qui régit l'interaction entre un serveur web et un client web, définissant le format des requêtes et des réponses.
- **TCP (Transmission Control Protocol) :** Assure la livraison fiable des données et gère le contrôle de flux entre les appareils finaux.
- **IP (Internet Protocol) :** Responsable de la transmission des messages de l'expéditeur au destinataire, utilisé par les routeurs pour transférer les données à travers plusieurs réseaux.
- **Ethernet :** Protocole qui gère la transmission des messages entre cartes réseau sur un même réseau local (LAN).

**Modèles :**
- **OSI :**
  - **Application :** données, interface utilisateur et service réseau
  - **Presentation :** données, formatage et chiffrement des données
  - **Session :** données, etablissement, gestion et fermeture des sessions
  - **Transport :** segments, gestion de la communication et fiabilité des données
  - **Reseau :** paquets, routage des paquets entre réseaux
  - **Liaison :** trames, gestion des trames et controle d acces au support
  - **Physique :** bits, transmission des bits brut sur le support physique
- **TCP/IP :**
  - **Application :** données, HTTP, DNS, DHCP, FTP, represente les données pour l'utilisateur ainsi que le codage et controle du dialogue
  - **Transport :** segments, TCP, UDP, prend en charge la communication entre plusieurs periphériques a travers divers réseaux
  - **Internet :** IPv4, IPv6, ICMP, determine le meilleur chemin a travers le réseau
  - **Accès réseau :** Ethernet, WLAN, controle periphérique matériel et les supports qui constituent le réseau

**Segmentation :**
- **Augmente la vitesse** : Le découpage des données en paquets permet d'envoyer de grandes quantités d'informations sans monopoliser une liaison, grâce au multiplexage.
- **Augmente l'efficacité** : En cas d'échec de transmission, seul le segment manquant est retransmis, évitant de renvoyer l'intégralité des données.

**Encapsulation :**
1. **Couche Application** : Les données sont créées par l'application (ex: un message, une requête HTTP).
2. **Couche Présentation** : Les données sont formatées, compressées ou chiffrées.
3. **Couche Session** : Une session est établie pour gérer la communication.
4. **Couche Transport** : Les données sont segmentées en **segments** (TCP) ou **datagrammes** (UDP), avec l'ajout d'un en-tête (numéro de port, contrôle d'erreur).
5. **Couche Réseau** : Les segments sont encapsulés en **paquets**, avec un en-tête contenant les adresses IP source et destination.
6. **Couche Liaison** : Les paquets sont encapsulés en **trames**, avec un en-tête (adresses MAC) et un trailer (contrôle d'erreur comme CRC).
7. **Couche Physique** : Les trames sont converties en **bits** (signaux électriques, optiques ou radio) pour transmission sur le support physique.

**Désencapsulation :**
1. **Couche Physique** : Les bits sont reçus et convertis en trames.
2. **Couche Liaison** : L'en-tête et le trailer de la trame sont vérifiés, puis retirés pour extraire le paquet.
3. **Couche Réseau** : L'en-tête IP est vérifié et retiré pour extraire le segment.
4. **Couche Transport** : L'en-tête du segment est vérifié (ports, contrôle d'erreur), puis retiré pour extraire les données.
5. **Couche Session** : La session est gérée pour assurer la continuité de la communication.
6. **Couche Présentation** : Les données sont décompressées ou déchiffrées.
7. **Couche Application** : Les données sont livrées à l'application destinataire.

### Concepts du routage