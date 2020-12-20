#pragma once
#include "AdjListGraph.h"

class SrchALGraph : public AdjListGraph {
	bool visited[MAX_VTXS];
public :
	void resetVisited() {
		for (int i = 0;i < size; ++i) {
			visited[i] = false;
		}
	}

	bool isLinked(int u, int v) {
		for (Node* p = adj[u]; p != nullptr; p = p->getLink()) {
			if (p->getId() == v) {
				return true;
			}
		}
		return false;
	}

	void DFS(int v) {
		visited[v] = true;
		printf("%c ", getVertex(v));

		for (Node* p = adj[v]; p != nullptr; p = p->getLink()) {
			if (visited[p->getId()] == false) {
				DFS(p->getId());
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

			for (Node* w = adj[v]; w != nullptr; w = w->getLink()) {
				int id = w->getId();
				if (!visited[id]) {
					visited[id] = true;
					printf("%c ", getVertex(id));
					que.push(id);
				}
			}
		}
	}
};