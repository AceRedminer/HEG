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
- default-information originate

**Commandes EIGRP :**
- redistribute rip metric 10000 100 255 1 1500