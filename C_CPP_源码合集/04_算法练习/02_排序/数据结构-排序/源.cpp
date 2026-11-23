typedef int ElemType;
//直接插入排序(A[0]哨兵)
void InsertSort(ElemType A[], int n) {
	int i, j;
	for (int i = 2; i <= n; i++) {
		if (A[i] < A[i - 1])
			A[0] = A[i];
		for (j = i - 1; A[0] < A[j]; --j)
			A[j + 1] = A[j];//从后往前挪
		A[j + 1] = A[0];
	}
}
//折半插入排序
void BInsertSort(ElemType A[], int n) {
	int i, j, low, height, mid;
	for (int i = 2; i <= n; i++) {
		A[0] = A[i];//暂存A[i]
		low = 1; height = i - 1;//查找范围
		while (low <= height) {
			mid = (low + height) / 2;
			if (A[mid] > A[0])
				height = mid - 1;
			else
				low = mid + 1;
		}
		for (j = i - 1; j >= height + 1; j--)
			A[j + 1] = A[j];//统一后移
		A[height + 1] = A[0];//插入操作
	}
}
//希尔排序
void ShellSort(int A[], int n) {
	//A[0]作为一个暂存单元，不是哨兵，插入位置已到
	int dk, i, j;
	for (dk = n / 2; dk >= 1; dk /= 2) {
		for (i = dk + 1; i <= n; i++) {
			if (A[i] < A[i - dk]) {
				A[0] = A[i];//暂存在A[0]
				for (j = i - dk; j > 0 && A[0] < A[j]; j -= dk)
					A[j + dk] = A[j];
				A[j + dk] = A[0];
			}
		}
	}
}

//冒泡排序
void BubbleSort(ElemType A[], int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		bool flag = false;
		for (int j = 0; j < n - i - 1; j++)
			if (A[j - 1] > A[j]) {
				temp = A[j - 1];
				A[j - 1] = A[j];
				A[j] = temp;
				flag = true;

				if (!flag)
					return;
			}
	}
}
	//快速排序
	int partition(ElemType A[], int low, int high) {
		ElemType pviot = A[low];
		while (low < high) {
			while (low < high && A[high] >= pviot) --high;
			A[low] = A[high];
			while (low < high && A[low] < pviot) --low;
			A[high] = A[low];
		}
		A[low] = pviot;
		return low;
	}
	//递归实现
	void QuickSort(ElemType A[], int low, int high) {
		if (low < high) {
			int pviotpos = partition(A, low, high);
			QuickSort(A, low, pviotpos - 1);
			QuickSort(A, pviotpos + 1, high);
		}
	}
	//迭代要借助栈来实现.

	//基于快排的划分思想来写
	void move(ElemType A[], int n) {
		int i = 1,j=n-1;
		int p = A[i];
		while (i < j) {
			while (i < j && (A[j] % 2))j--;
			A[i] = A[j];
			while (i < j && !(A[i] % 2))i++;
			A[j] = A[i];
		}
		A[j] = p;
	}
#define K 20
	int n[K];
	//查找第k小的函数
	ElemType checknumk(ElemType A[], int size,int k) {
		int num = 0, m = 0;
		n[m] = A[0];
		for (int i = 1; i <= k; i++) {
			for (int j = 1; j < size; j++) {
				if (A[j] < n[m] && i == 1)
					n[m++] = A[j];
				n[m] = A[0];
				if (A[j] > n[m - 1] && A[j] < A[j - 1])
					n[m++] = A[j];
			}
		}
		return n[m-1];
	}
	//bug:多次调用该函数须重置数组元素为0,可能跑不通。。。
	
	//豆包版:
