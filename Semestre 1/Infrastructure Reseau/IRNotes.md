# **23.09.24**

**Classes :**

* **A **:**** /8, 255.0.0.0, 10.x.x.x
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
* 2^n^ - 2

**Commandes Switch pour reset config :**

1. enable
2. write erase
3. reload

**Commandes de configuration :**

* **Hostname :**
  1. enable
  2. configure termina
  3. hostname *Sw_1_CV*
  4. exit
* **Password :**
  1. show running-config
  2. configure terminal
  3. line console 0 (line vty 0 15, line aux 0)
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

**Définir les protocoles de connexions a distance accepté par la machine**

1. enable
2. config
3. line vty 0 4
4. transport input all

**Mettre une adresse IP a une interface :**

1. enable
2. config
3. int vlan 1 (int fastEthernet 0/1/0 : Router)
4. ip address 10.136.75.161 255.255.255.224
5. no shutdown
6. (no IP address) en cas de mauvaise manip

**Mettre une adresse de passerelle par défaut (Switch) :**

1. enable
2. config
3. ip default-gateway 10.136.75.161
4. exit
5. write

**Configurer 2 sous-réseaux lors de l’accès vers le réseau cantonal :**

1. config
2. router eigrp 65200 (172.16) 65100 (10.136)
3. network 172.16.0.0
4. network 192.168.0.0
5. no auto-summary
6. redistribute static (uniquement celui qui fait le pont entre static et eigrp)

**IP Route (quand pas EIGRP, tout resesaux distant a X) :**

1. conf t
2. ip route 0.0.0.0 0.0.0.0 [addresse gateway]

**Loopback :**

1. enable
2. conf t
3. int loopback 1
4. ip address [adresse router du sous-reseaux supplementaire pour routeur]
5. no shutdown

**Creation de VLAN :**

1. conf t
2. vlan x
3. name xxx
4. end

**Affecter des ports a un VLAN :**

1. conf t
2. interface fa x/x
3. switchport mode access
4. switchport access vlan x
5. end

**Configurer une sous-interface VLAN :**

- Interface
  - config
  - interface 0/0
  - no shutdown
- Sous-interface
  - conf t
  - interface 0/0.1
  - descritpion VLAN_1 natif
  - encapsulation dot1q 1 native
  - ip addresse x.x.x.x x.x.x.x

**DHCP :**
- conf t
- interface gigabitEthernet 0/x
- ip helper-address *addresse réseaux cantonal*      

**VTP :**
- Server :
  - conf t
  - vtp domain exempledomaine
  - vtp mode server / client / transparent
  - exit
  - show vtp status
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

# 13.12.2024
## VTP
