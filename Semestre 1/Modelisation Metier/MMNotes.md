# 16.09.24

- **Introduction UML :**
  - **Système informatique :** ensemble des actifs matériels et logiciels permettant à l’organisation d’automatiser le traitement de l’information
  - **Système d’information :** intervient entre les systèmes de pilotage et opérant. Il collecte, stocke, transforme et diffuse des données et informations dans le système opérant et de pilotage
  - **Système de pilotage :** contrôle et pilote le système opérant. Il se situe à la tête du système
  - **Système opérant :** permet la transformation de l’information pour l’objectif de la restituer à la bonne personne. Il correspond aux différents services d’une entreprise
- **Composant du système d’information :**
  - **Matériel IT :** ordinateurs, serveurs, ….
  - **Logiciels :** OS, app, progiciels, bdd
  - **Données :** informations stockée et traitée par le SI
  - **Réseaux :** permet aux composant du SI de communiquer
  - **Ressources humaines :** gestionnaires du SI, analystes, développeurs, utilisateurs finaux
- **Niveaux d’abstraction :**
  - **Conceptuel :** qu’est-ce qu’on manipule, que veut-on faire
  - **Organisationnel, logique :** comment structure ces données, qui fait quoi, ou et quand
  - **Physique :** ou les stocker (bdd), comment (matériel)
- **UML :**
  - **Définition :** langage de modélisation basé sur l’approche d’objet, standardisé par OMG (Open Management Group), consortium de 800 uni, entreprise, etc
  - **14 Diagrammes (séparées en 2 cat.) :** diagrammes de structure, diagrammes de comportement
  - **Symboles :** chaque symbole représente un concepts
- **Concepts objets :**
  - **Objet :** entité identifiable dans le monde réel - physique ou pas
  - **Abstraction :** comprendre le concept et sortir du support (ma définition)
  - **Classes d’objets :** ensemble d’objets similaires (un niveau au-dessus)
  - **Encapsulation :** masquer les attributs
  - **Spécialisation et généralisation :** sous-classe spécialise la sur-classe
  - **Héritage :** transmission de propriété entre une classe et ses sous-classes
  - **Abstraite et Concrètes :** classes avec instance = concrètes, classes sans instance directe = abstraites
  - **Polymorphisme :** objets similaires, comportements différents
  - **Composition :** un objet peut être complexe, composition forte ou faible
  - **Stéréotype en UML :** permet de définir le type des classes
- **Modèle :**
  - **Définition :** représentation simplifiée et abstraite d’un système, d’un objet, d’une situation réelle, en excluant certains détails qui n’influence pas de manière significative
  - **Perspective précise, objectif précis**
  - **Permet de :** décrire des systèmes complexes
  - **Fait appel à :** des concepts, une notation et des techniques de modélisation
  - **Représenté par un diagramme; pas un dessin illustrait**
- **Intérêt :** représentation visuelle simple, langage standardisé, technique éprouvées, concepts similaires, même notation entre système et métier
- **BUC, BAD, BOM, BSD :** utilisation, activité, de classe, de séquence
- **Processus métier :**
  - **Externe :** intervenants externes, représente le « quoi », utilisation métier
  - **Interne :** réalisait en interne des processus externes, représente le « comment », modèle objets « métier »
- **Business Use Case (BUC) :** permet de représenter les activités existantes et les besoins du domaine étudié, comprend un schéma et une description textuelle, en cas d’utilisation métier il se doit de fournir une valeur observable a un acteur métier
- **BUC vs UC :** acteur principal a gauche, secondaire a droite

---

# 18.09.24

**Qu’est-ce que l’informatique de gestion :**

- Domaine informatique qui se concentre sur l’utilisation des technologies informatique afin de gérer et soutenir les operations, processus et décision des entreprises. Le but étant d’améliorer l’efficacité, la productivité et la prise de décisions en exploitant les avantages de l’informatique

**Entreprise :**

- **Définition :** unité institutionnelle mue par un projet décliné en stratégie, en politiques et en plans d’actions, dont le but est de produire et de fournir des biens et services à destination d’un ensemble de client
- **3 couches :** Décision, Gestion, Production
- **Processus :** enchainement ordonné d’opérations

**Logiciel :** ensemble de processus nécessaire au fonctionnement d’un système informatique, structurées en fichiers
**Application :** programme conçu pour répondre un besoin spécifique
**Client :** origine (client-serveur), permet aux utilisateurs d’accéder aux fonctionnalités, contient au minimum les interfaces utilisateurs

**Client lourd :**

