# **23.09.24**

**Classes :**

* **A :** /8, 255.0.0.0, 10.x.x.x
* **B :** /16, 255.255.0.0, 172.16.0.x0 -> 172.31.255.255
* **C :** /24 255.255.255.0, 192.168.x.x
* **D :** 224.x.x.x

**Adresses spéciales :**

* **Bouclage :** 127.0.0.1, adresse locale de l’appareil dans son réseau ou il n’y a que lui
* **Adresse link-local :** 169.254.0.0/16

**Types d’adresses :**

* Adresse réseau
* Adresse hote
* Adresse broadcast

**Formules :**

* 2^n
* 2^n - 2

**Commandes Switch pour reset config :**

1. enable
2. write erase
3. reload

**Ajouter description pour l'interface :**

1. enable
2. config
3. description blablabla
4. ip address 192.168.1.6 255.255.255.0
5. no shutdown

**Commandes de configuration Switch :**

* **Hostname :**
  1. enable
  2. configure terminal
  3. hostname *Sw_1_CV*
  4. exit
* **Password :**
  1. show running-config
  2. configure terminal
  3. line console 0 (line vty 0 15)
  4. password *cisco*
  5. login

**Masquer mot de passes :**

1. enable
2. config
3. service password encryption

**Mettre un mot de passe admin :**

1. enable
2. config
3. enable secret *class*

**Mettre une adresse IP a une interface :**

1. enable
2. config
3. int vlan 1
4. ip address 10.136.75.161 255.255.255.224
5. no shutdown

**Mettre une adresse de passerelle par défaut :**

1. enable
2. config
3. ip default-gateway 10.136.75.161
4. write

**La commande** write **permet de sauvegarder la configuration effectué**

---

# **04.10.24**

**Backbone** : installation propre du fournisseur

**Types de RJ45 :**

* T568A
* T568B

**Connectique RJ45 A :**

1. **TD+**
2. **TD-**
3. **RD+**
4. **Not used by 10BASE-T**
5. **Not used by 10BASE-T**
6. **RD-**
7. **Not used by 10BASE-T**
8. **Not used by 10BASE-T**

**Connectique RJ45 B :**

1. **RD+**
2. **RD-**
3. **TD+**
4. **Not used by 10BASE-T**
5. **Not used by 10BASE-T**
6. **TD-**
7. **Not used by 10BASE-T**
8. **Not used by 10BASE-T**

**Interfaces :**

* **UTP**
* **MDI :** broches 1 et 2 pour la transmission, 3 et 6 pour la réception
* **MDIX :** MDI croisé

**Quand est-ce qu’on utilise croisé ou droit :**

* **Droit :**
  * Switch à ordi
  * Switch à routeur
* **Croisé :**
  * Switch a switch
  * Routeur a routeur
  * Routeur a ordi

**Exercice :**

* Switch :
  * 10.136.72.92
  * 255.255.255.192
  * 10.136.72.65
  * Mot de passe sur line console et line vty 0 15, *class*
  * Ping Ordi OK
* Ordi :
  * 10.136.72.93
  * 255.255.255.192
  * 10.136.72.65
  * 10.136.232.245
  * 10.136.232.250
  * Ping Switch OK

---
