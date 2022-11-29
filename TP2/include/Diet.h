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
        Diet();
        virtual ~Diet();
        string getNameDiet();
        void setNameDiet(string p_diet);
        string getQuantityDiet();
        void setQuantityDiet(string p_diet);

    protected:


    private:
         string m_nameDiet;
         string m_quantityDiet;

};

#endif // DIET_H

