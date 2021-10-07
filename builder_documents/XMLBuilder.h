//
// Created by julpr on 3. 1. 2021.
//

#ifndef BUILDER_DOKUMENTY_XMLBUILDER_H
#define BUILDER_DOKUMENTY_XMLBUILDER_H
#include "DocumentBuilder.h"

class XMLBuilder: public DocumentBuilder {
public:
    XMLBuilder();
    void buildFooter();
    void buildHeader();
    void buildPage(std::string content);
   // std::string getSiteMap();
};


#endif //BUILDER_DOKUMENTY_XMLBUILDER_H
