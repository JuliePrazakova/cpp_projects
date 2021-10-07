//
// Created by julpr on 3. 1. 2021.
//

#ifndef BUILDER_DOKUMENTY_DOCUMENTDIRECTOR_H
#define BUILDER_DOKUMENTY_DOCUMENTDIRECTOR_H
#include "DocumentBuilder.h"

class DocumentDirector {
    DocumentBuilder* m_builder;
public:
    DocumentDirector(DocumentBuilder* builder);
    void setDocumentBuilder(DocumentBuilder* builder);
    Document* createDocument(std::string content);
};


#endif //BUILDER_DOKUMENTY_DOCUMENTDIRECTOR_H
