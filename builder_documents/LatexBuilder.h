//
// Created by julpr on 3. 1. 2021.
//

#ifndef BUILDER_DOKUMENTY_LATEXBUILDER_H
#define BUILDER_DOKUMENTY_LATEXBUILDER_H
#include "DocumentBuilder.h"

class LatexBuilder:public DocumentBuilder {
    std::string m_kodovani;
public:
    LatexBuilder(std::string kodovani);
    void buildFooter();
    void buildHeader();
    void buildPage(std::string content);
private:
    void buildEncoding();
};


#endif //BUILDER_DOKUMENTY_LATEXBUILDER_H
