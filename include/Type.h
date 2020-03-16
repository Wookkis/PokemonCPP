#ifndef TYPE_H
#define TYPE_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Type {
    protected:
        string name;
        Type* weekness;
        Type* resistance;

    public:
        Type();
        Type(Type* weekness, Type* resistance);
        ~Type();

        string toString() const;

        string getName();
        Type* getWeekness();
        Type* getResistance();

        void setName(string newName);
        void setWeekness(Type* newType);
        void setResistance(Type* newType);
};

#endif