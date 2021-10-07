//
// Created by julpr on 3. 1. 2021.
//

#include "XMLBuilder.h"

XMLBuilder::XMLBuilder(){

}
void XMLBuilder::buildFooter(){
    m_document->addContent("</xml>\n");

}
void XMLBuilder::buildHeader(){
    m_document->addContent("<xml>\n");
}
void XMLBuilder::buildPage(std::string content){
    m_document->addContent("<content>\n"+content+"\n<content>\n");

}