#pragma once
class Trigger;
using Node = Trigger;

class TriggerTree
{
public:
	explicit TriggerTree(Node *root);
	~TriggerTree();

	void insert(Node *parent, Node *node);
	void erase(Node *);
	void erase(int id);
	void find(Node *);
	void find(int id);
	//void modify(Node *);
private:
	void _free_nodes(Node *);

private:
	Node *_root;
};

// cpp
#include "Trigger.h"
TriggerTree::TriggerTree(Node *root)
	:_root(root)
{
}

TriggerTree::~TriggerTree() {
	_free_nodes(_root);
}

void TriggerTree::_free_nodes(Node *curr) {
	if (!curr)  return;
	if (curr->children.size() == 0) {
		delete curr;
		curr = nullptr;
		return;
	}
	for (auto &p : curr->children) {
		_free_nodes(p);
	}
}

void TriggerTree::insert(Node * parent, Node *node) {

}

void TriggerTree::erase(Node* node) {

}

void TriggerTree::erase(int id) {

}

void TriggerTree::find(Node *) {

}

void TriggerTree::find(int id) {

}