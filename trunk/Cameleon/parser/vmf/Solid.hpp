/* 
 * File:   Solid.hpp
 * Author: pierre
 *
 * Created on 8 juin 2011, 00:15
 */

#ifndef SOLID_HPP
#define	SOLID_HPP

#include "../Node.hpp"
#include "Editor.hpp"
#include "Side.hpp"

#include <list>

using namespace std;

namespace parser {
    namespace vmf {
        class Solid {
        private:
            int id;
            list<Side*> sides;
            Editor editor;
        public:
            Solid(Node* node);
            virtual ~Solid();
        private:

        };
    }
}

#endif	/* SOLID_HPP */

