#include <iostream>
#include "lxml.h"

#define FILE_PATH "C:\\Users\\Michal\\projects\\simpleParser\\test.xml" 

using namespace std;

int main() {
	XMLDocument doc;
	if(XMLDocument_load(&doc, FILE_PATH)) {
		XMLNode node = *doc.root;

		printf("Attributes:\n");
		for(int i = 0; i < node.attributes.size; i++) {
			XMLAttribute attr = node.attributes.data[i];
			printf("  %s => \"%s\"\n", attr.key, attr.value);
		}
		XMLDocument_free(&doc);
	}

	return 0;
}
