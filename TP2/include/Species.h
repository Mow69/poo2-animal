//
//  Species.h
//  TP2
//
//  Created by Mouaz Saadaoui on 29/11/2022.
//

#ifndef SPECIES_H
#define SPECIES_H
#include <string>

using namespace std;

class Species
{
    public:
        Species();
        virtual ~Species();
        // getter setter
        void setReproduction(string p_reproduction);
        string getReproduction();
        void setCoat(string p_coat);
        string getCoat();
        void setLocomotion(string p_locomotion);
        string getLocomotion();

    protected:

    private:
        string m_reproduction;
        string m_coat;
        string m_locomotion;

};

#endif // SPECIES_H

