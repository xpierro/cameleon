/* 
 * File:   Node.cpp
 * Author: pierre
 * 
 * Created on 5 juin 2011, 19:03
 */

#include "Node.hpp"

#include <iostream>

void display_indent(int indent) {
    for (int i = 0; i < indent * 4; i++) {
        cout << ' ';
    }
}

namespace parser {
    Node::Node() {
        name = new string();
        attributes = new map<string, string>();
        children = new map<string, list<Node*> >();
    }

    Node::~Node() {
        delete name;
        delete attributes;
        
        list<Node*> childrenList = getChildren();
        list<Node*>::iterator firstChild = childrenList.begin();
        list<Node*>::iterator lastChild = childrenList.end();
        for (list<Node*>::iterator it = firstChild; it != lastChild; it++) {
            delete(*it);
        }
        delete children;
    }

    string* Node::getName() {
        return name;
    }

    void Node::setName(const string& str) {
        name->assign(str);
    }

    map<string, string>* Node::getAttributes() {
        return attributes;
    }

    string Node::getAttribute(const string& key) {
        return (*attributes)[key];
    }

    void Node::addAttribute(const string& key, const string& value) {
        (*attributes)[key] = value;
    }

    list<Node*> Node::getChildren() {
        list<Node*> l;
        for (map<string, list<Node*> >::iterator it = (*children).begin(); it != (*children).end(); it++) {
            l.insert(l.begin(), (*it).second.begin(), (*it).second.end());
        }
        return l;
    }

    list<Node*> Node::getChildren(const string& nodeClass) {
        return (*children)[nodeClass];
    }

    void Node::addChild(Node* node) {
        (*children)[*node->name].push_back(node);
    }

    Node* Node::getParent() {
        return parent;
    }

    void Node::setParent(Node* parent) {
        this->parent = parent;
    }

    void Node::display() {
        display_rec(0);
    }

    void Node::display_rec(int indent) {
        display_indent(indent);
        cout << "Displaying class" << endl;
        display_indent(indent);
        cout << "name = " << *name << endl;
        for(map<string, string>::iterator it = attributes->begin(); it != attributes->end(); it++) {
            display_indent(indent);
            cout << (*it).first << " | " << (*it).second << endl;
        }

        list<Node*> childrenList = getChildren();
        for(list<Node*>::iterator itList = childrenList.begin(); itList != childrenList.end(); itList++) {
            (*itList)->display_rec(indent + 1);
        }
    }
};

