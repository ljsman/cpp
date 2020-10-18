/*
    Created by Jinshi-Li on 10/17/20.
    Question: Can we have virtual ctor in a class?
        - Not directly through C++ language features, no!
        - But we could simulate that through Virtual Constructor Design pattern/idiom.
    Use case:
        - Construct a derived object through its base class pointer.
    Why:
        - Cant construct/clone a derived object from its base class ptr. Because,
*/

#ifndef CPP_VIRTUAL_CTOR_DESIGN_H
#define CPP_VIRTUAL_CTOR_DESIGN_H

#include <iostream>
#include <memory>

class Base
{
    int data;
public:
    Base(int arg_data) : data{arg_data}
    {
        std::cout << "Base Ctor" << std::endl;
    }
    virtual ~Base()
    {
        std::cout << "Base dtor" << std::endl;
    };

    //virtual
    Base* clone() const
    {
        std::cout << "This is the Base class clone()" << std::endl;
        return new Base(this->data);
    }

    Base* return_this()
    {
        return this;
    }
};

class Derived : protected Base
{
    int data;
    int data0;
public:
    Derived(int arg_data, int arg_data0) : Base{arg_data},
            data{arg_data}, data0{arg_data0}
    {
        std::cout << "Derived Ctor" << std::endl;
    }
    ~Derived()
    {
        std::cout << "Derived dtor" << std::endl;
    };

    Derived* clone() const
    {
        std::cout << "This is the Derived clone()" << std::endl;
        return new Derived(*this);
    }

    Base* get_base()
    {
        return Base::return_this();
    }
};

class virtual_ctor_design {
public:
    static void copy_from_base_ptr(std::unique_ptr<Base>& original)
    {
        std::unique_ptr<Base> copy {original->clone()};

    }

    static void copy_from_base_ptr(Base* original)
    {
        std::unique_ptr<Base> copy {original->clone()};
    }
};


#endif //CPP_VIRTUAL_CTOR_DESIGN_H
