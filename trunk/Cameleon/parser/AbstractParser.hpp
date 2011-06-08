/* 
 * File:   AbstractParser.h
 * Author: pierre
 *
 * Created on 4 juin 2011, 22:18
 */

#ifndef ABSTRACTPARSER_H
#define	ABSTRACTPARSER_H

#include "IParser.hpp"

#include <fstream>

namespace parser {
    class AbstractParser : IParser {
    private:
        string filePath;
        ifstream *fileStream;
    public:
        AbstractParser();
        AbstractParser(const AbstractParser& orig);
        virtual ~AbstractParser();
        virtual void setFilePath(string filePath);
        virtual string getFilePath();
    private:

    };
}
#endif	/* ABSTRACTPARSER_H */

