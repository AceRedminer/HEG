# NETACAD CCNA1

## 1.2

### 1.2.1

**Hotes :** Périphériques du réseau auxquels un numéro est attribué à des fins de communication, adresse IP identifie l'hôte et le réseau auquel l'hôte est connecté.

**Types d'hôtes :**

- Périphérique finaux
- Clients

**Serveurs :**
Les serveurs sont des ordinateurs équipés de logiciels leur permettant de fournir des informations, comme des messages électroniques ou des pages web, à d'autres périphériques finaux sur le réseau.
Chaque service nécessite un logiciel serveur distinct.
Un ordinateur équipé d'un logiciel serveur peut fournir des services à un ou plusieurs clients en même temps.

**Logiciels client :**
Un navigateur web, comme Chrome ou Firefox, est un exemple de logiciel client, permettant à un utilisateur d'exécuter plusieurs tâches simultanément, comme consulter des emails, naviguer sur le web, et écouter un flux audio. Le tableau présente trois types courants de logiciels serveurs : serveur de courrier électronique, serveur web et serveur de fichiers. Chacun de ces serveurs interagit avec des logiciels clients spécifiques pour fournir des services comme l'accès aux emails, aux pages web et aux fichiers stockés.

---

### 1.2.2

**Peer-to-Peer :**
Les logiciels client et serveur fonctionnent généralement sur des ordinateurs distincts, mais un seul ordinateur peut assumer les deux rôles simultanément. Dans les réseaux domestiques ou de petites entreprises, les ordinateurs agissent souvent à la fois comme clients et serveurs, formant un réseau Peer to Peer.

**Avantages du réseau peer-to-peer :**

- Facile à configurer
- Moins complexe
- Coût réduit car les appareils réseau et les serveurs dédiés ne sont pas toujours nécessaires
- Peut être utilisé pour des tâches simples telles que le transfert de fichiers et le partage des imprimantes

**Inconvénients du réseau peer-to-peer :**

- Pas d'administration centralisée
- Peu sécurisé
- Non évolutif
- Tous les périphériques peuvent servir à la fois de client et de serveur, ce qui peut ralentir les performances

---

### 1.2.3

**Périphériques finaux :**
Les périphériques réseau, appelés terminaux, sont identifiés par des adresses uniques pour permettre la communication entre eux. Lorsqu'un terminal envoie un message, il utilise l'adresse du terminal de destination pour s'assurer que le message est correctement délivré, chaque terminal pouvant être à la fois source ou destination.

---

### 1.2.4

**Equipements actifs :**
Les dispositifs intermédiaires relient les dispositifs finaux au réseau et peuvent interconnecter plusieurs réseaux pour former un interréseau, assurant la connectivité et la transmission des données. Ils utilisent l'adresse du dispositif final de destination et les informations sur les interconnexions pour déterminer le chemin optimal des messages à travers le réseau. Des exemples courants de dispositifs intermédiaires incluent les routeurs et les commutateurs, qui jouent un rôle clé dans la gestion du trafic réseau.

**Les périphériques réseau intermédiaires effectuent une partie ou la totalité de ces fonctions :**

- Régénérer et retransmettre les signaux de communication
- Gérer des informations indiquant les chemins qui existent à travers le réseau et l'interréseau
- Indiquer aux autres périphériques les erreurs et les échecs de communication
- Diriger des données vers d'autres chemins en cas d'échec de liaison
- Classifier et diriger des messages en fonction des priorités
- Autoriser ou refuser le flux de données, selon des paramètres de sécurité.

**Remarque :** Non affiché est un hub Ethernet hérité. Un concentrateur Ethernet est également appelé répéteur multiport. Les répéteurs régénèrent et retransmettent les signaux de communication. Notez que tous les dispositifs intermédiaires remplissent la fonction de répéteur.

---

### 1.2.5

**Supports réseau :**
La communication se transmet à travers un réseau sur les supports. Celui-ci fournit le canal via lequel le message se déplace de la source à la destination.

**Les réseaux modernes utilisent principalement trois types de supports pour la connexion des périphériques :**

- Fils métalliques dans les câbles - Les données sont encodées en impulsions électriques.
- Verre ou fibres plastiques (câble à fibre optique) - les données sont encodées en pulsations lumineuses
- Transmission sans fil - Les données sont codées par modulation de fréquences spécifiques d'ondes électromagnétiques.

**The four main criteria for choosing network media are these :**

- Quelle est la distance maximale sur laquelle les supports peuvent transporter correctement un signal ?
- Quel est l'environnement dans lequel les supports seront installés ?
- Quelle est la quantité de données et à quelle vitesse doit-elle être transmise ?
- Quel est le coût des supports et de l'installation ?

---

## 1.3

### 1.3.1

**Répresentation du réseau :**
Un diagramme de topologie aide à visualiser la connexion des appareils dans un réseau, en utilisant des représentations logiques des composants physiques. Pour décrire ces connexions, on utilise des termes comme **Carte d'interface réseau (NIC)**, **Port physique** et **Interface**, qui désignent respectivement la liaison physique d'un dispositif au réseau, le connecteur pour le support, et les ports spécialisés sur les routeurs. Les termes "port" et "interface" sont souvent interchangeables.

---

### 1.3.2

**Diagramme de topologie :**
Les diagrammes de topologie sont essentiels pour visualiser les connexions réseau et se divisent en deux types : physiques et logiques. Les diagrammes de topologie physique montrent l'emplacement des dispositifs intermédiaires et l'installation des câbles, tandis que les diagrammes de topologie logique illustrent les périphériques, les ports et le schéma d'adressage, détaillant les connexions entre terminaux et intermédiaires ainsi que les supports utilisés.

