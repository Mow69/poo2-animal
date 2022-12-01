//
//  Lamp.h
//  TP2
//
//  Created by Mouaz Saadaoui on 29/11/2022.
//

#ifndef LAMP_H
#define LAMP_H
#include <string>

using namespace std;

class Lamp
{
    public:
        //ctor
        Lamp();
    
        //dtor
        virtual ~Lamp();

    protected:

    private:
        // define attribute
        string name;
};

#endif // LAMP_H

