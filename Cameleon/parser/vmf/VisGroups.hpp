/* 
 * File:   VisGroups.hpp
 * Author: pierre
 *
 * Created on 8 juin 2011, 03:41
 */

#ifndef VISGROUPS_HPP
#define	VISGROUPS_HPP

#include "../Node.hpp"
#include "VisGroup.hpp"

#include <list>
#include <string>

using namespace std;

namespace parser {
    namespace vmf {
        class VisGroups {
        private:
            list<VisGroup*> visGroups;
        public:
            VisGroups(Node* node);
            virtual ~VisGroups();
        private:

        };
    }
}

#endif	/* VISGROUPS_HPP */

