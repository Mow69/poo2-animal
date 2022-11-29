//
//  main.cpp
//  TP2
//
//  Created by Mouaz Saadaoui on 29/11/2022.
//

#include <iostream>
#include "Lamp.h"
#include "Animal.h"

using namespace std;


int main()
{
    /*
    * POO Training with Hello World and Lamp object
    cout << "Hello world!" << endl;
    Lamp *l1 = new Lamp( );
     */
    
    /*
    * Test of Animal creation and Diet affectation
    *
    */
    // Test animal creation
    Animal *girafe = new Animal();
    Animal *lion = new Animal();
    
    // Girafe :
    
    // override nameDiet
    string dietName = "*Pizzavore*";
    girafe->setNameDiet(dietName);

    // Default animalName
    cout << "Mon animal par défaut est un " << girafe->getAnimalName() << endl;
    
    // Override animalName
    girafe->setAnimalName("*Girafe*");
    cout << "Mon animal actuel est une " << girafe->getAnimalName() << endl;

    // Test default value of Diet, and creation of Diet in Animal
    cout << "Le régime alimentaire par défaut est " << girafe->getNameDiet() << endl;

    // override nameDiet
    girafe->setNameDiet("*Végétarien*");
    cout << "Mon animal a le régime alimentaire " << girafe->getNameDiet() << endl;
    
    cout << "Mon animal a la capacité alimentaire d'être un  " << girafe->getQuantityDiet() << endl;


    // Test of species
    cout << "Le mode de reproduction par défaut de mon animal est " << girafe->getReproduction() << endl;
   
    // override reproduction's Species
    girafe->setReproduction("*Vivipare*");
    cout << "Le mode de reproduction de mon animal est " << girafe->getReproduction() << endl;
    
    cout << "Le pelage de mon animal est de type " << girafe->getCoat() << endl;
    cout << "Le mode de locomotion de mon animal est " << girafe->getLocomotion() << endl;

    
    // Lion :
        
    // override nameDiet
    lion->setNameDiet(dietName);

    // Default animalName
    cout << endl << "Mon animal par défaut est un " << lion->getAnimalName() << endl;

    // Test default value of Diet, and creation of Diet in Animal
    cout << "Le régime alimentaire par défaut est " << lion->getNameDiet() << endl;

    cout << "Mon animal a la capacité alimentaire d'être un  " << lion->getQuantityDiet() << endl;

    // override reproduction's Species
    lion->setReproduction("*Mamifère*");
    cout << "Le mode de reproduction de mon animal est " << lion->getReproduction() << endl;
       
    cout << "Le pelage de mon animal est de type " << lion->getCoat() << endl;
    cout << "Le mode de locomotion de mon animal est " << lion->getLocomotion() << endl;
    

    

    return 0;
}


