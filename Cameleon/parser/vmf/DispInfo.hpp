/* 
 * File:   DispInfo.hpp
 * Author: pierre
 *
 * Created on 8 juin 2011, 04:36
 */

#ifndef DISPINFO_HPP
#define	DISPINFO_HPP

namespace parser {
    namespace vmf {
        class DispInfo {
        private:
            int power; // 2,3,4, 4 par défaut 2^power + 1 lignes et 3 * 2^power + 1 colonnes
            int startPosition[3];
            double elevation;
            bool subDiv;
            double* normals;
            double* offsets;
            double* offset_normals;
            double* alphas;
            int* triangleTags;
        public:
            DispInfo();
            virtual ~DispInfo();
        private:

        };

    }
}


#endif	/* DISPINFO_HPP */