---

## 1.4

### 1.4.1

**Réseaux de tailles diverses :**
Ces réseaux varient en taille, allant de simples réseaux domestiques avec quelques appareils à des réseaux complexes reliant des millions de dispositifs. Les réseaux domestiques permettent le partage de ressources comme des imprimantes et des fichiers, tandis que les réseaux de petits bureaux et bureaux à domicile (SOHO) facilitent le travail à distance et les activités entrepreneuriales.

Les grandes entreprises utilisent des réseaux pour stocker et accéder aux informations, ainsi que pour faciliter la communication et la collaboration entre employés. Internet, le plus grand réseau, est un ensemble de réseaux privés et publics interconnectés. Dans les petits réseaux, comme ceux des foyers ou des petites entreprises, les ordinateurs fonctionnent souvent à la fois comme serveurs et clients, formant un réseau Peer to Peer.

---

### 1.4.2

**LAN et WAN :**
Les infrastructures de réseau varient en fonction de la taille de la zone couverte, du nombre d'utilisateurs, des services disponibles et du domaine de responsabilité. Les deux types les plus courants sont les **réseaux locaux (LAN)** et les **réseaux étendus (WAN)**. Un **LAN** couvre une petite zone géographique, comme un département, une maison ou une petite entreprise, tandis qu'un **WAN** s'étend sur une vaste zone et relie plusieurs réseaux, souvent gérés par des grandes entreprises ou des fournisseurs de services. La figure illustre des LAN connectés à un WAN.

**LAN :**
Les réseaux locaux (LAN) couvrent une zone géographique restreinte, comme une maison, une école ou un campus, et relient des périphériques finaux dans cet espace limité. Administrés généralement par une seule organisation ou personne, les LAN offrent un contrôle centralisé sur les politiques de sécurité et d'accès. Ils fournissent également une bande passante à haut débit pour les périphériques internes et intermédiaires, comme illustré dans la figure.

**WAN :**
Les **réseaux étendus (WAN)** interconnectent des réseaux locaux (LAN) sur de vastes zones géographiques, telles que des villes, des pays ou des continents. Ils sont généralement gérés par des fournisseurs de services (PS) ou des fournisseurs de services Internet (ISP). Les WAN relient plusieurs LAN et fournissent des liaisons à débit généralement plus faible que les LAN.

---

### 1.4.3

**Internet :**
L'internet est un ensemble mondial de réseaux interconnectés (internetworks, ou internet en abrégé).

Internet, qui n'appartient à aucun individu ou groupe, repose sur des technologies et des normes standardisées pour assurer une communication efficace. Des organisations comme l'Internet Engineering Task Force (IETF), l'Internet Corporation for Assigned Names and Numbers (ICANN) et l'Internet Architecture Board (IAB) jouent un rôle clé dans la maintenance et la normalisation des protocoles et processus Internet.

---

### 1.4.4

**Intranet et Extranet :**
Un intranet est un réseau privé de LAN et WAN appartenant à une organisation, offrant un accès sécurisé à ses employés ou membres autorisés.

Un extranet permet un accès sécurisé à des personnes externes, comme des partenaires ou des fournisseurs, qui ont besoin d'accéder aux données de l'organisation. Par exemple, une entreprise peut donner accès à ses fournisseurs, un hôpital peut permettre aux médecins de prendre des rendez-vous, ou un bureau d'éducation peut partager des informations budgétaires avec les écoles de son district.

---

## 1.5

### 1.5.1

**Technologies d'accès a Internet :**
Les utilisateurs à domicile, les travailleurs à distance et les petits bureaux ont généralement besoin d'une connexion à un fournisseur de services Internet (ISP) pour accéder à Internet. Les options de connexion les plus courantes incluent le câble haut débit, la technologie DSL (Digital Subscriber Line), les WAN sans fil et les services mobiles.

Les organisations, quant à elles, nécessitent des connexions rapides pour accéder à d'autres sites d'entreprise et à Internet, afin de prendre en charge des services comme les téléphones IP, la vidéoconférence et le stockage dans des data centers. Les fournisseurs de services proposent des interconnexions de classe professionnelle, telles que la DSL, les lignes louées et les solutions Metro Ethernet.

---

### 1.5.2

**Connexion a Internet des bureaux a domicile et des petits bureaux :**
- **Câble** : Proposé par les fournisseurs de télévision par câble, il utilise le même câble pour transmettre les données Internet et la télévision. Il offre une large bande passante, une disponibilité élevée et une connexion permanente.
- **DSL** : Utilise une ligne téléphonique pour fournir une connexion Internet à large bande passante. La technologie ADSL (Asymmetric Digital Subscriber Line) est couramment utilisée, avec une vitesse descendante supérieure à la vitesse ascendante.
- **Cellulaire** : Permet d'accéder à Internet via un réseau de téléphonie mobile. La performance dépend du téléphone et de la tour cellulaire, mais offre une connectivité mobile.
- **Satellite** : Idéal pour les zones sans accès Internet traditionnel, il nécessite une antenne parabolique avec une ligne de vue dégagée vers le satellite.
- **Ligne commutée** : Une option économique utilisant une ligne téléphonique et un modem. Bien que la bande passante soit limitée, elle reste utile pour les déplacements ou les zones sans accès haut débit.

---

### 1.5.3

