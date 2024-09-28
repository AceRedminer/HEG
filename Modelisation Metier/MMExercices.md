# **23.09.24**

**Mini cas 1**

**Enoncé du cas :**

Vous êtes informaticien au sein de la banque CASH SA. Le métier de base de cet établissement est la gestion de fortune. Cependant, au vu des conditions du marché, de plus en plus de clients désirent placer leur argent dans la "pierre", car ça leur semble actuellement plus sûr que la bourse. La demande de financement hypothécaire est donc de plus en plus fréquente et la banque ne possède pas encore d'application ad-hoc. Les applications informatiques sont, pour des raisons de confidentialité, développées en interne.

Votre responsable vous a chargé du développement de l'application "crédits hypothécaires" qui devront s'intégrer à l'ensemble de nos autres applications.

Pour le développement de votre application, vous devez utiliser, dans la mesure du possible, les données déjà présentes dans les bases de données existantes.

**Les acteurs intervenants dans une demande de crédit hypothécaire sont :**

**Le client**

Remplit une demande de crédit, soit en ligne, soit sur un formulaire qu'il envoie ou apporte à son gérant à la banque.

**Le gérant**

- Vérifie s’il s’agit d’un nouveau client. Si c’est le cas celui-ci devra être créé dans le système et utilisant le module "création client".
- Enregistre la demande de crédit en complétant les informations du client
- Reçoit la demande du gérant
- Il peut octroyer le crédit sans en référer au responsable des crédits jusqu'à un montant de CHF 500'000.--.

**Le responsable des crédits hypothécaires**

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

- La performance
- La portabilité
- La maintenance
- La sécurité

---

# **26.09.24**

Assuré -> ( Demande de dédommagement ) -> Agent d’assurance / Assureur

**Flow de base :**

1. L’agent assurance reçoit la déclaration d’accident
2. L’agent accepte la déclaration
3. L’agent demande rappel
4. L’agent demande la facture
5. L’agent reçoit la facture
6. L’agent reçoit le rapport
7. L’agent effectue le paiement

**Flow alternatif :**

2a. L’agent refuse declaration
2a1. Fin use case
