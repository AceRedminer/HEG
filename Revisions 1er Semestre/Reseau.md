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
- 

**Types de diffusion :**
- **Monodiffusion :** communication un-a-un
- **Diffusion :** communication un-a-tous, pas dans IPv6, désactivé par défaut a partir de Cisco IOS 12.0 pour des raisons de sécurité
- **Multidiffusion :** 224.0.0.0 à 239.255.255.255, plage d'adresses de multidiffusion IPv4, lorsqu'un hote rejoint un groupe de multidiffusion il recevra tout les paquets envoyé sur ce canal de diffusion







