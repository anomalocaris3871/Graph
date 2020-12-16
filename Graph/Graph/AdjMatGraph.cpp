#include "AdjMatGraph.h"
#include "AdjListGraph.h"

int main() {
	AdjListGraph AdjListGraph;

	for (int i = 0; i < 4;++i) {
		AdjListGraph.insertVertex('A' + i);
	}
	AdjListGraph.insertEdge(0, 1);
	AdjListGraph.insertEdge(0, 3);
	AdjListGraph.insertEdge(1, 2);
	AdjListGraph.insertEdge(1, 3);
	AdjListGraph.insertEdge(2, 3);

	AdjListGraph.display();

	AdjMatGraph AdjMatGraph;

	AdjMatGraph.reset();
	AdjMatGraph.load("graph.txt");
	AdjMatGraph.display();

	return 0;
}

