/* 
 * File:   IParser.hpp
 * Author: pierre
 *
 * Created on 4 juin 2011, 21:35
 */

#ifndef IPARSER_HPP
#define	IPARSER_HPP

#include <string>

using namespace std;

namespace parser {
    class IParser {
    public :
        virtual string getFilePath() = 0;
        virtual void setFilePath(string filePath) = 0;
        virtual void parse() = 0;
    };
}


#endif	/* IPARSER_HPP */