**Connexion Internet d'entreprise :**
Les options de connexion pour les entreprises diffèrent de celles des utilisateurs à domicile, car elles nécessitent souvent une **bande passante plus élevée**, des **services spécialisés** et des **solutions gérées**. Les entreprises peuvent opter pour des connexions comme les **lignes louées**, la **DSL professionnelle**, ou les **solutions Metro Ethernet**, qui offrent des performances et une fiabilité adaptées à leurs besoins. Les options disponibles dépendent des fournisseurs de services locaux et des infrastructures présentes dans la région.

- **Ligne louée dédiée** : Circuits réservés dans le réseau du fournisseur de services, reliant des bureaux distants pour un réseau privé de voix et/ou de données. Elles sont généralement louées mensuellement ou annuellement.
- **Metro Ethernet** : Aussi appelé Ethernet WAN, il étend la technologie LAN au WAN, offrant une connectivité haut débit pour les entreprises.
- **Business DSL** : Disponible en plusieurs formats, dont la ligne d'abonné numérique symétrique (SDSL), qui offre des vitesses élevées et égales pour les téléchargements en amont et en aval.
- **Satellite** : Une solution alternative lorsque les connexions câblées ne sont pas disponibles, offrant une connectivité par satellite pour les zones éloignées.

---

### 1.5.4

**Réseaux convergents :**
Les **réseaux séparés traditionnels** étaient courants dans les infrastructures plus anciennes, comme une école construite il y a trente ans. Dans ce modèle, chaque service (données, téléphonie, télévision) fonctionnait sur un réseau distinct, avec des technologies, des règles et des normes spécifiques. Ces réseaux ne pouvaient pas communiquer entre eux, ce qui entraînait une gestion complexe et une inefficacité dans la fourniture de services multiples.

Les **réseaux convergents** modernes ont remplacé les anciens réseaux séparés en combinant les services de données, de téléphonie et de vidéo sur une seule infrastructure. Contrairement aux réseaux spécialisés, les réseaux convergents permettent la transmission de données, de voix et de vidéo entre divers appareils en utilisant un ensemble commun de règles, de contrats et de normes. Cette approche simplifie la gestion et améliore l'efficacité en exécutant plusieurs services sur un même réseau.

---

## 1.6

### 1.6.1

**Architecture réseau :**
Au fil de l'évolution des réseaux, quatre caractéristiques fondamentales ont été identifiées pour répondre aux attentes des utilisateurs :
1. **Tolérance aux pannes** : Capacité du réseau à maintenir son fonctionnement malgré des défaillances.
2. **Évolutivité** : Possibilité d'étendre le réseau pour accueillir de nouveaux utilisateurs et services.
3. **Qualité de service (QoS)** : Gestion des priorités pour garantir des performances optimales pour les applications critiques.
4. **Sécurité** : Protection des données et des ressources contre les accès non autorisés et les menaces.

---

### 1.6.2

**Tolérance aux pannes :**
Un réseau **tolérant aux pannes** est conçu pour limiter l'impact des pannes en permettant une récupération rapide et en utilisant plusieurs chemins entre la source et la destination d'un message. Cette redondance garantit que si un chemin échoue, les messages sont redirigés instantanément vers un autre lien. 

La **commutation de paquets** est une méthode clé pour assurer cette redondance. Elle divise le trafic en paquets, chacun contenant les informations d'adressage nécessaires. Les routeurs du réseau dirigent ces paquets en fonction de l'état du réseau, ce qui signifie que les paquets d'un même message peuvent emprunter des chemins différents. Cette approche permet au réseau de s'adapter dynamiquement aux pannes sans que l'utilisateur ne soit affecté, comme illustré dans la figure.

---

### 1.6.3

**Evolutivité :**
Un réseau **évolutif** est conçu pour s'étendre rapidement afin de prendre en charge de nouveaux utilisateurs et applications, sans compromettre les performances des services existants. Cette évolutivité est illustrée par la facilité avec laquelle un nouveau réseau peut être intégré à un réseau existant. 

Les concepteurs de réseaux s'appuient sur des **normes et protocoles reconnus**, permettant aux fournisseurs de logiciels et de matériels d'améliorer leurs produits sans avoir à développer de nouvelles règles pour assurer leur compatibilité. Cela garantit une croissance fluide et une interopérabilité optimale au sein du réseau.

---

### 1.6.4

**Quality of Service (QoS) :**
La **qualité de service (QoS)** est devenue une exigence essentielle pour les réseaux modernes, en particulier avec l'essor des applications en temps réel comme la voix et la vidéo. La QoS permet de gérer la congestion du réseau et d'assurer une livraison fiable des contenus à tous les utilisateurs. 

La congestion se produit lorsque la demande de bande passante dépasse la capacité disponible, mesurée en **bits par seconde (bit/s)**. Lorsque plusieurs communications sont initiées simultanément, les appareils stockent les paquets en mémoire jusqu'à ce que des ressources soient disponibles pour les transmettre. 

Avec une politique de QoS, les routeurs peuvent prioriser certains types de trafic, comme les communications voix, pour garantir des performances optimales même en cas de congestion, comme illustré dans la figure où un utilisateur demande une page web tandis qu'un autre est en appel téléphonique.

---

### 1.6.5

**Sécurité du réseau :**
La **sécurité des réseaux** est essentielle pour protéger les infrastructures, les services et les données stockées sur les périphériques connectés. Les administrateurs de réseau doivent gérer deux aspects principaux : 
1. **Sécurité des infrastructures de réseau :** Cela inclut la protection physique des dispositifs de connectivité et la prévention des accès non autorisés aux logiciels de gestion.
2. **Sécurité des informations :** Cela concerne la protection des données contre les accès non autorisés et les menaces, garantissant leur intégrité et leur confidentialité.

