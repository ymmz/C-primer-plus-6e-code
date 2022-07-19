#ifndef PERSON_H
#define PERSON_H
#include<string>

class Person
{
public:
    Person()
    {
        lname="";
        fname[0]='\0';
    }
    Person(const std::string &ln,const char* fn="Heyyou");
    void show() const;
    void FormalShow() const;
private:
    static const int LIMIT=25;
    std::string lname;
    char fname[LIMIT];
};


#endif