#define K 20
	ElemType n[K]; // 全局，初始全0
	ElemType checknumk(ElemType A[], int size, int k) {
		int m = 1;
		// n[0] = 0，利用全局初始0作为下界
		for (int i = 1; i <= k; i++)
		{
			ElemType tmp_min = 0x7fffffff;//int数据最大值
			for (int j = 1; j < size; j++)
			{
				// 找 > n[m-1] 的所有数里面最小的那一个
				if (A[j] > n[m - 1] && A[j] < tmp_min)
				{
					tmp_min = A[j];
				}
			}
			n[m] = tmp_min;
			m++;
		}
		return n[k];
	}

	int kth_elem(int a[], int low, int high, int k) {
		int pviot = a[low];
		int low_temp = low;//保留原值
		int high_temp = high;//保留原值
		while (low < high) {
			while (low < high && a[high] >= pviot) --high;
			a[low] = a[high];
			while (low < high && a[low] < pviot) --low;
			a[high] = a[low];
		}
		a[low] = pviot;
		//上面为快排的划分思想
		if (low == k)
			return a[low];
		else if (low < k)
			return kth_elem(a, low + 1, high_temp, k);
		else
		return kth_elem(a, low_temp,low-1, k);
	}

	//荷兰旗问题
	typedef enum{RED,WHITE,BLUE} color;//枚举表示有限，固定的状态
	void Flag_Arrange(color a[], int n) {
		int i = 0, j = 0, k = n - 1;
		color temp;
		while (j <= k) {
			switch (a[j]) {
			case RED:
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				i++, j++;
				break;
			case WHITE:
				j++;
				break;
			case BLUE:
				temp = a[j];
				a[j] = a[k];
				a[k] = temp;
				k--;
			}
		}
	}

//简单选择排序
	void SelectSort(ElemType A[], int n) {
		for (int i = 0; i < n - 1; i++) {//共进行n-1趟
			int min = i,temp;
			for (int j = i + 1; j < n; j++)
				if (A[min] < A[j])min = j;//更新最小元素位置
			if (min != i) {//元素移动3次
				temp=A[min];
				A[min] = A[i];
				A[i] = temp;
			}
		}
	}


	//堆排序[当查找第k小元素时,k>5时堆排序性能最优
	//建立大根堆(线性顺序表存储的表):
	void buildMaxheap(ElemType A[], int len) {
		for (int i = len / 2; i > 0; i--) {
			HeadAdjust(A, i, len);
		}
	}
//对以k为根的子树进行调整
	void HeadAdjust(ElemType A[], int k, int len) {
		A[0] = A[k];
		for (int i = 2 * k; i <= len; i *= 2) {//往下筛选
			if (i < len && A[i] < A[i + 1])
				i++;
			if (A[0] >= A[i]) break;
			else
			{
				A[k] = A[i];
				k = i;
			}
		}
		A[k] = A[0];
	}
	//堆排序:
	void HeadSort(ElemType A[], int len) {
		int temp;
		buildMaxheap(A, len);//初始建堆
		for (int i = len; i > 1; i++) {//执行n-1趟排序
			temp = A[1];
			A[1] = A[i];
			A[i] = temp;
			HeadAdjust(A, 1, i - 1);
		}
	}
//判断数据序列是否是构成一个小根堆
	bool IsMinHeap(ElemType A[], int len) {
		for (int i = 1; i < len&&(2*i)<=len; i++) 
			if (A[i] > A[2 * i] && A[i] > A[2 * i + 1])
				return false;
			return true;
	}
//priority_queue(优先队列)
	typedef struct {
		int value;
		int priority;
	}PriorityQueueElement;
#define Maxsize 100
	typedef struct {
		PriorityQueueElement queue[Maxsize];
		int size;
	}PriorityQueue;

	//void enqueue(PriorityQueue* pq, int value, int priority) {
	//	if (pq->size >= Maxsize)
	//		return;

	//}
	
#include<stdlib.h>
	//为什么有时需要用malloc分配内存空间?
	//归并排序:
	ElemType* B = (ElemType*)malloc((Maxsize + 1) * sizeof(ElemType));
	void merge(ElemType A[], int low, int high, int mid) {
		int i, j, k;
		for (int k = low; k <= high; k++)
			B[k] = A[k];
		for (i = low, j = mid + 1,k=i; i < mid && j < high;k++) {
			if (B[i] < B[j])
				A[k] = B[i++];
			else
				A[k] = B[j++];
		}
		while (i < mid)A[k++] = B[i++];
		while (j < high)A[k++] = B[j++];
		}

	void MergeSort(ElemType A[], int low, int high) {
		if (low < high) {
			int mid = (high + low) / 2;
			MergeSort(A, low, mid);
			MergeSort(A, mid + 1, high);
			merge(A, low, high, mid);
		}
	}

