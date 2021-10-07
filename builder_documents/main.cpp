#include <iostream>
#include "DocumentDirector.h"
#include "LatexBuilder.h"
#include "XMLBuilder.h"

int main() {
    DocumentDirector* director = new DocumentDirector(new LatexBuilder("UTF-8"));
    Document* helloPage = director->createDocument("Kykonko");

    std::cout<<helloPage->getContent();


    delete director;
    return 0;
}
