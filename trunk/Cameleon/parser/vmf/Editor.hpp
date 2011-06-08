/* 
 * File:   Editor.hpp
 * Author: pierre
 *
 * Created on 8 juin 2011, 04:31
 */

#ifndef EDITOR_HPP
#define	EDITOR_HPP

#include <string>

using namespace std;

namespace parser {
    namespace vmf {
        class Editor {
        private:
            int color[3];
            int visGroupId;
            int groupId;
            bool visGroupShown;
            bool visGroupAutoShown;
            string comment;
        public:
            Editor();
            virtual ~Editor();
        private:

        };

    }
}


#endif	/* EDITOR_HPP */

