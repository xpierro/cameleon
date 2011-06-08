/* 
 * File:   VersionInfo.cpp
 * Author: pierre
 * 
 * Created on 8 juin 2011, 01:44
 */

#include "VersionInfo.hpp"
#include "../../tools/Math.hpp"
namespace parser {
    namespace vmf {
        VersionInfo::VersionInfo(Node* node) {
            editorBuild = atox<int>(node->getAttribute("editorbuild"));
            editorVersion = atox<int>(node->getAttribute("editorversion"));
            formatVersion = atox<int>(node->getAttribute("formatversion"));
            mapVersion = atox<int>(node->getAttribute("mapversion"));
            prefab = atox<int>(node->getAttribute("prefab"));
        }


        VersionInfo::~VersionInfo() {  }
    }
}