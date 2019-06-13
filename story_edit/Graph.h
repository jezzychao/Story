#pragma once
#include <vector>

template <typename T>
struct Edge {
	Vertex<T> *from;
	Vertex<T> *to;
	//T *data;
};

template <typename T>
struct Vertex {
	//�ö�������Ӧ�ĳ��ȱ�
	std::vector<Edge<T>*> edges;
	T *data;
};

template <typename T>
class Graph {
	using PVtx = Vertex<T>*;
	using PEge = Edge<T>*;
public:
	Graph() {};
	~Graph() {
		for (auto &pV : vertexs) {
			for (auto &pE : pV->edges) {
				if (pE) { delete pE; }
			}
			delete pV;
		}
	};

	//���һ���ߣ�����2������
	void add_edge(PVtx from, PVtx to) {

	}

	//ɾ��һ����
	void del_edge(PEge edge){
	
	}

	//
	void add_vertex(PVtx vertex) {

	}

	void del_vertex(PVtx vertex) {

	}

	PVtx query_vertex(PVtx vertex) {

	}

	//PEge query_edge(PEge edge) {}

private:
	std::vector<PVtx> vertexs;
};