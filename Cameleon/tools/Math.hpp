/* 
 * File:   Math.hpp
 * Author: pierre
 *
 * Created on 8 juin 2011, 05:16
 */

#ifndef MATH_HPP
#define	MATH_HPP

#include <sstream>
#include <string>

using namespace std;

template <class T>
T atox(string str) {
    istringstream iss(str);
    T i;
    return iss >> i ? i : 0;
}

#endif	/* MATH_HPP */

