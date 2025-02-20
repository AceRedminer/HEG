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

**Commandes EIGRP :**
- redistribute rip metric x x x x 1500