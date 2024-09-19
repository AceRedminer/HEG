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
