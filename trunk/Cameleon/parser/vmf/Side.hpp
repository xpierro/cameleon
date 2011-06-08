/* 
 * File:   Side.hpp
 * Author: pierre
 *
 * Created on 8 juin 2011, 00:23
 */

#ifndef SIDE_HPP
#define	SIDE_HPP

#include "../Node.hpp"
#include "Axis.hpp"
#include "DispInfo.hpp"

#include <string>

using namespace std;

namespace parser {
    namespace vmf {
        class Side {
        private:
            int id;
            int planeVertices[3][3];
            string material;
            Axis* u;
            Axis* v;
            double rotation;
            int lightMapScale;
            int smoothingGroups;
            DispInfo dispInfo;
        public:
            Side(Node* node);
            virtual ~Side();
        private:

        };
    }
}

#endif	/* SIDE_HPP */

