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

**La commande ***write***permet de sauvegarder la configuration effectué**
