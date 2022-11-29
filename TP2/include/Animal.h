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

class Animal : public Species
{
    public:
        Animal();
        Animal(Diet p_diet);

        virtual ~Animal();
        // Getter Setter
        string getSpecie();
        void setSpecie(string p_species);
        string getNameDiet();
        void setNameDiet(string p_diet);
        string getQuantityDiet();
        void setQuantityDiet(string p_diet);
        string getAnimalName();
        void setAnimalName(string p_AnimalName);
        //string s_getReproduction();

    protected:

    private:
        string m_species;
        Diet m_diet;
        string m_animalName;
};

#endif // ANIMAL_H

