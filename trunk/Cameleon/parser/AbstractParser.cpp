/* 
 * File:   AbstractParser.cpp
 * Author: pierre
 * 
 * Created on 4 juin 2011, 22:18
 */

#include "AbstractParser.hpp"
#include <string>

using namespace std;
namespace parser {
    AbstractParser::AbstractParser() {
    }

    AbstractParser::AbstractParser(const AbstractParser& orig) {
    }

    AbstractParser::~AbstractParser() {
    }

    void AbstractParser::setFilePath(string filePath) {
        this->filePath = filePath;
    }

    string AbstractParser::getFilePath() {
        return filePath;
    }
}
