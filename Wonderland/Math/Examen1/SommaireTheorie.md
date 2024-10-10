# Sommaire du polycopié Baillif
1. Division euclidienne (marche à suivre) : p.37
2. Lagrange : p.30
3. Résolution d'équation, factorisation, viète (delta) : p.29
4. Optmisation linéaire : p.27
# Lexique
1. Racines : intersection avec l'axe *x*, quand *y* vaut 0
# Théoremes importants
## Interpolation (savoir si un polynôme passe de degré *n* passe par *a* points)
1. Il faut minimum *n+1* points pour trouver un polynôme de degré *n*.

2. Pour un polynôme de degré *n* il existe au maximum *n* racines.

3. Par n+1 points distincts du plan, avec coordonées en x différentes pour chaque points, passe exactement un polynôme (à coefficients réels) de degŕe ≤ n
EX : A(x) degré 4, P(x) degré 4, passant par les mêmes 5 points, avec les coordonnées en x distinces, ils sont donc égaux.

4. Si deux polynôme de degrés différents se croisent en plus de points que le degré plus petit + 1, ils sont égaux.
EX : A(x) <= 3, B(x) <= 5, se croisent en 7 points, ils sont égaux.
## Lagrange
1. Pour vérifier si un polynôme P(x) est bien le polynôme qui passe par x nombres de points il suffit de tester P(xi) = yi, i étant un point, pour tout les points. Si les résultats sont bon alors P(x) est bien le polynôme qui passent par les points en questions (réf. Controle 1 Jour, 22-23, Exercice 1)
## Division euclidienne
1. P(a) = reste, pour P(x) divisé par (x - a), (x + a) -> (x - (-a)) -> P(-a) = reste
2. P(b) = 0, alors P(x) est divisble par (x - b), (x + b) -> (x - (-b)) -> P(-b) = 0
**Bonus** : (0,12),(1,0),(2,0),(3,0),(4,0),(5,12); Y a-t-il un polynôme de degré strictement plus petit que 3 qui passe par 4 points de la liste ? **Oui mais il peut prendre au max 2 points dont le *y* vaut 0**
# Injectif, Surjectif, Bijectif
**Injectif** : si des éléments distincts dans l'ensemble de départ A sont envoyés vers des éléments distincts dans l'ensemble d'arrivée B 
**Surjectif** : si chaque élément de l'ensemble d'arrivée B est atteint au moins une fois par un élément de l'ensemble de départ A
**Bijectif** : une fonction est bijective si elle établit une correspondance un-à-un entre les éléments de l'ensemble de départ et de l'ensemble d'arrivée, et si chaque élément de l'ensemble d'arrivée est atteint par au moins un élément de l'ensemble de départ
# Resolution de système
1. Système d'équation (réf. ExempleSystemeEquations.png)
2. Système d'inéquation :
    Inverser le symbole "<" est nécessaire lorsque vous multipliez ou divisez une inéquation par un nombre négatif. Cela change l'orientation de l'inéquation. Voici comment cela fonctionne :

    1. **Multiplication par un nombre négatif :**
    - Si vous multipliez ou divisez les deux côtés d'une inéquation par un nombre négatif, vous devez inverser le sens de l'inégalité.
    - Par exemple, si \(a < b\) et \(c < 0\), alors en multipliant les deux côtés par \(c\), l'inégalité devient \(ac > bc\).

    2. **Division par un nombre négatif :**
    - De manière similaire, si vous divisez les deux côtés d'une inéquation par un nombre négatif, vous devez inverser le sens de l'inégalité.
    - Par exemple, si \(a > b\) et \(c < 0\), alors en divisant les deux côtés par \(c\), l'inégalité devient \(a < b\).

    En résumé, lorsque vous effectuez une opération de multiplication ou de division par un nombre négatif, le sens de l'inégalité doit être inversé pour maintenir l'équivalence de l'inéquation. Cela garantit que les relations d'ordre entre les nombres sont préservées.

    EX :

    Considérons le système d'inéquations suivant :

    2x + y <= 5 
    x - y > -1

    Suivons les étapes pour résoudre ce système :

    1. **Écrire le système sous forme standard :**

    -2x - y >= -5 
    x - y > -1

    2. **Représentation graphique :**

    Vous pouvez représenter graphiquement ces inéquations sur un plan cartésien pour visualiser la région de solution.

    3. **Isoler les variables :**

    y <= -2x + 5
    y < x + 1

    4. **Trouver les intervalles de validité :**

    Pour la première inéquation, \(y\) doit être inférieur ou égal à \(-2x + 5\), ce qui signifie que la région située sous la droite \(y = -2x + 5\) est incluse.

    Pour la deuxième inéquation, \(y\) doit être strictement inférieur à \(x + 1\), ce qui signifie que la région située en dessous de la droite \(y = x + 1\) est incluse.

    5. **Trouver la solution commune :**

    La solution commune est la région du plan cartésien située sous la droite \(y = -2x + 5\) et en même temps en dessous de la droite \(y = x + 1\).

    6. **Vérifier la solution :**

    Si possible, vérifiez que les valeurs que vous avez trouvées satisfont bien toutes les inéquations du système.

    En résumé, la solution de ce système d'inéquations est la région du plan cartésien située sous la droite \(y = -2x + 5\) et en même temps en dessous de la droite \(y = x + 1\).
