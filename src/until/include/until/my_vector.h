//
// Created by toy on 9/10/2020.
//

#ifndef CPP_MY_VECTOR_H
#define CPP_MY_VECTOR_H
template <class _My>
class my_vector : public _Iterator_base{
public:
	//T _vector[sizeof(T)];
	using type = typename _My::value_type;
	//int _int[constexpr ];
	/*my_vector(int size) : _vector{new T[size]}
	{}*/
};


#endif //CPP_MY_VECTOR_H
