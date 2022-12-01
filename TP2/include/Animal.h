//
//  Animal.h
//  TP2
//
//  Created by Mouaz Saadaoui on 29/11/2022.
//

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include "Diet.h"
#include "Species.h"

using namespace std;

/**
 * Animal : classe qui hérite de la classe Species
 */
class Animal : public Species
{
    public:
        // ctors
        Animal();
        Animal(Diet p_diet);
    
        // dtor
        virtual ~Animal();
    
        // Getters Setters
        string getSpecie();
        void setSpecie(string p_species);
        string getNameDiet();
        void setNameDiet(string p_diet);
        string getQuantityDiet();
        void setQuantityDiet(string p_diet);
        string getAnimalName();
        void setAnimalName(string p_AnimalName);

    protected:

    private:
        // define attributes
        string m_species;
        Diet m_diet;
        string m_animalName;
};

#endif // ANIMAL_H