Les administrateurs de réseau doivent également protéger les informations contenues dans les paquets transmis sur le réseau, ainsi que les informations stockées sur les périphériques connectés au réseau. Pour atteindre les objectifs de la sécurité des réseaux, il y a trois exigences principales:
- **Confidentialité :** La confidentialité des données signifie que seuls les destinataires prévus et autorisés peuvent accéder aux données et les lire.
- **Intégrité :** L'intégrité des données garantit aux utilisateurs que les informations n'ont pas été altérées lors de leur transmission, de l'origine à la destination.
- **Disponibilité :** La disponibilité des données garantit aux utilisateurs un accès rapide et fiable aux services de données pour les utilisateurs autorisés.

---

## 1.7

### 1.7.1

**Tendances recentes :**
Avec l'émergence de nouvelles technologies et d'appareils innovants, les entreprises et les consommateurs doivent constamment s'adapter à un environnement en évolution. Plusieurs tendances réseau influencent déjà les pratiques professionnelles et personnelles :
1. **BYOD (Bring Your Own Device)** : Permet aux employés d'utiliser leurs appareils personnels pour accéder aux ressources de l'entreprise.
2. **Collaboration en ligne** : Facilite le travail d'équipe à distance grâce à des outils de communication et de partage en temps réel.
3. **Communications vidéo** : De plus en plus utilisées pour les réunions virtuelles et les interactions en face à face.
4. **Cloud computing** : Offre un accès flexible et évolutif aux ressources informatiques et aux données via Internet.

---

### 1.7.2

**BYOD :**
Le **BYOD (Bring Your Own Device)** permet aux utilisateurs d'utiliser leurs appareils personnels, comme des ordinateurs portables, tablettes, smartphones et liseuses, pour accéder aux informations et communiquer via un réseau d'entreprise ou éducatif. Cette tendance, favorisée par la baisse des coûts des appareils grand public, offre une grande flexibilité, que les appareils soient achetés par l'entreprise, l'école ou l'individu. Le BYOD s'applique à tous les types d'appareils, quel que soit leur propriétaire, et peut être utilisé n'importe où.

---

### 1.7.3

**Collaboration en ligne :**
Les utilisateurs individuels cherchent à se connecter aux réseaux non seulement pour accéder aux applications de données, mais aussi pour collaborer efficacement. La **collaboration** consiste à travailler avec une ou plusieurs personnes sur un projet commun. Des outils de collaboration, comme **Cisco WebEx**, offrent aux employés, étudiants, enseignants, clients et partenaires un moyen de se connecter, d'interagir et d'atteindre leurs objectifs en temps réel.

La **collaboration** est une priorité stratégique essentielle pour les organisations afin de rester compétitives. Elle joue également un rôle crucial dans le domaine de l'éducation, où les étudiants collaborent pour s'entraider dans leur apprentissage, développer des compétences de travail d'équipe utiles dans leur vie professionnelle et travailler ensemble sur des projets en groupe.

---

### 1.7.4

**Communications vidéo :**
La **vidéo** est un élément clé des réseaux modernes, essentiel pour la communication, la collaboration et le divertissement. Les appels vidéo permettent de se connecter avec n'importe qui disposant d'une connexion Internet, peu importe sa localisation. 

La **vidéoconférence** est un outil puissant pour communiquer à distance, que ce soit au niveau régional ou international. Elle devient indispensable pour une collaboration efficace, surtout à mesure que les entreprises s'étendent au-delà des frontières géographiques et culturelles.

---

### 1.7.6

**Cloud Computing :**
L'**informatique en cloud** permet d'accéder et de stocker des données sur des serveurs via Internet. Les utilisateurs peuvent stocker des fichiers personnels, sauvegarder des disques entiers et accéder à des applications comme le traitement de texte ou l'édition de photos. Pour les entreprises, le cloud computing offre de nouvelles fonctionnalités sans nécessiter d'investissements importants en infrastructure, en formation ou en logiciels. Ces services sont disponibles à la demande, de manière économique et sécurisée, pour tout appareil dans le monde.

Le cloud computing repose sur des **centres de données**, des installations qui hébergent des systèmes informatiques et leurs composants. Ces centres peuvent varier en taille, d'une pièce à un bâtiment entier. Les grandes entreprises utilisent souvent des centres de données privés, tandis que les petites entreprises louent des services de serveur et de stockage auprès de centres de données plus grands pour réduire les coûts.

Pour des raisons de sécurité, de fiabilité et de tolérance aux pannes, les fournisseurs de cloud stockent souvent les données dans plusieurs centres de données répartis géographiquement. Il existe quatre principaux types de clouds : **publics**, **privés**, **hybrides** et **communautaires**, chacun offrant des avantages spécifiques en fonction des besoins des utilisateurs.

Voici une version intégrant le contenu du tableau sur les types de clouds :

L'**informatique en cloud** permet d'accéder et de stocker des données sur des serveurs via Internet. Les utilisateurs peuvent stocker des fichiers personnels, sauvegarder des disques entiers et accéder à des applications comme le traitement de texte ou l'édition de photos. Pour les entreprises, le cloud computing offre de nouvelles fonctionnalités sans nécessiter d'investissements importants en infrastructure, en formation ou en logiciels. Ces services sont disponibles à la demande, de manière économique et sécurisée, pour tout appareil dans le monde.

