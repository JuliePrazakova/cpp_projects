//
// Created by julpr on 3. 1. 2021.
//

#include "DocumentBuilder.h"

DocumentBuilder::DocumentBuilder(){
    m_document = nullptr;
}
void DocumentBuilder::createNewDocument(){
    m_document = new Document();
}
Document* DocumentBuilder::getDocument(){
    return m_document;
}