/* 
 * File:   VisGroups.cpp
 * Author: pierre
 * 
 * Created on 8 juin 2011, 03:41
 */

#include "VisGroups.hpp"

namespace parser {
    namespace vmf {
        VisGroups::VisGroups(Node* node) {
            list<Node*> children = node->getChildren("visgroup");
            for (list<Node*>::iterator it = children.begin(); it != children.end(); it++) {
                visGroups.push_back(new VisGroup(*it));
            }
        }

        VisGroups::~VisGroups() {
            for (list<VisGroup*>::iterator it = visGroups.begin(); it != visGroups.end(); it++) {
                delete *it;
            }
        }
    }
}
