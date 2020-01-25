#include "Handle.h"
#include <iostream>
Handle::Handle(){
    body = new Body;
}
Handle::~Handle(){
    delete body;
}
void Handle::someOperationonBody(){
    body->someData = 24;
}
int Handle::getData(){

    return body->someData;
}
