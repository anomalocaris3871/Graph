#pragma once
#include "AdjListGraph.h"
#include <stack>

class TopoSortGraph : public AdjListGraph {
	int inDeg[MAX_VTXS];
public:
	void insertDirEdge(int u, int v) {
		adj[u] = new Node(v, adj[u]);
	}

	void TopoSort() {
		for (int i = 0;i < size; ++i) {
			inDeg[i] = 0;
		}
		for (int i = 0;i < size; ++i) {
			Node* node = adj[i];
			while (node != nullptr) {
				inDeg[node->getId()]++;
				node = node->getLink();
			}
		}

		std::stack<int>	s;
		for (int i = 0;i < size;++i) {
			if (inDeg[i] == 0) {
				s.push(i);
			}
		}

		while (!s.empty()) {
			int w = s.top();
			s.pop();

			printf(" %c ", getVertex(w));
			Node* node = adj[w];

			while (node != nullptr) {
				int u = node->getId();
				inDeg[u]--;
				if (inDeg[u] == 0) {
					s.push(u);
				}
				node = node->getLink();
			}
		}
		printf("\n");
	}
};
