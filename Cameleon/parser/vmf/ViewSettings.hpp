/* 
 * File:   ViewSettings.hpp
 * Author: pierre
 *
 * Created on 8 juin 2011, 04:33
 */

#ifndef VIEWSETTINGS_HPP
#define	VIEWSETTINGS_HPP

namespace parser {
    namespace vmf {
        class ViewSettings {
        private:
            bool bSnapToGrid;
            bool bShowGrid;
            bool bShowLogicalGrid;
            int nGridSpacing;
            bool bShow3DGrid;
        public:
            ViewSettings();
            virtual ~ViewSettings();
        private:

        };
    }
}


#endif	/* VIEWSETTINGS_HPP */

