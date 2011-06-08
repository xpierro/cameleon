/* 
 * File:   World.hpp
 * Author: pierre
 *
 * Created on 7 juin 2011, 23:48
 */

#ifndef WORLD_HPP
#define	WORLD_HPP

#include "../Node.hpp"
#include "Group.hpp"
#include "Hidden.hpp"
#include "Solid.hpp"

#include <list>
#include <map>
#include <string>

using namespace std;

namespace parser {
    namespace vmf {
        class World {
        private:
            int id;
            int mapVersion;
            string className;
            string skyName;
            int maxRange;
            map<string, string> properties;
            list<Solid*> solids;
            list<Hidden*> hiddens;
            list<Group*> groups;
        public:
            World(Node* node);
            virtual ~World();
        private:

        };
    }
}
#endif	/* WORLD_HPP */

