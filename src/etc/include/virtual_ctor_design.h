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
        
    }
    //virtual 
    ~Base()
    {
        
    };

    virtual
    Base* clone() const
    {
        
        return new Base(this->data);
    }

    Base* return_this()
    {
        return this;
    }
};

class Derived : public Base
{
//protected:
    int data;
    int data0;
public:
    Derived() : Base()
    {}

    Derived(int arg_data, int arg_data0) : Base{arg_data},
            data{arg_data}, data0{arg_data0}
    {
        
    }
    ~Derived()
    {
        
    };

    Derived* clone() const
    {
        
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

        return this->Base::data;
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
        //{
			/*std::shared_ptr<Base> base_ptr;
			std::shared_ptr<Derived> derived_ptr = std::make_shared<Derived>(10, 11);

			base_ptr = std::make_shared<Base> (12);

			base_ptr.reset();
			derived_ptr.reset();*/
			/*auto de = Derived(10,11);
			auto be = std::static_cast<Base>(de);*/
            //delete be;
            int raw = 0xffffffff + 1;
            //int raw0 = 2147483647 + 1;
			std::cout << INT32_MAX << std::endl;
            int i = 1;
            i = +INT32_MAX;
			std::cout << INT32_MAX + 1 << std::endl;
            std::cout << INT32_MAX + INT32_MAX << std::endl;
            std::cout << INT32_MIN + 1 << std::endl;

			std::cout << INT32_MIN << std::endl;
			std::cout << INT32_MIN - 1 << std::endl;
            auto ro = INT32_MIN + INT32_MIN;
            long long int d = INT32_MIN + INT32_MIN;
            std::cout << INT32_MIN + INT32_MIN << std::endl;
			std::cout << INT32_MAX - INT32_MIN << std::endl;
            std::cout << INT32_MIN - INT32_MAX << std::endl;
            
        //}
     }
};


#endif //CPP_VIRTUAL_CTOR_DESIGN_H
