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

## 06.03.25

**Commandes hash :**
- enable algorithm-type x (md5, scrypt, sha256) secret cisco
- interface, split horizon

## 13.03.25

**Commandes DHCP :**
- ip dhcp excluded-address 172.16.0.1 172.16.0.77   
- ip dhcp pool LAN_A
- netowrk x.x.x.x x.x.x.x
- default-router 172.16.0.1
- dns-server 10.136.232.240 10.136.232.250
- lease J H M
- domain-name LAN_A.ch