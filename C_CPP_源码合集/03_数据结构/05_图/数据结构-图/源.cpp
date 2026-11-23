#include<stdio.h>
//邻接矩阵存储图
#define MaxVertexnum 100//顶点数目最大值
typedef char VertexType;
typedef int EdgeType;
typedef struct {
	VertexType vex[MaxVertexnum];//顶点表
	EdgeType edge[MaxVertexnum][MaxVertexnum];//邻接矩阵
	int vexdnum, arcnum;
}MGraph;
//查找顶点x的第一个邻接点(FirstNeighbor)
int FirstNeighbor(MGraph G, int x) {
	if (x < 0 || x >= G.vexdnum)
		return -1;
	for (int j = 0; j < G.vexdnum; j++) {
		if (G.edge[x][j] == 1)
			return j;
	}
	return -1;
}
int NextNeighbor(MGraph G, int x, int y) {
	if (x<0 || y<0 || x>G.vexdnum || y>G.vexdnum) {
		return -1;
	}
	for (int j = y+1; j < G.vexdnum; j++) {
		if (G.edge[x][j] == 1)
			return j;
	}
	return -1;
}

//邻接表存储
typedef struct ArcNode {//边表结点
	int adjvex;//该弧所指向的顶点的位置
	struct ArcNode* nextarc;//指向下一条弧的指针
	//InfoType info [网的边权值]
}ArcNode;

typedef struct VNode {//顶点表结点
	VertexType data;//顶点信息
	ArcNode* firstarc;//指向第一条依附该顶点的弧的指针
}VNode,AdjList[MaxVertexnum];

typedef struct {
	AdjList vertices;//邻接表
	int vexnum, arcnum;
}ALGraph;//ALGraph是以邻接表存储的图类型

int FirstNeighbor_AL(ALGraph G, int x) {
	if (x < 0 || x >= G.vexnum)
		return -1;
	ArcNode* p = G.vertices[x].firstarc;
	if (p != NULL)
		return p->adjvex;
	return -1;
}
int NextNeighbor_AL(ALGraph G, int x, int y) {
	if (x<0 || y<0 || x>G.vexnum || y>G.vexnum) {
		return -1;
	}
	ArcNode* p = G.vertices[x].firstarc;
	while (p != NULL && p->adjvex != y) {
		p = p->nextarc;
	}
	if (p == NULL || p->nextarc == NULL)
		return -1;
	else
		return p->nextarc->adjvex;
}

//图的邻接表法转成邻接矩阵：
#define M 100
#define N 100
#define n 10
void Comvert(ALGraph &G,int arcs[M][N]) {
	ArcNode *p;//边表结点
	for (int i = 0; i < G.vexnum; i++) {
		for (int j = 0; j < G.vexnum; j++) {
			arcs[i][j] = 0;
		}
	}// 先把邻接矩阵全部初始化为0
	for (int i = 0; i < n; i++) {
		p = (G.vertices[i]).firstarc;
		while (p != NULL) {
			arcs[i][p->adjvex] = 1;
			p = p->nextarc;
		}
	}
}

//王道P209.07题
static int IsExistEL(MGraph G) {
	int drgee, i, j, count = 0;
	for (int i = 0; i < G.vexdnum; i++) {
		drgee = 0;
		for (j = 0; j < G.vexdnum; j++)
			drgee += G.edge[i][j];
		if (drgee % 2 == 0)
			count++;
	}
		if (count == 0 || count == 2)
			return 1;
		else
			return 0;
}

#define MAX_VERTEX_NUM 10
bool visited[MAX_VERTEX_NUM];
void DESTraverse(ALGraph G) {
	for (int i = 0; i < G.vexnum; i++) {
		visited[i] = false;
	}//标记数组
	for (int i = 0; i < G.vexnum; i++) {
		if (!visited[i])
			ALGraphIsTree(G,G.vertices[i].data);
	}
}

int top,stack[MAX_VERTEX_NUM];
bool ALGraphIsTree(ALGraph G,int i) {
	visited[i] = true;
	stack[++top] = G.vertices[i].data;
	ArcNode* p = G.vertices[i].firstarc;
	for (p; p; p = p->nextarc) {
		int k = p->adjvex;
		stack[++top] = p->adjvex;
		for (int j = 0; j <top; j++) {
			if (stack[j] == stack[top])
				return false;
		}
		if (visited[i] != false)
			ALGraphIsTree(G, k);
	}
	return true;
}//这段代码不DEBUG了,懒
void Intodegree(MGraph G, int* degree) {

}
#include<stdlib.h>
typedef struct {
	int numVertices, numEdges;
	char VerticesList[MaxVertexnum];
	int Edge[MaxVertexnum][MaxVertexnum];
}mGraph;
//判断图G是否存在唯一拓扑序列
//int Degree[MaxVertexnum];
int uniquely(mGraph G) {
	int stack[MaxVertexnum] = { 0 };
	int* degree,j,i, count = 0, in0 = -1, prev_in0;
	degree = (int *)malloc(sizeof(int) * G.numVertices);
	for (i = 0; i < G.numVertices; i++) {//计算各顶点入度
		degree[i] = 0;
		for (j = 0; j < G.numVertices; j++) {
			degree[i] += G.Edge[j][i];
			/*对用邻接矩阵存储的图(无向图或者有向图,行表示入，列表示出)中
			每个行号对应的元素进行其对应的入边搜索
			*/
		}
		if (degree[i] == 0) {
			if (in0 == -1)
				in0 = i;//入度为0的顶点
			else
				in0 = -2;//有多个入度为0的顶点
		}
	}
	while (in0 >= 0) {
		count++;
		prev_in0 = in0;
		in0 = -1;
		for (j = 0; j < G.numVertices; j++) {
			if (G.Edge[prev_in0][j] != 0) {
				if (--degree[j] == 0) {//邻接点入度减1
					if (in0 == -1)
						in0 = j;
					else
						in0 = -2;
				}
			}
		}
	}

	free(degree);
	if (count == G.numVertices)
		return -1;
	else
		return 0;
}
int main() {
	top = -1;
}

