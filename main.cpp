#include <iostream>
#include "lxml.h"

#define FILE_PATH "C:\\Users\\Michal\\projects\\simpleParser\\test.xml" 

using namespace std;

int main() {
	XMLDocument doc;
	if(XMLDocument_load(&doc, FILE_PATH)) {
		printf("%s: %s\n", doc.root->tag, doc.root->inner_text);
		XMLDocument_free(&doc);
	}

	return 0;
}
