//
// Created by julpr on 3. 1. 2021.
//

#ifndef BUILDER_DOKUMENTY_DOCUMENT_H
#define BUILDER_DOKUMENTY_DOCUMENT_H
#include <iostream>

class Document {
    std::string m_content;
public:
    Document();
    void addContent(std::string newContent);
    std::string getContent();
};


#endif //BUILDER_DOKUMENTY_DOCUMENT_H
