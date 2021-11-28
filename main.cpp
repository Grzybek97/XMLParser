#include <iostream>
#include "lxml.h"

#define FILE_PATH "C:\\Users\\Michal\\projects\\simpleParser\\test.xml" 

using namespace std;

int main() {
	XMLDocument doc;
	if(XMLDocument_load(&doc, FILE_PATH)) {
		XMLNode* main_node = XMLNode_child(doc.root, 0);
		printf("%d children\n", main_node->children.size);

		XMLNode* another_node = XMLNode_child(doc.root, 1);
		printf("%s: %s\n", another_node->tag, another_node->inner_text);

		XMLDocument_free(&doc);
	}

	return 0;
}
