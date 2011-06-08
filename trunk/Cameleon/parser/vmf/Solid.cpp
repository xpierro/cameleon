/* 
 * File:   Solid.cpp
 * Author: pierre
 * 
 * Created on 8 juin 2011, 00:15
 */

#include "../../tools/Math.hpp"
#include "Solid.hpp"

#include <iostream>

namespace parser {
    namespace vmf {
        Solid::Solid(Node* node) {
            id = atox<int>(node->getAttribute("id"));
            list<Node*> sides = node->getChildren("side");
            for (list<Node*>::iterator it = sides.begin(); it != sides.end(); it++) {
                this->sides.push_back(new Side(*it));
            }
        }

        Solid::~Solid() {
            for (list<Side*>::iterator it = sides.begin(); it != sides.end(); it++) {
                delete *it;
            }
        }
    }
}