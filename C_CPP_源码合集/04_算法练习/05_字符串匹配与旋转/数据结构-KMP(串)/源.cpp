int arr1[10] = { 9,8,1,2,3,5,6,1,2,3 }, arr2[3] = { 1,2,3 };
int numsubstring(int arr1[], int arr2[]) {
	int i = 0, j = 0,k = 0;
	while (i <10 && j <=3) {
		if (j == 3) {
			j = 0;
			k++;
		}
		if (arr1[i] == arr2[j]) {
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	return k;
}
int main() {
}
