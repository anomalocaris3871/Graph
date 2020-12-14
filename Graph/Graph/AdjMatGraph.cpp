#include "AdjMatGraph.h"

int main() {
	AdjMatGraph g;

	for (int i = 0; i < 4;++i) {
		g.insertVertex('A' + i);
	}
	g.insertEdge(0, 1);
	g.insertEdge(0, 3);
	g.insertEdge(1, 2);
	g.insertEdge(1, 3);
	g.insertEdge(2, 3);
	printf("The Graph that is maded by Adjacent Array\n");
	g.display();

	g.store("graph.txt");
	g.reset();
	g.load("graph.txt");
	printf("The Graph that is maded by Adjacent Array(file open)\n");
	g.display();

	return 0;
}

