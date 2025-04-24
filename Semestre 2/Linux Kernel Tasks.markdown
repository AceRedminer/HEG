# Instructions pour l'atelier Linux Kernel

Ci-dessous, les commandes nécessaires pour compléter les tâches décrites dans l'énoncé, avec leur explication.

"Explication" : Met à jour la liste des paquets et installe les outils nécessaires (`wget`, `xz`, `tar`, `find`, `diff`, `nano`) si manquants.
```bash
sudo apt update && sudo apt install wget xz-utils tar findutils diffutils nano
```

"Explication" : Télécharge l'archive compressée du code source du noyau Linux version 6.6 depuis le site officiel.
```bash
wget https://cdn.kernel.org/pub/linux/kernel/v6.x/linux-6.6.tar.xz
```

"Explication" : Décompresse l'archive `.xz` et extrait son contenu directement dans le répertoire personnel (`~/`) en utilisant un tuyau.
```bash
xz -dc linux-6.6.tar.xz | tar -x -C ~/
```

"Explication" : Recherche le fichier `ledtrig-usbport.c` dans l'arborescence du code source du noyau Linux.
```bash
find ~/linux-6.6 -name "ledtrig-usbport.c"
```

"Explication" : Crée une copie de sauvegarde du fichier `ledtrig-usbport.c` nommée `ledtrig-usbport.c.bak` dans le même répertoire.
```bash
cp ~/linux-6.6/drivers/leds/trigger/ledtrig-usbport.c ~/linux-6.6/drivers/leds/trigger/ledtrig-usbport.c.bak
```

"Explication" : Ouvre le fichier `ledtrig-usbport.c` dans l'éditeur `nano` pour rechercher « FIXME », corriger le code, et ajouter un commentaire.
```bash
nano ~/linux-6.6/drivers/leds/trigger/ledtrig-usbport.c
```

"Explication" : Compare le fichier modifié avec la copie originale pour afficher les différences (ajouts/suppressions de lignes).
```bash
diff ~/linux-6.6/drivers/leds/trigger/ledtrig-usbport.c ~/linux-6.6/drivers/leds/trigger/ledtrig-usbport.c.bak
```