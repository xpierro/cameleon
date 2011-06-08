/* 
 * File:   Axis.cpp
 * Author: pierre
 * 
 * Created on 8 juin 2011, 01:29
 */

#include "Axis.hpp"

#include "stdio.h"

namespace parser {
    namespace vmf {
        Axis::Axis(string description) {
            sscanf(description.data(), "[%d %d %d %lf] %lf",
                    &x, &y, &z, &trans, &scale);
        }

        Axis::~Axis() { }
    }
}