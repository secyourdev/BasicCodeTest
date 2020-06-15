# BasicCodeTest
Logiciel basique pour faire des tests d'assurance sécurité.

## Gprof

Pour utiliser Gprof, il suffit d'exécuter les commandes suivantes :

```
make
./main
```

Utilisé le programme pour pouvoir générer le rapport de couverture.

```
gprof main gmon.out > rapport_gprof.txt
```

## Option Gprof2dot

### Prérequis

```
sudo apt-install -y python-pip graphviz
sudo pip install gprof2dot
```

### Utilisation

Pour générer le rapport au format png :

```
cat rapport_gprof.txt | gprof2dot | dot -Tpng -o graphe.png
```
