//
//  Species.cpp
//  TP2
//
//  Created by Mouaz Saadaoui on 29/11/2022.
//

#include "Species.h"
#include <string>

using namespace std;

Species::Species()
{
    //Default value
    this->m_reproduction = "*ovovivipare*";
    this->m_coat = "*poilu*";
    this->m_locomotion = "*quadrupède*";


}

Species::~Species()
{
    //dtor
}

// getter setter
void Species::setReproduction(string p_reproduction){
    this->m_reproduction = p_reproduction;
}

string Species::getReproduction(){
    return this->m_reproduction;
}

void Species::setCoat(string p_coat){
    this->m_coat = p_coat;
}

string Species::getCoat(){
    return this->m_coat;
}

void Species::setLocomotion(string p_locomotion){
    this->m_locomotion = p_locomotion;
}

string Species::getLocomotion(){
    return this->m_locomotion;
}
