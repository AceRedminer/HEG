# Entreprise Connecté

## 20.02.25

### RIP

**Distance administrative :** 120
**Nombre de saut max :** 15

**Commandes RIP :**
- router rip
- version 2
- network x.x.x.x
- no auto-summary
- passive interface fa0/1/0
- redistribute eigrp 65100 metric 1-5
- default-information originate (seulement pour le routeur le plus proche de RC)

**Commandes EIGRP :**
- redistribute rip metric 10000 100 255 1 1500

---

## 06.03.25

**Commandes hash :**
- enable algorithm-type x (md5, scrypt, sha256) secret cisco
- interface, split horizon

---

## 13.03.25

**Commandes DHCP :**
- ip dhcp excluded-address 172.16.0.1 172.16.0.77   
- ip dhcp pool LAN_A
- netowrk x.x.x.x x.x.x.x
- default-router 172.16.0.1
- dns-server 10.136.232.240 10.136.232.250
- lease J H M
- domain-name LAN_A.ch

**Snooping :** 
- ip dhcp snooping
- int G0/0, ip dhcp snooping trust
- int range f0/5 - 24, ip dhcp snooping limit rate 6
- ip dhcp snooping vlan 5,10,50-52

---

## 03.04.25

**Regles Pare-feu :**
- access-list (numero) (action : permit, deny, remark) (condition : 172.16.0.0 0.0.0.255, 10.1.2.7 0.0.0.0, host 10.1.2.7, 0.0.0.0 255.255.255.255, any)
- int, ip nat inside (prive), ip nat outside (routeur exterieur) 
- ip nat inside source list 1 int G0/0 overload
- route def

---

## 08.05.25

### M5Stack :

**digitalRead(pin_number) :** retourne l'etat d'un PIN (HIGH, 1 or LOW, 0)
**customWrite(pin_number, value) :** ecrit l'etat (HIGH, 1 or LOW, 0) sur un PIN
**pinMode(pin_number, value) :** defini si c est un PIN entree ou sortie (IN, OUT)
**Authentification admin Server :** on va dans ServerX -> Services -> IoT

**Donner des droits d'utilisation IoT :** IoT Object -> Config -> Settings -> IoT Server, Assigner adresse IPv4 sur Interface

---

## 22.05.25

