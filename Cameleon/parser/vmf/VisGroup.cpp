/* 
 * File:   VisGroup.cpp
 * Author: pierre
 * 
 * Created on 8 juin 2011, 02:28
 */

#include "VisGroup.hpp"
#include "../../tools/Math.hpp"

#include <sstream>

namespace parser {
    namespace vmf {
        VisGroup::VisGroup(Node* node) {
            name = node->getAttribute("name");

            istringstream colorStream(node->getAttribute("color"));
            colorStream >> color[0] >> color[1] >> color[2];

            visGroupId = atox<int>(node->getAttribute("visgroupid"));

            list<Node*> children = node->getChildren("visgroup");

            for (list<Node*>::iterator it = children.begin(); it != children.end(); it++) {
                innerGroups.push_back(new VisGroup(*it));
            }

        }

        VisGroup::~VisGroup() {
            for (list<VisGroup*>::iterator it = innerGroups.begin(); it != innerGroups.end(); it++) {
                delete *it;
            }
        }
    }
}