- Regroupe toutes les applications classiques
- Installé sur la machine cible
- Nécessite une installation

**Client léger :**

- Existe depuis l’avènement d’Internet (1990-2000)
- Utilisé à travers un navigateur
- Aucune installation, une URL suffit

**Client riche :**

- Existe depuis 2002 pour améliorer les interactions « homme-machine » avec les applications web
- Utilisé dans un navigateur
- Aucune installation, une URL suffit

**Client embarqué :**

- Utilisé dans un environnement hôte
- Aucune installation

**Exercice :**

- Installation : lourd, embarqué
- Maintenance : lourd, riche, léger, embarqué
- Portabilité : riche, léger
- Performance : lourd

---

# **23.09.24**

**Mini cas 1**

**Enoncé du cas :
Vous êtes informaticien au sein de la banque CASH SA. Le métier de base de cet établissement est la gestion de fortune. Cependant, au vu des conditions du marché, de plus en plus de clients désirent placer leur argent dans la "pierre", car ça leur semble actuellement plus sûr que la bourse. La demande de financement hypothécaire est donc de plus en plus fréquente et la banque ne possède pas encore d'application ad-hoc. Les applications informatiques sont, pour des raisons de confidentialité, développées en interne. Votre responsable vous a chargé du développement de l'application "crédits hypothécaires" qui devront s'intégrer à l'ensemble de nos autres applications. Pour le développement de votre application, vous devez utiliser, dans la mesure du possible, les données déjà présentes dans les bases de données existantes.**

**Les acteurs intervenants dans une demande de crédit hypothécaire sont :**

**Le client**
Remplit une demande de crédit, soit en ligne, soit sur un formulaire qu'il envoie ou apporte à son gérant à la banque.

**Le gérant**

- Vérifie s’il s’agit d’un nouveau client. Si c’est le cas celui-ci devra être créé dans le système et utilisant le module "création client".
- Enregistre la demande de crédit en complétant les informations du client

**Le collaborateur du service crédit**

- Reçoit la demande du gérant
- Il peut octroyer le crédit sans en référer au responsable des crédits jusqu'à un montant de CHF 500'000.--.
- Le responsable des crédits hypothécaires
- Intervient lorsque le crédit est supérieur à CHF 500'000.--.
- Il peut octroyer les crédits jusqu'à CHF 1'000'000.--.

**La commission des crédits**

- Les montants supérieurs à CHF 1'000'000.-- sont autorisés par décision de la commission des crédits.
- Toutes les informations transitent par le collaborateur du service des crédits. La commission ne s’adresse jamais directement au client.

**L'acceptation ou le refus du crédit est toujours signifié au client, par le collaborateur du service des crédits qui a traité la demande, par courrier recommandé avec accusé-réception.**

**Le domaine étudié est : Le domaine étudié concerne l’agence bancaire à laquelle le client s’est adressé, la commission des crédits est externe au domaine.**

**A faire :**

**Réaliser le Business Use Case du cas décrit**

**Quel type de logiciel client proposez-vous pour les personnes suivantes? Justifiez votre réponse !**
- Le demandeur du crédit
- Le personnel de CASH SA

**Pour vos réponses en a) et en b), les critères suivants sont-ils favorisés (oui, non et pourquoi) ?**

```
- La performance
- La portabilité
- La maintenance
- La sécurité
```

# **25.09.24**

**TP1**

| ``           | Lourd | Riche   | Leger | Embarqué |
| ------------ | ----- | ------- | ----- | --------- |
| Install      | oui   | non     | non   | non       |
| Maintenance  | oui   | non     | non   | (non)     |
| Portabilité | non   | oui     | oui   | oui       |
| Performance  | oui   | oui/non | non   | oui       |

* **Architectures :**
  * **Standalone :** Fonctionne par lui meme
  * **Client-serveur (2 tiers) :** Un client et un serveur, le logiciel est subdivisé entre les trucs installé et le trucs en ligne/donnée/base de données
  * **Client-serveur (n tiers) :** Comme client serveur mais on passe par plusieurs serveurs
  * **Architecture peer-to-peer :** Client-Client, transfère direct de fichier
  * **Avantages et inconvénients des architectures :**
    * **Standalone :**
      * **Avantages :** indépendant, fiable, un seul logiciel
      * **Inconvénients :** partage de données « difficile »
    * **Client-serveur (2 tiers) :**
      * **Avantages :** partage de données, serveur proche des données
      * **Inconvénients :** plusieurs logiciels, plusieurs environnement, dépendant d’un noeud central qui doit assurer la disponibilité et le load-balancing
    * **Peer-to-peer :**
      * **Avantages** : décentralisé
      * **Inconvénients** : fortement dépendant des utilisateurs, ne fonctionne pas sans une « deuxième » personne, peer to peer comprend le faites qu’il est au moins 2 personnes

