#pragma once
#include <cstdio>

class Node {
protected:
	int id;
	Node* link;
public:
	Node(int i, Node* l = nullptr) : id(i), link(l) {
	}
	~Node() {
		if (link != nullptr) {
			delete link;
		}
	}
	int getId() {
		return id;
	}
	Node* getLink() {
		return link;
	}
	void setLink(Node* l) {
		link = l;
	}
};
