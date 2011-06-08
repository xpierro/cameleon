/* 
 * File:   VMFParser.cpp
 * Author: pierre
 * 
 * Created on 4 juin 2011, 22:35
 */

#include "VMFParser.hpp"

#include <fstream>

namespace parser {

    VMFParser::VMFParser() {
        vmf = NULL;
    }

    VMFParser::~VMFParser() {
        delete vmf;
    }

    void VMFParser::parse() {
        ifstream file;
        file.open(getFilePath().data(), istream::in);

        bool key[2] = {false, false};
        bool value = false;
        string currentKey;
        string buffer;
        Node* currentNode = new Node();
        currentNode->setName("VMF");
        Node* node;
        char current;
        while(file.good()) {
            file >> noskipws >> current;
            switch(current) {
                case '{' :
                    node = new Node();
                    node->setName(buffer);

                    node->setParent(currentNode);
                    currentNode = node;

                    buffer.clear();
                    break;
                case '}':
                    if (currentNode->getParent()) {
                        currentNode->getParent()->addChild(currentNode);
                    }
                    currentNode = currentNode->getParent();
                    buffer.clear();
                    break;
                case '\"' :
                    // On n'a pas encore lu de valeur
                    if (!value) {
                        // Si on a déja commencé a lire la clef
                        if (key[0]) {
                            // On a deja fini la clef: on commence a lire une valeur
                            if(key[1]) {
                                value = true;
                            } else { // On vient de finir la clef
                                currentKey = buffer;
                                key[1] = true;
                            }
                        } else { // On n'a pas encore commencé la clef
                            key[0] = true;
                        }
                    } else { // On a déja lu la valeur
                        currentNode->addAttribute(currentKey, buffer);
                        key[0] = false;
                        key[1] = false;
                        value = false;
                    }
                    buffer.clear();
                    break;
                case ' ' :
                    if (key[0] && !key[1] || value) {
                        buffer.append(1, current);
                    }
                case '\t' :
                case '\r' :
                case '\n' : break;
                default :
                    buffer.append(1, current);
            }
        }
        
        file.close();
        vmf = new vmf::VMF(currentNode);
        delete currentNode;
    }
}