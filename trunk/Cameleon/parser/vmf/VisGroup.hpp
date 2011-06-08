/* 
 * File:   VisGroup.hpp
 * Author: pierre
 *
 * Created on 8 juin 2011, 02:28
 */

#ifndef VISGROUP_HPP
#define	VISGROUP_HPP

#include "../Node.hpp"

#include <string>

using namespace std;

namespace parser {
    namespace vmf {
        class VisGroup {
        private:
            string name;
            int visGroupId;
            int color[3];
            list<VisGroup*> innerGroups;
        public:
            VisGroup(Node* node);
            virtual ~VisGroup();
        private:

        };
    }
}

#endif	/* VISGROUP_HPP */

