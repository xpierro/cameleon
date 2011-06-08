/* 
 * File:   Side.cpp
 * Author: pierre
 * 
 * Created on 8 juin 2011, 00:23
 */

#include "../../tools/Math.hpp"
#include "Side.hpp"
#include "stdio.h"

namespace parser {
    namespace vmf {
        Side::Side(Node* node) {
            id = atox<int>(node->getAttribute("id"));

            sscanf(node->getAttribute("plane").data(), "(%d %d %d) (%d %d %d) (%d %d %d)",
                    &planeVertices[0][0],
                    &planeVertices[0][1],
                    &planeVertices[0][2],
                    &planeVertices[1][0],
                    &planeVertices[1][1],
                    &planeVertices[1][2],
                    &planeVertices[2][0],
                    &planeVertices[2][1],
                    &planeVertices[2][2]
                    );

            material = node->getAttribute("material");
            u = new Axis(node->getAttribute("uaxis"));
            v = new Axis(node->getAttribute("vaxis"));
            rotation = atox<double>(node->getAttribute("rotation"));
            lightMapScale = atox<int>(node->getAttribute("lightmapscale"));
            smoothingGroups = atox<int>(node->getAttribute("smoothing_groups"));
        }

        Side::~Side() {
            delete u;
            delete v;
        }
    }
}