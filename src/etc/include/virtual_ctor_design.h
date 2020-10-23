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
protected:
    int data;
public:

    Base() {};
    Base(int arg_data) : data{arg_data}
    {
        std::cout << "Base Ctor" << std::endl;
    }
    virtual ~Base()
    {
        std::cout << "Base dtor" << std::endl;
    };

    virtual
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
    Derived() : Base()
    {}

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

    auto get_second() const
    {
        return this->data0;
    }

    auto get_base_data() const{

        return Base::data;
    }
};

class virtual_ctor_design {
public:
    static void copy_from_base_ptr(std::unique_ptr<Base>&& original)
    {
        std::unique_ptr<Base> copy {original->clone()};

    }

    static void copy_from_base_ptr(Base* original)
    {
        std::unique_ptr<Base> copy {original->clone()};
    }

    static void ptr_cast_practice()
    {
        std::shared_ptr<Base> base_ptr;
        std::shared_ptr<Derived> derived_ptr;

        std::cout << "Before the cast base " << base_ptr.use_count() << std::endl;
        std::cout << "Before the cast derived " << derived_ptr.use_count() << std::endl;

        derived_ptr = std::static_pointer_cast<Derived>(std::make_shared<Base>(200));
        std::cout << derived_ptr->get_second() << std::endl;
        std::cout << derived_ptr->get_base_data() << std::endl;
        //base_ptr.reset();

        std::shared_ptr<Derived> new_shared = std::make_shared<Derived>(100, 102);

        //derived_ptr.reset();

		std::cout << "After the cast base " << base_ptr.use_count() << std::endl;
		std::cout << "After the cast derived " << derived_ptr.use_count() << std::endl;

     }
};


#endif //CPP_VIRTUAL_CTOR_DESIGN_H
