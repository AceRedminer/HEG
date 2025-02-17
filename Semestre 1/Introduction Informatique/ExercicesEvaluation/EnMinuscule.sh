#!/bin/bash
#Le script suivant est destiné à examiner plusieurs méthode pour mettre
#des chaînes de caractères en minuscules dans une fonction.
#
#Le script n'a pas de paramètre

#On récupère la commande qui a lancé ce script
#Mais on supprimme le mot «COMMAND» suivi par
#un saut de ligne qui se trouve à
#son début.
typeset x="$(/bin/ps -o command -p $$)"
        x="${x##COMMAND?}"
        #Le premier mot de la ligne avant le blanc est
        #le nom du shell
        x="${x%% *}"
        #Le nom du shell est tout ce qui suit
        #le dernier oblique
        x="${x##*/}"
typeset -r NOM_SHELL="${x}"
unset x  #On n'a plus besoin de la variable x
echo "Le shell est «${NOM_SHELL}»"

#
#---------------------------------fonctions-------------------------------------------
#

#La fonction suivante permet de convertir un texte
#en minuscules. Cette fonction ne traite que les caractères
#du français.
#
#Pour faire cette transformation il est aussi possible
#d'utiliser les commandes suivantes:
#       «typeset -M tolower a="Chaine"»       en ksh
#ou
#       «a=${a,,?}»                           en bash > 4.0
#  
#La fonction a deux paramètres:
#        1) Le texte à convertir en minuscule
#        2) Un nom de variable qui contiendra le résultat
#           Attention: cette variable ne peut pas se nommer «enMinuscules_texteConverti»
function enMinuscules {
#set -x
    typeset  Texte=${1?"Le texte à convertir manque. Param 1 func «enMinuscules»"}
    typeset  -r NomVar=${2?"Le de la variable pour le résultat manque. Param 2 func «enMinuscules»"}

    typeset enMinuscules_texteConverti=""

    #On commence par supprimer le premier caractère du texte
    typeset PremierCar=${Texte#?} #Contient tout le texte sauf le premier car.
    #Puis on supprime du texte tous les caractères sauf le premier.
    PremierCar=${Texte%"${PremierCar}"} 

    while [[ ! -z "${Texte}" ]]
    do
        case ${PremierCar} in
           À) enMinuscules_texteConverti="${enMinuscules_texteConverti}à"
              ;;
           Â) enMinuscules_texteConverti="${enMinuscules_texteConverti}â" 
              ;;
           É) enMinuscules_texteConverti="${enMinuscules_texteConverti}é" 
              ;;
           È) enMinuscules_texteConverti="${enMinuscules_texteConverti}è" 
              ;;
           Ê) enMinuscules_texteConverti="${enMinuscules_texteConverti}ê" 
              ;;
           Ë) enMinuscules_texteConverti="${enMinuscules_texteConverti}ë" 
              ;;
           Î) enMinuscules_texteConverti="${enMinuscules_texteConverti}î" 
              ;;
           Ï) enMinuscules_texteConverti="${enMinuscules_texteConverti}ï" 
              ;;
           Ô) enMinuscules_texteConverti="${enMinuscules_texteConverti}ô" 
              ;;
           Û) enMinuscules_texteConverti="${enMinuscules_texteConverti}û" 
              ;;
           Ù) enMinuscules_texteConverti="${enMinuscules_texteConverti}ù" 
              ;;
           A) enMinuscules_texteConverti="${enMinuscules_texteConverti}a" 
              ;;
           B) enMinuscules_texteConverti="${enMinuscules_texteConverti}b" 
              ;;
           C) enMinuscules_texteConverti="${enMinuscules_texteConverti}c" 
              ;;
           D) enMinuscules_texteConverti="${enMinuscules_texteConverti}d" 
              ;;
           E) enMinuscules_texteConverti="${enMinuscules_texteConverti}e" 
              ;;
           F) enMinuscules_texteConverti="${enMinuscules_texteConverti}f" 
              ;;
           G) enMinuscules_texteConverti="${enMinuscules_texteConverti}g" 
              ;;
           H) enMinuscules_texteConverti="${enMinuscules_texteConverti}h" 
              ;;
           I) enMinuscules_texteConverti="${enMinuscules_texteConverti}i" 
              ;;
           J) enMinuscules_texteConverti="${enMinuscules_texteConverti}j" 
              ;;
           K) enMinuscules_texteConverti="${enMinuscules_texteConverti}k" 
              ;;
           L) enMinuscules_texteConverti="${enMinuscules_texteConverti}l" 
              ;;
           M) enMinuscules_texteConverti="${enMinuscules_texteConverti}m" 
              ;;
           N) enMinuscules_texteConverti="${enMinuscules_texteConverti}n" 
              ;;
           O) enMinuscules_texteConverti="${enMinuscules_texteConverti}o" 
              ;;
           P) enMinuscules_texteConverti="${enMinuscules_texteConverti}p" 
              ;;
           Q) enMinuscules_texteConverti="${enMinuscules_texteConverti}q" 
              ;;
           R) enMinuscules_texteConverti="${enMinuscules_texteConverti}r" 
              ;;
           S) enMinuscules_texteConverti="${enMinuscules_texteConverti}s" 
              ;;
           T) enMinuscules_texteConverti="${enMinuscules_texteConverti}t" 
              ;;
           U) enMinuscules_texteConverti="${enMinuscules_texteConverti}u" 
              ;;
           V) enMinuscules_texteConverti="${enMinuscules_texteConverti}v" 
              ;;
           W) enMinuscules_texteConverti="${enMinuscules_texteConverti}w" 
              ;;
           X) enMinuscules_texteConverti="${enMinuscules_texteConverti}x" 
              ;;
           Y) enMinuscules_texteConverti="${enMinuscules_texteConverti}y" 
              ;;
           Z) enMinuscules_texteConverti="${enMinuscules_texteConverti}z" 
              ;;
           #Il faut traiter spécialement les caractères \,$, et `
           #ainsi le double apostrophe afin
           #de pouvoir retourner correctement le texte
           #converti dans la commande «eval».
           #
           #Le texte converti est entouré par des doubles apostrophes
           #avant l'appel à la commande «eval», il faut donc
           #que ces caractères soit protégés par un contre-oblique
           #pour ne pas être interprétés par la commande «eval».
           #
           #Par contre lors de l'expansion de la variable «enMinuscules_texteConverti»
           #ces caractères ne sont pas interprétés.
           #
           #Ici, le double contre-oblique est utilisé pour en avoir
           #un seul lors de l'interprétation de cette ligne par le shell.
           \") enMinuscules_texteConverti="${enMinuscules_texteConverti}\\${PremierCar}" 
               ;;
           \`) enMinuscules_texteConverti="${enMinuscules_texteConverti}\\${PremierCar}" 
               ;;
           \$) enMinuscules_texteConverti="${enMinuscules_texteConverti}\\${PremierCar}" 
               ;;
           \\) enMinuscules_texteConverti="${enMinuscules_texteConverti}\\${PremierCar}" 
               ;;
           #Tous les caractères ne nécessitant pas de traitements
           #spéciaux.
           *)  enMinuscules_texteConverti="${enMinuscules_texteConverti}${PremierCar}" 
               ;;
        esac
        #On supprime le premier caractère du texte.
        Texte="${Texte#?}"
        PremierCar="${Texte#?}"
        PremierCar=${Texte%"${PremierCar}"} 
    done
    eval "${NomVar}=\"${enMinuscules_texteConverti}\"" 
}

#La fonction suivante met en minuscule en utilisant les expansions du
#shell qui sont:
#       «typeset -M tolower a="Chaine"»       en ksh
#ou
#       «typeset -l a="Chaine"»               en zsh
#ou
#       «a=${a,,?}»                           en bash
#  
#La fonction a deux paramètres:
#        1) Le texte à convertir en minuscule
#        2) Un nom de variable qui contiendra le résultat
#           Attention: cette variable ne peut pas se nommer «enMinusculesOpt_texteMinuscule»
#
#La fonction utilise la constante globale «NOM_SHELL» qui
#contient le nom de base du shell qui exécute ce script.
function enMinusculesOpt {
#set -x
    typeset  Texte=${1?"Le texte à convertir manque. Param 1 func «enMinusculesOpt»"}
    typeset  -r NomVar=${2?"Le de la variable pour le résultat manque. Param 2 func «enMinusculesOpt»"}
    
    #Contiendra la commande de transformation en minuscules. Il est préférable
    #d'évaluer une commande car autrement certains shell (le ksh notamment) analysent
    # des parties de l'instruction «case» qu'ils ne devraient en principe jamais
    #exécuter et provoquent une erreur.
    #
    #En définissant une commande, on n'a que des chaînes de caractères dans l'instruction
    #«case», ce qui évite ce problème. En effet, lors de l'évaluation par la commande
    #«eval», la chaîne de caractères sera adapté au Shell courant.
    typeset cmd
    case ${NOM_SHELL} in
        ksh)
             cmd="typeset -M tolower enMinusculesOpt_texteMinuscule=\"\${Texte}\""
             ;;
        zsh)
             cmd="typeset -l enMinusculesOpt_texteMinuscule=\"\${Texte}\""
             ;;
        bash)
             #La commande d'expansion en minuscule ne fonctionne
             #que depuis bash 4.0. On prend donc le permier chiffre de la
             #version du bash pour savoir si il est nécessaire de faire
             #appel à la fonction non optimisée.
             if [[ ${BASH_VERSION%"${BASH_VERSION#?}"} -lt 4 ]]
             then 
                cmd="enMinuscules \"\${Texte}\" enMinusculesOpt_texteMinuscule"
             else
                cmd="typeset enMinusculesOpt_texteMinuscule=\"\${Texte,,?}\""
             fi
             ;;
        *)   echo "Votre shell n'est pas «ksh», «zsh» ou «bash»."
             echo "Le traitement ne peut pas continuer (function «enMinusculesOpt»)."
             exit 1
             ;;
    esac
    eval "${cmd}"

    #Pour pouvoir resortir la valeur de la variable qui contient la transformation, il faut
    #encore supprimer la signification particulière des caractères qui ont
    #du sens entre des doubles apostrophes. Ces caractères sont: \`$ et aussi le double
    #apostrophe (").
    enMinusculesOpt_texteMinuscule="${enMinusculesOpt_texteMinuscule//\\/\\\\}"
    enMinusculesOpt_texteMinuscule="${enMinusculesOpt_texteMinuscule//\`/\\\`}"
    enMinusculesOpt_texteMinuscule="${enMinusculesOpt_texteMinuscule//\$/\\$}"
    enMinusculesOpt_texteMinuscule="${enMinusculesOpt_texteMinuscule//\"/\\\"}"

    eval "${NomVar}=\"${enMinusculesOpt_texteMinuscule}\"" 
}

#
#--------------------------Programme principal----------------------
#

typeset -r TEST1='DU TEXTE; \en `MAJUSCULE`: $i"ÂÀÊÈÉËÎÏÙÛ"'
typeset -r TEST2="L'apostrophe"
typeset texteMinuscule
typeset text2Minuscule
typeset text3Minuscule
typeset text4Minuscule
typeset opt="-E"

#Les lignes suivantes servent au test de la fonction «enMinuscule» et «enMinusculeOpt»
enMinuscules "${TEST1}" texteMinuscule
enMinuscules "${TEST2}" texte2Minuscule
enMinusculesOpt "${TEST1}" texte3Minuscule
enMinusculesOpt "${TEST2}" texte4Minuscule
if [[ ${NOM_SHELL} == "ksh" ]]
then
   #L'option -E qui supprime le sens des contre-obliques dans la chaîne
   #affichée par la commande «echo» n'est pas connue du ksh
   opt=""
fi
echo ""
echo "Texte à transformer en minuscules:"
echo "----------------------------------"
echo ${opt}  "${TEST1}"
echo ${opt}  "${TEST2}"
echo ""
echo "Test fait avec la fonction «enMinuscule»:"
echo "-----------------------------------------"
echo ${opt}  "${texteMinuscule}"
echo ${opt}  "${texte2Minuscule}"
echo ""
echo "Test fait avec la fonction «enMinusculeOpt»:"
echo "--------------------------------------------"
echo ${opt}  "${texte3Minuscule}"
echo ${opt}  "${texte4Minuscule}"

exit 0
