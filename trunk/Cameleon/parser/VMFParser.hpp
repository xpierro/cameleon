/* 
 * File:   VMFParser.hpp
 * Author: pierre
 *
 * Created on 4 juin 2011, 22:35
 */

#ifndef VMFPARSER_HPP
#define	VMFPARSER_HPP

#include "AbstractParser.hpp"
#include "Node.hpp"
#include "vmf/VMF.hpp"

#include <iostream>
#include <list>
#include <map>
#include <string>

using namespace std;

namespace parser {

    class VMFParser : public AbstractParser {
    private:
        vmf::VMF* vmf;

    public:
        VMFParser();
        virtual ~VMFParser();
        virtual void parse();
    };
}
#endif	/* VMFPARSER_HPP */

