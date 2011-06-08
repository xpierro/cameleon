/* 
 * File:   main.cpp
 * Author: pierre
 *
 * Created on 4 juin 2011, 21:20
 */

#include <cstdlib>

#include "parser/VMFParser.hpp"

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    parser::VMFParser p;
    p.setFilePath("/home/pierre/Cameleon/parser/testParser");
    p.parse();
    return 0;
}

