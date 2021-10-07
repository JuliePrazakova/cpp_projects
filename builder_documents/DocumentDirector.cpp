//
// Created by julpr on 3. 1. 2021.
//

#include "DocumentDirector.h"

#include <utility>

DocumentDirector::DocumentDirector(DocumentBuilder* builder){
    m_builder = builder;
}
void DocumentDirector::setDocumentBuilder(DocumentBuilder* builder){
    m_builder = builder;
}
Document* DocumentDirector::createDocument(std::string content){

        m_builder->createNewDocument();
        m_builder->buildHeader();
        m_builder->buildPage(content);
        m_builder->buildFooter();

    return m_builder->getDocument();
}