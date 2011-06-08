/* 
 * File:   Axis.hpp
 * Author: pierre
 *
 * Created on 8 juin 2011, 01:29
 */

#ifndef AXIS_HPP
#define	AXIS_HPP

#include <string>

using namespace std;

namespace parser {
    namespace vmf {
        class Axis {
        private:
            int x;
            int y;
            int z;
            double trans;
            double scale;
        public:
            Axis(string description);
            virtual ~Axis();
        private:

        };
    }
}

#endif	/* AXIS_HPP */