---

# **02.10.24**

**4 Types de clients :**

* **Lourd :** installé
* **Riche :** appli web
* **Leger :** site web simple
* **Embarqué :** a l’intérieur d’un autre logiciel

**3 Types de architecture :**

* Standalone
* Peer-to-peer
* Serveur n-tiers

**Progiciels :** outil spécifique pour un métier donné

**ERP**  **(E**ntreprise **R**essources **P**lanner **) :** ensemble de programme non spécifique au métier

* Employés
* Stocks
* Ressources financières
* Clients
* Fournisseurs

**Critères de comparaison :**

* Performance, Efficacité
* Interface, Facilité
* Efficience
* Sécurité
* Portabilité
* Fournisseur

**Normes : **défini par une entité

* ISO, Internation Standardized Organization

**Standard :** sélection naturel des outils qui marchent bien

**Certification :** entreprise qui va venir valider que vous suivez bien les normes

**Licences :**

* Propriétaires
* Gratuites (Freeware)
* Libres (Open Source)

**Formes :**

* Installé
* Saas (Software as a Service), PaaS (Platform as a Service), IaaS (Infrastructure as a Service)

**TP4 :**

* WinBiz : propriétaire, installé et cloud
* Crésus Compatibilité : propriétaire, installé et cloud
* WinEUR : propriétaire, installé et cloud
* Winzip : propriétaire
* 7zip : libre
* Avast : gratuit

**Business analyse :** lien entre client et dev

---

# **07.10.24**

**BUC :** buisness use case, comprendre le fonctionnement de l’entreprise, mettre en evidence les redondances

**BAD :** business activity diagramme, séparer colonne par acteurs, cf. Mini-Cas 2

**Redondances :** recrutement RH et Service Informatique

**Goulot d’entrainement :** processus a petite cadence qui bloque le parallélisme

**Diagramme d’activité :** état, activité, flux, point de décision : barre de synchronisant d’entrée été parallélisme de sortie, fusion puis division

**Acteurs externes :** pas d’acitivités, seulement acteur principal

**Flow de base :** tout se déroule sans problème

**Flow alternatif :** les si, tout ne se déroule pas comme prévu

**Déclencheur : toujours client externe**

---

# **09.10.24**

**Buisness Analyse :**

* Définir les besoins
* Proposer des solutions conformes
* Maitrise du budget
* Adaptabilité
* Plus de perf. moins de cout
* Faciliter la collaboration entre partie prenantes

**BPM (Business Process Management) :** Vue d’ensemble des processus métier

1. Interview avec les parties prenantes
2. Representation (modèles) schématique des processus
3. Tester les modèles
4. Etablir des indices de performance (KPI)
5. Optimisation du processus

**Design Thinking :** implique les usagers dans un processus de co-créativité

1. Empathie
   1. Interroger les
   2. personnes
   3. concernées pour
   4. comprendre ce qu’il
   5. fait, pense, ressent:
      1. De quoi a-t-il besoin?
      2. Pour quelles raisons?
      3. Ses ressources & contraintes?
      4. Ses objectifs et priorités?
2. Définition
   1. Trouver, synthétiser et cadrer le problème:
      1. Pourquoi innover?
      2. Quels sont les objectifs?
      3. Quels sont les résultats attendus?
3. Imagination
   1. Générer des idées/solutions (Brainstorming)
   2. Oublier les contraintes
   3. Trouver les « pires idées »
   4. Multiplier les pistes
   5. Quels sont les souhaits dans un monde idéal?
4. Prototyper
   1. Faire converger les pistes:
      1. Prototyper et expérimenter différentes possibilités
      2. Créer des « storytelling »
5. Tester
   1. Faire un retour aux personnes concernées:
   2. Valider la compréhension du problème initial
      1. • Est-ce que de nouveaux problèmes en ressortes?
   3. Meilleure piste à suivre?
6. Recommencer

---

# **16.09.24**

**Business Analyst**

**Design Thinking**

**Business Management Process**

**UX Design, 7 règles**

**UX Design : questions à se poser**

* Qui ? Pietons, Velos
* Quand ? Selon Météo
* Quoi ? Chemin a prendre
* Pourquoi ? Plus pratique
* Ou ? Ou il y a une barriere
* Comment ? En passant a cote a force on crée un passage

