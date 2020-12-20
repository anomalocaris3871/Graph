#pragma once
#include "SrchAMGraph.h"

class ConnectedComponentGraph : public SrchAMGraph {
	int label[MAX_VTXS];
public :
	void labelDFS(int v, int color) {
		visited[v] = true;
		label[v] = color;
		for (int w = 0; w < size; ++w) {
			if ( visited[w] == false && isLinked(v, w)) {
				labelDFS(w, color);
			}
		}
	}

	void findConnectedComponent() {
		int count = 0;
		for (int i = 0; i < size; ++i) {
			if (visited[i] == false) {
				labelDFS(i, ++count);
			}
		}
		printf("The number of Connected Componnent == %d\n", count);
		for (int i = 0; i < size;++i) {
			printf("%c=%d ", getVertex(i), label[i]);
		}
		printf("\n");
	}
};
