#include "SrchAMGraph.h"
#include "SrchALGraph.h"

int main() {
	SrchAMGraph g;
	g.load("graph.txt");
	g.display();

	printf("DFS ==> ");
	g.resetVisited();
	g.DFS(0);
	printf("\n");

	SrchALGraph g2;
	g2.load("graph.txt");
	g2.display();

	printf("DFS ==> ");
	g2.resetVisited();
	g2.DFS(0);
	printf("\n");


	return 0;
}

