#define SIZE 13
int UFSet[SIZE];//集合元素
//初始化并查集
void Initial(int S[]) {
	for (int i = 0; i < SIZE; i++) {
		S[i] = -1;
	}
//Find"查"操作，找x所属集合
}
int Find(int S[], int x) {
	while (S[x] >= 0) {
		x = S[x];
	}
	return x;
}
//“并”操作，将两个集合合并成一个
void Union(int S[], int Root1, int Root2) {
	if (Root1 == Root2)
		return;
	S[Root2] = Root1;
}
//Union "并"操作，小树合并到大树
void Union(int S[], int root1, int root2) {
	if (root1 == root2)
		return;
	if (S[root1] > S[root2]) {
		S[root2] += S[root1];
		S[root1] = root2;
	}
	else
	{
		S[root1] += S[root2];
		S[root2] = root1;
	}
}