Le cloud computing repose sur des **centres de données**, des installations qui hébergent des systèmes informatiques et leurs composants. Ces centres peuvent varier en taille, d'une pièce à un bâtiment entier. Les grandes entreprises utilisent souvent des centres de données privés, tandis que les petites entreprises louent des services de serveur et de stockage auprès de centres de données plus grands pour réduire les coûts.

Pour des raisons de sécurité, de fiabilité et de tolérance aux pannes, les fournisseurs de cloud stockent souvent les données dans plusieurs centres de données répartis géographiquement. Il existe quatre principaux types de clouds :

- **Clouds publics** : Les applications et services sont accessibles au grand public, souvent via Internet. Ils peuvent être gratuits ou basés sur un modèle de paiement à l'utilisation.
- **Clouds privés** : Destinés à une organisation spécifique, ils peuvent être hébergés sur un réseau privé ou gérés par un tiers avec des mesures de sécurité strictes.
- **Clouds hybrides** : Combinaison de clouds publics et privés, permettant une flexibilité accrue et des niveaux d'accès variés en fonction des droits des utilisateurs.
- **Clouds communautaires** : Conçus pour des groupes d'organisations partageant des besoins spécifiques, comme les soins de santé, ils offrent un équilibre entre les avantages des clouds publics et la sécurité des clouds privés.

Chaque type de cloud offre des avantages spécifiques en fonction des besoins des utilisateurs, permettant une grande flexibilité et adaptabilité dans la gestion des données et des services.

---

### 1.7.7

**Tendances technologiques domestiques :**
Les tendances en matière de réseaux influencent non seulement la communication au travail et à l'école, mais transforment également nos foyers grâce aux **technologies domestiques intelligentes**. Ces technologies intègrent des appareils ménagers courants, les rendant "intelligents" et automatisés. 

Par exemple, un **four intelligent** peut être programmé pour cuisiner des aliments en fonction de votre emploi du temps. Connecté à votre calendrier, il ajuste les heures et les températures de cuisson en fonction de vos disponibilités. Vous pouvez également le contrôler à distance via un smartphone ou une tablette, et recevoir une alerte lorsque le repas est prêt.

Les technologies domestiques intelligentes se développent rapidement et s'étendent à toutes les pièces de la maison. Avec l'expansion des réseaux domestiques et de l'internet haut débit, ces innovations deviendront de plus en plus courantes, rendant nos maisons plus connectées et automatisées.

---

### 1.7.8

**Réseau sur courant électrique :**
La **mise en réseau par courant porteur** permet aux périphériques de se connecter au réseau local (LAN) via des prises électriques standard, sans nécessiter de câbles de données supplémentaires. Cette technologie utilise le câblage électrique existant pour transmettre des données sur des fréquences spécifiques, consommant peu ou pas d'électricité supplémentaire.

Cette solution est particulièrement utile lorsque les points d'accès sans fil ne parviennent pas à couvrir tous les appareils de la maison. Bien que le réseau électrique ne remplace pas le câblage dédié pour les réseaux de données, il offre une alternative efficace lorsque les câbles réseau ou les communications sans fil ne sont pas réalisables ou pratiques.

---

### 1.7.9

**Haut débit sans fil :**
Dans les zones où les connexions par câble et DSL ne sont pas disponibles, le **sans-fil** offre une alternative pour accéder à Internet. Un **fournisseur de services Internet sans fil (WISP)** connecte les abonnés à un point d'accès désigné en utilisant des technologies similaires à celles des réseaux locaux sans fil (WLAN) domestiques. Les WISP opèrent principalement dans les régions rurales.

L'antenne du WISP est généralement installée sur une structure élevée, comme un château d'eau ou un pylône radio. Chez l'abonné, une petite antenne ou parabole est fixée sur le toit, à portée de l'émetteur du WISP. L'unité d'accès de l'abonné est ensuite connectée au réseau câblé à l'intérieur de la maison. Pour l'utilisateur, cette configuration est similaire à celle du DSL ou du câble, à la différence près que la connexion entre la maison et le fournisseur d'accès est sans fil et ne nécessite pas de câble.

Le **haut débit sans fil** est une solution pratique pour offrir une connexion Internet sans fil à domicile ou dans les petites entreprises. Cette technologie utilise la même infrastructure que les réseaux cellulaires des smartphones. Une antenne est installée à l'extérieur de la maison pour fournir une connectivité sans fil aux appareils domestiques. Dans de nombreuses régions, le haut débit sans fil rivalise directement avec les technologies DSL et par câble, offrant une alternative fiable et performante.

---

## 1.8

### 1.8.1

**Menaces de sécurité :**
La **sécurité des réseaux** est une priorité absolue pour les administrateurs, que ce soit dans un foyer avec une seule connexion Internet ou dans une entreprise avec des milliers d'utilisateurs. Elle implique la mise en œuvre de protocoles, technologies, dispositifs et techniques pour protéger les données et atténuer les menaces, tout en garantissant la qualité de service attendue.

Les menaces externes courantes incluent :
- **Virus, vers et chevaux de Troie** : Logiciels malveillants exécutés sur les appareils des utilisateurs.
- **Spyware et adware** : Logiciels qui collectent secrètement des informations sur l'utilisateur.
- **Attaques du jour zéro** : Exploitation de vulnérabilités dès leur découverte.
- **Attaques des acteurs de menace** : Attaques ciblées sur les appareils ou ressources réseau.
- **Attaques par déni de service** : Ralentissement ou blocage des applications et processus réseau.
- **Interception et vol de données** : Capture d'informations privées sur le réseau.
- **Usurpation d'identité** : Vol d'identifiants pour accéder à des données privées.