**Adéquation aux taches de l’utilisateur :** Adapter le logiciel aux taches que l’utilisateur souhaite accomplir

* Indiquer a l’utilisateur s’il est adapté pour lui
* Priorité aux besoins plutôt qu’a la technologie
* Indique a l’utilisateur ce qui lui est nécessaire pour aller à l’étape suivante
* Propose des valeurs par défaut pertinente

**Caractère auto descriptif :** L’utilisateur sait sans ambiguïté a quelle étape de l’interaction ils se situent, quelles actions peuvent être réalisées et de quelle manière elles peuvent être realisées

* Documentation accessible à tous
* Localiser et mettre en evidence l’information
* Indications visuelles et vocabulaire familier
* Indique l’avancement d’un traitement et quand l’utilisateur doit intervenir

**Conformité aux attentes de l’utilisateur :** Comportement du logiciel prévisible en fonction du contexte d’utilisation et des conventions

* Etapes cohérentes et adaptées (accessibilité) pour accomplir une tache
* Retour d’information sur les actions
* Coherent ou different selon les fonctionnalités
* S’adapte aux besoins de l’utilisateur

**Facilité d’apprentissage :** Réduit le besoin d’apprentissage et fourni une assistance quand c’est nécessaire

* Facilite la découverte d’information
* Faciliter l’exploration
* Retour aux utilisateurs

**Contrôle utilisateur :** L’utilisateur garde le contrôle de l’interface utilisateur et des interactions

* Interrompre ou reprendre une tache
* Flexibilité - pouvoir choisir l’ordre les moyens et le rythme des interactions
* Personnaliser ou non l interface

**Robustesse face aux erreurs d’utilisation :** Aider l’utilisateur à éviter les erreurs, les traiter ou aider à corriger

* Prévenir les erreurs
* Tolérer les erreurs de l’utilisateur
* Corriger les erreurs

**Engagement utilisateur :** presenter les fonctions et informations de manière engageantes et motivante pour favoriser l amelioration du logiciel

* Motiver l’utilisateur
* Fiabilité du système
* Impliquer l’utilisateur
*

**30.10.24**

**Prototype**

**Types de prototypes :**

* **Horizontal**
  * Correspond à la couche de surface du logiciel homme-machine,** **
  * Affichage des elements mais rien de fonctionnel
  * Démontre l’usabilité
  * **Wireframe :** squelette du programme sans contenu, démontre globalement le produit
* **Vertical**
  * Correspond à la mise en oeuvre d’un ensemble cohérent de fonctionnalités
  * Déroule complètement une tache significative du logiciel
  * Permet de tester un scenario ou une fonction
* **Evolutif**
  * Peut-être utilisé plusieurs fois
  * Peut-être utilisé dans le produit final
  * Opposé au prototype « jetable »
* **Proof of concept**
  * « Preuve de concept »
  * Permet d’évaluer la faisabilité d’un projet
  * Version qui permet de se faire une idée du produit, pas destiné à être commercialisé
* **Minimum Viable Product**
  * Produit minimum viable
  * Permet de démontrer la viabilité d’un projet
  * Versions du produit destinée à être commercialisée pour être testée par le client fina

---

# **30.10.24**

**Prototype**

**Types de prototypes :**

* **Horizontal**
  * Correspond à la couche de surface du logiciel homme-machine,
  * Affichage des elements mais rien de fonctionnel
  * Démontre l’usabilité
  * **Wireframe :** squelette du programme sans contenu, démontre globalement le produit
* **Vertical**
  * Correspond à la mise en oeuvre d’un ensemble cohérent de fonctionnalités
  * Déroule complètement une tache significative du logiciel
  * Permet de tester un scenario ou une fonction
* **Evolutif**
  * Peut-être utilisé plusieurs fois
  * Peut-être utilisé dans le produit final
  * Opposé au prototype « jetable »
* **Proof of concept**
  * « Preuve de concept »
  * Permet d’évaluer la faisabilité d’un projet
  * Version qui permet de se faire une idée du produit, pas destiné à être commercialisé
* **Minimum Viable Product**
  * Produit minimum viable
  * Permet de démontrer la viabilité d’un projet
  * Versions du produit destinée à être commercialisée pour être testée par le client final

---

# **18.11.24**

**Mutiplicité :** * (Aucune ou plusieurs), 0..1 (Aucune ou une instance), 1 (Une instance exactement), 1..* (Une ou plusieurs instances, au moins une)
