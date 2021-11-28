#include <iostream>
#include "lxml.h"

#define FILE_PATH "C:\\Users\\Michal\\projects\\simpleParser\\test.xml" 

using namespace std;

int main() {
	XMLDocument doc;
	if(XMLDocument_load(&doc, FILE_PATH)) {
		XMLNode* more_node = XMLNode_child(XMLNode_child(doc.root, 0), 0);
		printf("%s: %s\n", more_node->tag, more_node->inner_text);

		XMLNode* another_node = XMLNode_child(doc.root, 1);
		printf("%s: %s\n", another_node->tag, another_node->inner_text);

		XMLDocument_free(&doc);
	}

	return 0;
}
