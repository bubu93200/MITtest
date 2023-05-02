# compilation de la librairie MuseScore  
Pour que cela fonctionne il a fallu modifier le fichier style.h du github MuseScore  

Tout d'abord il faut compiler MuseScore pour obtenir une version executable en mode debug depuis Visual Studio  

# Modification de style.h  
Dans Github Musescore, il faut modifier style.h qui est dans le répertoire libmscore sinon, il reste 3 erreurs de compilation que l'on n'arrive pas à supprimer  

Les 3 lignes suivantes sont à passer en commentaire :    
ligne 1449: //std::array<QVariant, int(Sid::STYLES)> _values;  
ligne 1450: //std::array<qreal, int(Sid::STYLES)> _precomputedValues;  
Ligne 1461: //qreal pvalue(Sid idx) const { return _precomputedValues[int(idx)]; }   

# options à mettre dans Visual Studio   
