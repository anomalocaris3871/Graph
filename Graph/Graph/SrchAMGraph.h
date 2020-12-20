#pragma once
#include "AdjMatGraph.h"
#include <queue>

class SrchAMGraph :public AdjMatGraph {
protected:
	bool visited[MAX_VTXS];
public:
	void resetVisited() {
		for (int i = 0;i < size; ++i) {
			visited[i] = false;
		}
	}

	bool isLinked(int u, int v) {
		return getEdge(u, v) != 0;
	}

	void DFS(int v) {
		visited[v] = true;
		printf("%c ", getVertex(v));

		for (int w = 0;w < size; ++w) {
			if (isLinked(v, w) && visited[w] == false) {
				DFS(w);
			}
		}
	}

	void BFS(int v) {
		visited[v] = true;
		printf("%c ", getVertex(v));

		std::queue<int> que;
		que.push(v);

		while (!que.empty()) {
			int v = que.front();
			que.pop();
			for (int w = 0; w < size;++w) {
				if (isLinked(v, w) && visited[w] == false) {
					visited[w] = true;
					printf("%c ", getVertex(w));
					que.push(w);
				}
			}
		}
	}
};