//
// Created by julpr on 3. 1. 2021.
//

#include "LatexBuilder.h"
LatexBuilder::LatexBuilder(std::string kodovani){
    m_kodovani = kodovani;
}
void LatexBuilder::buildFooter(){
    m_document->addContent("\\end{document}\n");

}
void LatexBuilder::buildHeader(){
    m_document->addContent("\\documentclass{article}\n");
    buildEncoding();
    m_document->addContent("\\begin{document}\n");
}
void LatexBuilder::buildPage(std::string content){
    m_document->addContent("\\section{Content}\n"+content+"\n");

}

void LatexBuilder::buildEncoding(){
    m_document->addContent("\\usepackage["+m_kodovani+"]{inputenc}\n");

}