Les **menaces internes** sont également préoccupantes, car de nombreuses violations de données résultent d'erreurs ou d'actions malveillantes des utilisateurs internes. Cela inclut la perte ou le vol de périphériques, la mauvaise utilisation des appareils par les employés, ou des actions délibérées d'employés malveillants. Avec l'adoption des stratégies **BYOD (Bring Your Own Device)**, les données d'entreprise sont plus vulnérables, rendant essentielle la prise en compte des menaces internes et externes dans les politiques de sécurité.

---

### 1.8.2

**Solutions de sécurité :**
La **sécurité des réseaux** nécessite une approche multicouche, car aucune solution unique ne peut protéger contre toutes les menaces. Pour les réseaux domestiques ou de petits bureaux, la sécurité est généralement simple et implique :

- **Antivirus et antispyware** : Protègent les terminaux contre les logiciels malveillants.
- **Filtrage par pare-feu** : Bloque les accès non autorisés, que ce soit via un pare-feu basé sur l'hôte ou un routeur domestique.

Pour les **réseaux d'entreprise**, la sécurité est plus complexe et inclut des composants supplémentaires :

- **Systèmes de pare-feu dédiés** : Offrent des capacités de filtrage avancées pour gérer de grandes quantités de trafic.
- **Listes de contrôle d'accès (ACL)** : Filtrent l'accès et le trafic en fonction des adresses IP et des applications.
- **Systèmes de prévention des intrusions (IPS)** : Détectent et bloquent les menaces rapides comme les attaques "zéro jour".
- **Réseaux privés virtuels (VPN)** : Permettent un accès sécurisé pour les travailleurs à distance.

Les exigences de sécurité doivent s'adapter à l'environnement réseau et aux besoins spécifiques, tout en garantissant la qualité de service. Une compréhension approfondie de l'infrastructure de routage et de commutation est essentielle pour organiser et sécuriser efficacement les services réseau.

---

## Résumé Chapitre 1
Les réseaux jouent un rôle central dans nos vies, permettant une connectivité mondiale et facilitant la communication, la collaboration et l'accès aux ressources. Voici un résumé structuré des points clés :

### **Impact des réseaux**
- Les réseaux connectent les individus et les communautés, augmentant la productivité et permettant un accès global aux informations via le cloud.
- Les **hôtes** (ou périphériques finaux) sont les ordinateurs ou appareils qui participent directement aux communications réseau. Ils peuvent agir comme clients, serveurs, ou les deux dans un réseau **Peer to Peer (P2P)**.
- Les **périphériques intermédiaires** relient les périphériques finaux et déterminent le chemin des messages à travers le réseau.

### **Représentations des réseaux**
- Les **diagrammes de topologie** (physiques et logiques) aident à visualiser la structure et les connexions d'un réseau.
  - **Topologie physique** : Montre l'emplacement des dispositifs et des câbles.
  - **Topologie logique** : Illustre les dispositifs, les ports et le système d'adressage.

### **Types de réseaux**
- **Réseaux domestiques** : Relient quelques ordinateurs et périphériques.
- **Réseaux SOHO** : Permettent aux petits bureaux ou bureaux à domicile de se connecter à des ressources centralisées.
- **Réseaux d'entreprise** : Relient des centaines ou des milliers d'hôtes sur plusieurs sites.
- **Internet** : Le plus grand réseau, reliant des millions d'appareils à l'échelle mondiale.
- **LAN (Local Area Network)** : Couvre une zone géographique restreinte.
- **WAN (Wide Area Network)** : Couvre une vaste zone géographique.
- **Intranet** : Réseau privé appartenant à une organisation.
- **Extranet** : Permet un accès sécurisé à des partenaires externes.

### **Connexions Internet**
- **Connexions SOHO** : Câble, ADSL, téléphone cellulaire, satellite, ligne commutée.
- **Connexions professionnelles** : Lignes louées, Metro Ethernet, DSL d'affaires, satellite.
- **Réseaux convergents** : Intègrent données, voix et vidéo sur une même infrastructure.

### **Réseaux fiables**
- **Architecture de réseau** : Technologies, protocoles et règles qui gèrent les données.
- **Caractéristiques clés** :
  - **Tolérance aux pannes** : Redondance pour limiter l'impact des pannes.
  - **Évolutivité** : Capacité à s'adapter à la croissance.
  - **Qualité de service (QoS)** : Gestion de la congestion pour une diffusion fiable.
  - **Sécurité** : Protection des infrastructures et des informations (confidentialité, intégrité, disponibilité).

### **Tendances des réseaux**
- **BYOD (Bring Your Own Device)** : Utilisation d'appareils personnels pour accéder aux réseaux professionnels.
- **Collaboration en ligne** : Outils comme Cisco WebEx pour interagir en temps réel.
- **Communications vidéo** : Utilisées pour les réunions, la collaboration et le divertissement.
- **Cloud computing** : Stockage et accès aux données via Internet, avec des types de clouds :
  - **Publics** : Accessibles au grand public.
  - **Privés** : Réservés à une organisation.
  - **Hybrides** : Combinaison de clouds publics et privés.
  - **Communautaires** : Pour des groupes partageant des besoins spécifiques.
