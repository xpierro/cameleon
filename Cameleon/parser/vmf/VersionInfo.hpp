/* 
 * File:   VersionInfo.hpp
 * Author: pierre
 *
 * Created on 8 juin 2011, 01:44
 */

#ifndef VERSIONINFO_HPP
#define	VERSIONINFO_HPP

#include "../Node.hpp"

namespace parser {
    namespace vmf {
        class VersionInfo {
        private:
            int editorVersion;
            int editorBuild;
            int mapVersion;
            int formatVersion;
            bool prefab;
        public:
            VersionInfo(Node* node);
            virtual ~VersionInfo();
        private:

        };
    }
}

#endif	/* VERSIONINFO_HPP */

