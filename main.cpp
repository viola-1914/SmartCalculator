#include <iostream>
#include <cmath>

int main( int argv, char**argc){
    double nombre1, nombre2; // stokage des nombres
    char operation;
    double resultat;

   std::cout << "Entrez le premier nombre";
   std::cin>> nombre1;
   std:: cout << "entrez l'operation (+, -, *, /,sqrt, log, exp, sin, cos, tan)";
   std::cin >> operation;
    //std::cout << "Entrez le deuxième nombre : ";
    //std::cin >> nombre2;
     

    if ((operation == 's' || operation == 'c' || operation == 'e' ) || (operation == 'l' || operation == 't' ) ) {
        std::cout << "entrez l'angle en radians:" ;
        std:: cin >> nombre1;
    } else {
        std:: cout << "entrez le deuxieme nombre:";
       std:: cin >> nombre2;
    }

    switch (operation) {
        case '+':
            resultat = nombre1 + nombre2;
            break;
        case '-':
            resultat =  nombre1- nombre2;
            break;
        case '*':
            resultat =  nombre1*nombre2 ;
            break;
        case '/':
            if (nombre2!= 0.0) {
                resultat = nombre1 / nombre2;
            } else {
                std::cerr << "Erreur : division par zéro" << std::endl;
                return 1;
            }
            break;
        case '^':
            resultat = std::pow(nombre1, nombre2);
            break;
        case 'r':
            if (nombre1>= 0.0) {
                resultat = std::sqrt(nombre1);
            } else {
                std::cerr << "Erreur : racine carrée d'un nombre négatif" << std::endl;
                return 1;
            }
            break;
        case 's':
            resultat = std::sin(nombre1); // Calculer le sinus
            break;
        case 'c':
            resultat = std::cos(nombre2); // Calculer le cosinus
            break; 
        case 't':
            resultat = std::tan(nombre2); // Calculer le cosinus
            break; 
        case 'l':
            if(nombre1 >0.0) {
                resultat = std::log(nombre1);
            }  else {
                std::cerr << "Erreur : le logarithme d'un nombre positif" <<std::endl;
                
                return 1 ;
            }  
            break; 
         case 'e':
            resultat = std::exp(nombre1); // Calculer l'exponentielle
            break;    

        default:
            std::cerr << "Opération inconnue" << std::endl;
            return 1;
    }

    // Afficher le résultat
    std::cout << "Résultat : " << resultat << std::endl;

    return 0;
}

    