- **Maisons intelligentes** : Intégration de technologies connectées dans les appareils domestiques.
- **Réseaux sur courant porteur** : Utilisation du câblage électrique pour transmettre des données.
- **WISP (Fournisseurs de services Internet sans fil)** : Connexion Internet sans fil dans les zones rurales.

### **Sécurité des réseaux**
- **Menaces externes** :
  - Virus, vers, chevaux de Troie.
  - Logiciels espions et publicitaires.
  - Attaques du jour zéro, déni de service, interception de données, usurpation d'identité.
- **Sécurité des réseaux domestiques** :
  - Antivirus et antispyware.
  - Filtrage par pare-feu.
- **Sécurité des réseaux d'entreprise** :
  - Pare-feu dédiés, listes de contrôle d'accès (ACL), systèmes de prévention des intrusions (IPS), réseaux privés virtuels (VPN).

### **Conclusion**
Les réseaux sont essentiels pour la communication moderne, mais nécessitent une gestion rigoureuse de la sécurité, de la performance et de l'évolutivité. Les tendances comme le BYOD, le cloud computing et les maisons intelligentes continuent de transformer notre façon de vivre et de travailler.

---

## 2.4

**Configuration de base :**
- **Hostname :** conf t, hostname R1
- **Mot de passe de la ligne console :** conf t, line con 0, password cisco, login, end
- **Mot de passe privilégié :** conf t, enable secret class, exit
- **Mot de passe de la ligne VTY :** conf t, line vty 0 15, password cisco, login, end
- **Chiffrer les mots de passe :** conf t, service password-encryption
- **Message de bannière :** conf t, banner motd #Authorized Access Only#
- **Afficher configuration :** show running-config

---

## 2.6

### 2.6.1

**Adresses IP :**
L'utilisation d'**adresses IP** est essentielle pour permettre aux périphériques de se localiser et de communiquer sur Internet. Chaque périphérique final d'un réseau doit être configuré avec une adresse IP. Voici un résumé des points clés :

**Périphériques finaux utilisant des adresses IP**
- **Ordinateurs** : Stations de travail, ordinateurs portables, serveurs de fichiers, serveurs web.
- **Imprimantes réseau**.
- **Téléphones VoIP**.
- **Caméras de surveillance**.
- **Smartphones**.
- **Périphériques portables mobiles** : Par exemple, lecteurs de codes à barres sans fil.

**Structure des adresses IPv4**
- Les adresses IPv4 sont représentées en **notation décimale à point**, composée de quatre nombres décimaux compris entre 0 et 255 (exemple : `192.168.1.1`).
- Chaque adresse IPv4 est unique et attribuée à un périphérique spécifique sur un réseau.

**Masque de sous-réseau**
- Un **masque de sous-réseau** est une valeur 32 bits qui distingue la partie réseau de la partie hôte d'une adresse IP.
- Associé à l'adresse IPv4, le masque de sous-réseau détermine à quel sous-réseau le périphérique appartient (exemple : `255.255.255.0`).

**Versions d'IP**
- **IPv4** : La version la plus couramment utilisée, mais limitée en nombre d'adresses disponibles.
- **IPv6** : La version la plus récente, conçue pour remplacer IPv4 en offrant un espace d'adressage beaucoup plus large.

**Remarque**
- Dans ce contexte, le terme **IP** fait référence à la fois aux protocoles IPv4 et IPv6, bien qu'IPv6 soit la version la plus récente et la plus avancée.

En résumé, les adresses IP (IPv4 et IPv6) et les masques de sous-réseau sont des éléments fondamentaux pour l'identification des périphériques et la gestion des communications sur les réseaux.

Les adresses IPv6 ont une longueur de 128 bits et sont notées sous forme de chaînes de valeurs hexadécimales. Tous les groupes de 4 bits sont représentés par un caractère hexadécimal unique, pour un total de 32 valeurs hexadécimales. Les groupes de quatre chiffres hexadécimaux sont séparés par un deux-points (:). Les adresses IPv6 ne sont pas sensibles à la casse et peuvent être notées en minuscules ou en majuscules.

---

### 2.6.2

**Interfaces et ports :**
Les **communications réseau** reposent sur trois éléments clés : les **interfaces des périphériques utilisateur final**, les **interfaces des périphériques réseau** et les **câbles de connexion**. Chaque interface est définie par des **normes physiques** spécifiques, et le câble de connexion doit être compatible avec ces normes. Voici un résumé des principaux supports de transmission :

**Supports de transmission**
1. **Câbles en cuivre à paires torsadées** :
   - Couramment utilisés dans les réseaux LAN.
   - Composés de fils de cuivre torsadés pour réduire les interférences.
   - Exemples : Cat5e, Cat6, Cat7.

2. **Câbles à fibres optiques** :
   - Utilisent des fibres de verre ou de plastique pour transmettre des signaux lumineux.
   - Idéaux pour les longues distances et les environnements à haut débit.
   - Exemples : Fibre monomode, fibre multimode.

3. **Câbles coaxiaux** :
   - Composés d'un conducteur central entouré d'un blindage.
   - Souvent utilisés pour les connexions Internet par câble et les réseaux télévisés.
   - Exemple : Câble RG-6.

4. **Liaisons sans fil** :
   - Utilisent des ondes radio pour transmettre des données.
   - Flexibles et adaptés aux environnements mobiles.
   - Exemples : Wi-Fi, Bluetooth, liaisons cellulaires.

