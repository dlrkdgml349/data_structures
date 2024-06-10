#include <stdio.h>
#include <stdlib.h>
#include "adjList.h"

void createGraph(graphType* g) {
	int i, j;
	g->n = 0;
	for (i = 0; i < MAX_VERTEX; i++) {
		g->adjList_H[i] = NULL;
		g->visited[i] = FALSE;
	}
}

void insertVertex(graphType* g, int v) {
	if (((g->n) + 1) > MAX_VERTEX) {
		printf("\n �׷��� ������ ������ �ʰ��Ͽ����ϴ�!");
		return;
	}
	g->n++;
}

void insertEdge(graphType* g, int u, int v) {
	graphNode* node;
	if (u >= g->n || v >= g->n) {
		printf("\n �׷����� ���� �����Դϴ�!");
		return;
	}
	node = (graphNode*)malloc(sizeof(graphNode));
	node->vertex = v;
	node->link = g->adjList_H[u];
	g->adjList_H[u] = node;
}

void  print_adjList(graphType* g) {
	int i;
	graphNode* p;
	for (i = 0; i < (g->n); i++) {
		printf("\n\t\t���� %c�� ���� ����Ʈ", i + 65);
		p = g->adjList_H[i];
		while (p) {
			printf(" -> %c", p->vertex + 65);
			p = p->link;
		}
	}
}