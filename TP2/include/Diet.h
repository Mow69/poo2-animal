//
//  Diet.h
//  TP2
//
//  Created by Mouaz Saadaoui on 29/11/2022.
//

#ifndef DIET_H
#define DIET_H
#include <string>

using namespace std;

class Diet
{
    public:
        // ctor
        Diet();
    
        // dtor
        virtual ~Diet();
    
        // Getters Setters
        string getNameDiet();
        void setNameDiet(string p_diet);
        string getQuantityDiet();
        void setQuantityDiet(string p_diet);

    protected:


    private:
    // define attributes
         string m_nameDiet;
         string m_quantityDiet;

};

#endif // DIET_H

