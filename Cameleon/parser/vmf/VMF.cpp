/* 
 * File:   VMF.cpp
 * Author: pierre
 * 
 * Created on 7 juin 2011, 23:43
 */

#include "VMF.hpp"

namespace parser {
    namespace vmf {

        VMF::VMF(Node* node) {
            visGroups = new VisGroups(*node->getChildren("visgroups").begin());
            versionInfo = new VersionInfo(*node->getChildren("versioninfo").begin());
            world = new World(*node->getChildren("world").begin());
        }

        VMF::~VMF() {
            delete visGroups;
            delete versionInfo;
            delete world;
        }


    }
}