**Importance des normes**
- Les **interfaces** des périphériques (comme les ports Ethernet ou les interfaces Wi-Fi) doivent respecter des normes spécifiques pour garantir une compatibilité et une performance optimales.
- Les **câbles de connexion** doivent correspondre aux caractéristiques physiques de l'interface (par exemple, un câble Ethernet Cat6 pour un port Ethernet Gigabit).

En résumé, les communications réseau dépendent de la compatibilité entre les interfaces des périphériques et les supports de transmission. Que ce soit via des câbles en cuivre, des fibres optiques, des câbles coaxiaux ou des liaisons sans fil, chaque support a ses avantages et ses applications spécifiques.

Voici une version plus concise :

**Supports réseau**
- **Types** : Cuivre (paires torsadées), fibre optique, coaxial, sans fil.
- **Caractéristiques** : Distance, environnement, débit, coût.
- **Utilisation** : Chaque support est adapté à des besoins spécifiques (ex : fibre pour longues distances, cuivre pour les LAN).

**Technologies réseau**
- **Ethernet** : Technologie LAN dominante, utilise des ports physiques pour connecter des périphériques.

**Commutateurs de couche 2**
- **Ports physiques** : Connectent les périphériques.
- **Interface SVI (VLAN1)** : Interface virtuelle pour la gestion à distance via IPv4/IPv6.
- **Remarque** : Pas besoin d'adresse IP pour la commutation, mais nécessaire pour la gestion à distance.

En résumé, les supports et technologies varient selon les besoins, et les commutateurs utilisent des interfaces virtuelles pour une gestion simplifiée.

---

## 2.7

### 2.7.2
Le **protocole DHCP (Dynamic Host Configuration Protocol)** est largement utilisé pour configurer automatiquement les adresses IPv4 sur les réseaux. 

**Avantages du DHCP**
- **Configuration automatique** : Attribue une adresse IPv4, un masque de sous-réseau, une passerelle par défaut et un serveur DNS aux périphériques finaux.
- **Gain de temps** : Évite la configuration manuelle, surtout dans les grands réseaux avec de nombreux utilisateurs et périphériques.
- **Réduction des erreurs** : Minimise les risques de duplication d'adresses IP ou de mauvaise configuration.

**Utilisation du DHCP**
- Sur un PC Windows, il suffit de sélectionner **Obtain an IP address automatically** et **Obtain DNS server address automatically** pour activer le DHCP.
- Le périphérique contacte alors un serveur DHCP pour obtenir les paramètres réseau nécessaires.

**Remarque**
- Pour IPv6, deux méthodes sont utilisées : **DHCPv6** et **SLAAC (Stateless Address Autoconfiguration)** pour l'allocation dynamique d'adresses.

En résumé, le DHCP simplifie la gestion des adresses IP et est essentiel pour les réseaux modernes.

---

### 2.7.4

**Configuration de l'interface de commutateur virtuelle :** conf t, int vlan 1, ip address 192.168.1.20 255.255.255.0, no shutdown, exit, ip default-gateway 192.168.1.1

---

## Résumé Chapitre 2
### **Systèmes d'exploitation et interfaces de commande**
- Tous les périphériques réseau et finaux nécessitent un **système d'exploitation (SE)**.
- L'interaction avec le SE se fait via une **interface de ligne de commande (CLI)**, permettant d'exécuter des commandes textuelles et d'afficher les résultats.

### **Modes de commande Cisco**
- **Mode d'exécution utilisateur** : Accès limité aux commandes de base.
- **Mode d'exécution privilégié** : Accès complet aux commandes de gestion et de configuration.
- **Mode de configuration globale** : Permet d'accéder à des sous-modes de configuration spécifiques, comme :
  - **Mode de configuration de ligne** : Pour configurer les lignes de console ou d'accès distant.
  - **Mode de configuration d'interface** : Pour configurer les interfaces réseau.

### **Syntaxe des commandes**
- Chaque commande Cisco a une syntaxe spécifique et ne peut être exécutée que dans le mode approprié.

### **Configuration de base**
- **Nom de l'appareil** : La première commande de configuration doit attribuer un nom unique (nom d'hôte).
- **Mots de passe** : Configurer des mots de passe hiérarchiques pour limiter l'accès administratif.
- **Bannière** : Ajouter une bannière pour avertir que l'accès est réservé au personnel autorisé.

### **Fichiers de configuration**
- **running-config** : Configuration active en mémoire, modifiable mais non sauvegardée.
- **startup-config** : Configuration sauvegardée, chargée au démarrage.
- Les configurations peuvent être archivées dans un document texte.

### **Adresses IP et DHCP**
- **Adresses IPv4** : Configurées manuellement ou automatiquement via **DHCP**.
- **DHCP** : Simplifie la configuration réseau en attribuant automatiquement les adresses IP, masques de sous-réseau, passerelles par défaut et serveurs DNS.
- **Interface SVI** : Sur les commutateurs, une adresse IP est configurée sur l'interface virtuelle (VLAN 1) pour la gestion à distance.

### **Commandes de vérification**
- **show ip interface brief** : Vérifie l'état des interfaces sur les commutateurs et routeurs.
- **ping** : Teste la connectivité vers d'autres périphériques ou sites web.

En résumé, la gestion des périphériques réseau via Cisco IOS implique l'utilisation de modes de commande spécifiques, la configuration de base (nom, mots de passe, bannière), et l'utilisation de commandes pour vérifier et tester la connectivité. Le DHCP simplifie la configuration des adresses IP, tandis que les fichiers de configuration permettent de sauvegarder et archiver les paramètres réseau.

---

