#include "ConnectedComponentGraph.h"
#include "SrchALGraph.h"
#include "TopoSortGraph.h"
#include "WGraphMST.h"

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

	printf("\n===================================\n");
	ConnectedComponentGraph g3;
	g3.load("ConnetedGraph.txt");
	g3.display();
	g3.resetVisited();
	g3.findConnectedComponent();

	printf("\n===================================\n");
	TopoSortGraph g4;
	for (int i = 0;i < 6;++i) {
		g4.insertVertex('A' + i);
	}
	g4.insertDirEdge(0, 2);
	g4.insertDirEdge(0, 3);
	g4.insertDirEdge(1, 3);
	g4.insertDirEdge(1, 4);
	g4.insertDirEdge(2, 3);
	g4.insertDirEdge(2, 5);
	g4.insertDirEdge(3, 5);
	g4.insertDirEdge(4, 5);
	printf("Topology Sort : ");
	g4.TopoSort();


	printf("\n\n\n===================================\n");
	WGraph g5;
	g5.load("WGraph.txt");
	printf("Weighted Graph\n");
	g5.display();


	printf("\n\n\n===================================\n");
	WGraphMST g6;
	g6.load("WGraph.txt");
	printf("MST By Kruskal's Algorithm\n");
	g6.kruskal();

	return 0;
}

