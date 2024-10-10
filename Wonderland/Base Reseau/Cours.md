# Base des réseaux
## Protocoles d'applications
- URL
    - Localisateur de ressources uniforme
    - https://www.google.com
- HTTP
    - Protocole de transfert hypertexte
- TCP
    - Protocole de contrôle de transmission
- 17 messages pour une demande d'URL
    - 6 pour trouver l'adresse IP (Internet Protocol)
    - 3 pour l'établissement de la connexion TCP
    - 4 pour la requête HTTP et l'accusé de réception
        - Demande : j'ai réçu votre demande et j'enverrai les données
        - Réponse : Voici les données que vous avez demandées; j'ai eu les données
    - 4 messages pour supprimer la connexion TCP
## Exigences : les parties prenantes
- Développeur d'applications
    - Lister les services dont son application a besoin :
        - Par exemple transmettre les données avec une vitesse/délai donné
        - Transmettre des données sans perte
- Concepteur de réseau
    - Concevoir un réseau rentable avec des ressources partageables
- Fournisseur de réseau
    - Lister les caractéristiques d'un système facile à gèrer/administrer
### Exigence 1 : Connectivité
- Taille du réseau
- Lien
- Noeuds
- Point à point
- Accès multiple
- Réseau commuté
    - Circuit commuté
    - Commutation de paquets
- Paquet, message
- Stockage et retransmission
- Nuage
- Hôtes
- Commutateurs
- Interréseau
- Routeur/passerelle
- Connectivité hôte à hôte
- Adresse
- Routage
- Unicast/Broadcast/Multicast
## Définition récursive d'un réseau
Un système composé de deux noeuds ou plus connectés par un lien physqiue, ou comme deux ou plusieurs réseaux informatiques connectés par un noeud.
Un réseau informatique est construit comme une imbrication de réseaux supporté au niveau le plus bas d'abstraction par un support physique