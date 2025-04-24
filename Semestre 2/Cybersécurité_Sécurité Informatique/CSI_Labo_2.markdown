# Instructions pour l'atelier Gestion des droits d'accès Unix/Linux

Ci-dessous, les commandes nécessaires pour compléter les tâches décrites dans l'énoncé, avec une explication de la commande sans les paramètres.

"Explication" : mkdir (crée répertoire)
```bash
mkdir ~/Data
```

"Explication" : cd (change répertoire courant)
```bash
cd ~/Data
```

"Explication" : groupadd (crée groupe utilisateurs)
```bash
sudo groupadd secretariat
```

"Explication" : groupadd (crée groupe utilisateurs)
```bash
sudo groupadd ventes
```

"Explication" : useradd (crée utilisateur)
```bash
sudo useradd -m -g secretariat secretariat-1
```

"Explication" : useradd (crée utilisateur)
```bash
sudo useradd -m -g secretariat secretariat-2
```

"Explication" : useradd (crée utilisateur)
```bash
sudo useradd -m -g secretariat secretariat-3
```

"Explication" : useradd (crée utilisateur)
```bash
sudo useradd -m -g ventes ventes-1
```

"Explication" : useradd (crée utilisateur)
```bash
sudo useradd -m -g ventes ventes-2
```

"Explication" : useradd (crée utilisateur)
```bash
sudo useradd -m -g ventes ventes-3
```

"Explication" : mkdir (crée répertoire)
```bash
mkdir ventes
```

"Explication" : touch (crée fichier vide)
```bash
sudo touch ventes/Appe10ffre.docx
```

"Explication" : chown (change propriétaire fichier)
```bash
sudo chown ventes-1 ventes/Appe10ffre.docx
```

"Explication" : touch (crée fichier vide)
```bash
sudo touch ventes/ListePrix.xlsx
```

"Explication" : chown (change propriétaire fichier)
```bash
sudo chown ventes-2 ventes/ListePrix.xlsx
```

"Explication" : touch (crée fichier vide)
```bash
sudo touch ventes/ListeProduits.pdf
```

"Explication" : chown (change propriétaire fichier)
```bash
sudo chown ventes-3 ventes/ListeProduits.pdf
```

"Explication" : mkdir (crée répertoire)
```bash
mkdir secretariat
```

"Explication" : touch (crée fichier vide)
```bash
sudo touch secretariat/JoursVacances.xlsx
```

"Explication" : chown (change propriétaire fichier)
```bash
sudo chown secretariat-1 secretariat/JoursVacances.xlsx
```

"Explication" : touch (crée fichier vide)
```bash
sudo touch secretariat/ModeleLettre.docx
```

"Explication" : chown (change propriétaire fichier)
```bash
sudo chown secretariat-2 secretariat/ModeleLettre.docx
```

"Explication" : chgrp (change groupe fichier/répertoire)
```bash
sudo chgrp -R secretariat secretariat
```

"Explication" : chmod (change permissions fichier/répertoire)
```bash
sudo chmod -R g+rw secretariat
```

"Explication" : chgrp (change groupe fichier/répertoire)
```bash
sudo chgrp -R ventes ventes
```

"Explication" : chmod (change permissions fichier/répertoire)
```bash
sudo chmod -R g+rw ventes
```

"Explication" : mkdir (crée répertoire)
```bash
mkdir distribution
```

"Explication" : ln (crée lien symbolique)
```bash
ln ventes/ListeProduits.pdf distribution/backgroundits.pdf
```

"Explication" : chown (change propriétaire fichier/répertoire)
```bash
sudo chown -R $USER:www-data .
```

"Explication" : chmod (change permissions fichier/répertoire)
```bash
sudo chmod -R u+rwX,go-rwx .
```

"Explication" : chmod (change permissions fichier/répertoire)
```bash
sudo chmod -R go+r distribution
```

"Explication" : python3 (démarre serveur web)
```bash
sudo python3 -m http.server 80
```