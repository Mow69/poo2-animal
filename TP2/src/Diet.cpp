//
//  Diet.cpp
//  TP2
//
//  Created by Mouaz Saadaoui on 29/11/2022.
//

#include "Diet.h"

Diet::Diet()
{
    //ctor
    // Define default values
    this->m_nameDiet = "*Carnivore*";
    this->m_quantityDiet = "*Gros mangeur*";
}

Diet::~Diet()
{
    //dtor
}

/*
*   GETTER / SETTER
*/
// nameDiet
string Diet::getNameDiet(){
    return this->m_nameDiet;
}

void Diet::setNameDiet(string p_diet){
    this->m_nameDiet = p_diet;
}

// quantityDiet
string Diet::getQuantityDiet(){
    return this->m_quantityDiet;
}

void Diet::setQuantityDiet(string p_diet){
    this->m_quantityDiet = p_diet;
}
