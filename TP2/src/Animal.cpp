//
//  Animal.cpp
//  TP2
//
//  Created by Mouaz Saadaoui on 29/11/2022.
//

#include "Animal.h"

Animal::Animal()
{
    //ctor
    Diet *myDiet = new Diet();
    this->m_diet = *myDiet;
    
    this->m_animalName = "*Lion*";
}

Animal::Animal(Diet p_diet)
{
    //ctor
    this->m_diet = p_diet;
}

Animal::~Animal()
{
    //dtor
}

// Getter setter Animal
// animal name
string Animal::getAnimalName(){
    return this->m_animalName;
}
void Animal::setAnimalName(string p_animalName){
    this->m_animalName = p_animalName;
}

// Getters setters Diet
// nameDiet
string Animal::getNameDiet(){
    return this->m_diet.getNameDiet();
}

void Animal::setNameDiet(string p_diet){
    this->m_diet.setNameDiet(p_diet);
}

// quantityDiet
string Animal::getQuantityDiet(){
    return this->m_diet.getQuantityDiet();
}

void Animal::setQuantityDiet(string p_diet){
    this->m_diet.setQuantityDiet(p_diet);
}

