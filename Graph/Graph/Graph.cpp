#include "ConnectedComponentGraph.h"
#include "SrchALGraph.h"

int main() {
	SrchAMGraph g;
	g.load("graph.txt");
	g.display();

	printf("DFS ==> ");
	g.resetVisited();
	g.DFS(0);
	printf("\n");

	printf("BFS ==> ");
	g.resetVisited();
	g.BFS(0);
	printf("\n");


	SrchALGraph g2;
	g2.load("graph.txt");
	g2.display();

	printf("DFS ==> ");
	g2.resetVisited();
	g2.DFS(0);
	printf("\n");

	printf("BFS ==> ");
	g2.resetVisited();
	g2.BFS(0);
	printf("\n");

	printf("=============================\n");
	ConnectedComponentGraph g3;
	g3.load("ConnetedGraph.txt");
	g3.display();
	g3.resetVisited();
	g3.findConnectedComponent();


	


	return 0;
}

