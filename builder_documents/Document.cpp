//
// Created by julpr on 3. 1. 2021.
//

#include "Document.h"

Document::Document(){
    m_content= "";
}
void Document::addContent(std::string newContent){
    m_content += newContent;
}
std::string Document::getContent(){
    return m_content;
}