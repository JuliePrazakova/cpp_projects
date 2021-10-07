//
// Created by julpr on 3. 1. 2021.
//

#ifndef BUILDER_DOKUMENTY_DOCUMENTBUILDER_H
#define BUILDER_DOKUMENTY_DOCUMENTBUILDER_H
#include "Document.h"

class DocumentBuilder {
protected:
    Document* m_document;
public:
    DocumentBuilder();
    void createNewDocument();
    virtual void buildHeader()=0;
    virtual void buildFooter()=0;
    virtual void buildPage(std::string content)=0;
    Document* getDocument();
};


#endif //BUILDER_DOKUMENTY_DOCUMENTBUILDER_H
