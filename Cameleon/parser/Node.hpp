/* 
 * File:   Node.hpp
 * Author: pierre
 *
 * Created on 5 juin 2011, 19:03
 *
 * Représente le noeud d'un arbre.
 */

#ifndef NODE_HPP
#define	NODE_HPP

#include <list>
#include <map>
#include <string>

using namespace std;

namespace parser {
    class Node {
    private:
        Node* parent; // Le père du noeud
        string* name; // Le nom du noeud
        map<string, string>* attributes; // Les paires clef/valeurs d'attributs du noeuds
        map<string, list<Node*> >* children; // Les fils du noeud, indexés par leur nom.
        
    public:
        /**
         * Construit un noeud vide.
         */
        Node();

        /**
         * Détruit un noeud et tous ses fils.
         */
        virtual ~Node();

        /**
         * Retourne le nom du noeud.
         * @return Pointeur vers le nom du noeud.
         */
        string* getName();
        
        /**
         * Nomme le noeud.
         * @param name Nom du noeud.
         */
        void setName(const string& name);

        /**
         * Retourne l'attibut de nom <code>key</code>
         * @param key Le nom de l'attribut.
         * @return La valeur de l'attribut.
         */
        string getAttribute(const string& key);

        /**
         * Retourne l'ensemble des attributs du noeud.
         * @return Un pointeur vers la map des attributs du noeuds.
         */
        map<string, string>* getAttributes();

        /**
         * Ajoute un attribut au noeud.
         * @param key Nom de l'attribut.
         * @param value Valeur de l'attribut.
         */
        void addAttribute(const string& key, const string& value);

        /**
         * Renvoie l'ensemble des fils du noeud.
         * @param name Le nom des noeuds fils à récupérer.
         * @return Une liste des fils du noeud.
         */
        list<Node*> getChildren(const string& name);

        /**
         * Renvoie l'ensemble des fils du noeud.
         * @return Une liste des fils du noeud.
         */
        list<Node*> getChildren();

        /**
         * Ajoute un fils au noeud.
         * @param node Le noeud fils à ajouter.
         */
        void addChild(Node* node);

        /**
         * Retourne le père du noeud.
         * @return Un pointeur vers le père du noeud.
         */
        Node* getParent();

        /**
         * Spécifie le père du noeud.
         * @param parent Le noeud père.
         */
        void setParent(Node* parent);

        /**
         * Affiche le noeud.
         */
        void display();
        
    private:
        void display_rec(int indent);
    };

}

#endif	/* NODE_HPP */

