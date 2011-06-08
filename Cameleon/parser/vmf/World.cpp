/* 
 * File:   World.cpp
 * Author: pierre
 * 
 * Created on 7 juin 2011, 23:48
 */

#include "../../tools/Math.hpp"
#include "World.hpp"

namespace parser {
    namespace vmf {
        World::World(Node* node) {
            properties = *node->getAttributes();

            list<Node*> solids = node->getChildren("solid");

            for (list<Node*>::iterator it = solids.begin(); it != solids.end(); it++) {
                this->solids.push_back(new Solid(*it));
            }
        }

        World::~World() {
            for (list<Solid*>::iterator it = solids.begin(); it != solids.end(); it++) {
                delete *it;
            }
        }
    }
}

