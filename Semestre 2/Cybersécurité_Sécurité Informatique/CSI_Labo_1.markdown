# Instructions pour l'atelier Linux Kernel

Ci-dessous, les commandes nécessaires pour compléter les tâches décrites dans l'énoncé, avec une explication de la commande sans les paramètres.

"Explication" : apt (met à jour paquets et installe logiciels)
```bash
sudo apt update && sudo apt install wget xz-utils tar findutils diffutils nano
```

"Explication" : wget (télécharge fichier depuis URL)
```bash
wget https://cdn.kernel.org/pub/linux/kernel/v6.x/linux-6.6.tar.xz
```

"Explication" : xz (décompresse fichier .xz)
```bash
xz -dc linux-6.6.tar.xz | tar -x -C ~/
```

"Explication" : tar (extrait archive)
```bash
xz -dc linux-6.6.tar.xz | tar -x -C ~/
```

"Explication" : find (recherche fichier dans arborescence)
```bash
find ~/linux-6.6 -name "ledtrig-usbport.c"
```

"Explication" : cp (copie fichier)
```bash
cp ~/linux-6.6/drivers/leds/trigger/ledtrig-usbport.c ~/linux-6.6/drivers/leds/trigger/ledtrig-usbport.c.bak
```

"Explication" : nano (ouvre éditeur texte)
```bash
nano ~/linux-6.6/drivers/leds/trigger/ledtrig-usbport.c
```

"Explication" : diff (compare différences entre fichiers)
```bash
diff ~/linux-6.6/drivers/leds/trigger/ledtrig-usbport.c ~/linux-6.6/drivers/leds/trigger/ledtrig-usbport.c.bak
```