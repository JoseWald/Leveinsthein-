La distance de Levenshtein mesure le nombre minimal d'opérations nécessaires pour transformer une chaîne en une autre, où les opérations possibles sont :

    Insertion (ajouter un caractère),
    Suppression (supprimer un caractère),
    Substitution (remplacer un caractère).

L'algorithme calcule cette distance de manière symétrique, en comparant les deux chaînes caractère par caractère. L'ordre dans lequel tu fournis les chaînes ne devrait donc pas influencer le résultat.

exemple:
    string1 = roman
    string2 = roman
    =>Distance de Leveinsthein = 0
--------------------------------------
    string1 = batman
    string2 = superman

    Substituer 'b' par 's' → "satman".
    Substituer 'a' par 'u' → "sutman".
    Supprimer 'p' → "suman".
    Insérer 'e' après 'u' pour former "superman".

    =>Distance de Leveinsthein = 6

Si vous êtes curieux à en savoir plus , je vous invite à cliquer ce lien:
https://fr.wikipedia.org/wiki/Distance_de_Levenshtein
