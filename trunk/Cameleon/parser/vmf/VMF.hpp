/* 
 * File:   VMF.hpp
 * Author: pierre
 *
 * Created on 7 juin 2011, 23:43
 */

#ifndef VMF_HPP
#define	VMF_HPP

#include "../Node.hpp"
#include "VersionInfo.hpp"
#include "VisGroups.hpp"
#include "World.hpp"

namespace parser {
    namespace vmf {

        class VMF {
        private:
            VersionInfo* versionInfo;
            VisGroups* visGroups;
            World* world;
        public:
            VMF(Node* node);
            virtual ~VMF();
        private:

        };
    }
}
#endif	/* VMF_HPP */

