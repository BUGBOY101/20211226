#define	_CRT_SECURE_NO_WARNINGS 1

//动规

#include<iostream>
using namespace std;
int dpv[2005], dpn[2005];
int main() {
	int vi[110], wi[110], n, w, i, j;
	/*memset(dpv, 0, sizeof(dpv));
	memset(dpn, 0, sizeof(dpn));*/
	cin >> n >> w;
	for (i = 1; i <=n; i++) {
		cin >> vi[i] >> wi[i];
	}
	for (i = 1; i <= n; i++) {
		for (j = w; j>= wi[i]; j--) {
			if (dpv[j - wi[i]] + vi[i] >= dpv[j]) {
				dpv[j] = dpv[j - wi[i]] + vi[i];
				dpn[j]=dpn[j-wi[i]]+1;
			}
		}
	}
	cout << dpv[w] << " " << dpn[w] << endl;
}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	int v;
//	int w;
//	double bi;
//}gd[110];
//bool cmp(node a, node b) {
//	if (a.bi == b.bi)
//		return a.w > b.w;
//	else
//		return a.bi > b.bi;
//}
//int main() {
//	int n, w, i,s, count;
//	cin >> n >> w;
//	for (i = 1; i <= n; i++) {
//		cin >> gd[i].v >> gd[i].w;
//		gd[i].bi =(double)gd[i].v / gd[i].w;
//	}
//	gd[0].v = -1;
//	gd[0].w = -1;
//	sort(gd+1, gd + n+1, cmp);
//	i = 1;
//	s = 0;
//	count = 0;
//	while (w && i <= n) {
//		if (gd[i].w <= w) {
//			s += gd[i].v;
//			w -= gd[i].w;
//			count++;
//		}
//		i++;
//	}
//	cout << s << " " << count << endl;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main() {
//	int a[110], i, n, sum = 0, aver, count = 0;
//	cin >> n;
//	for (i = 0; i < n; i++) {
//		cin >> a[i];
//		sum += a[i];
//	}
//	aver = sum / n;
//	for (i = 0; i < n; i++) {
//		if (a[i] != aver) {
//			a[i + 1] += (a[i] - aver);
//			count++;
//		}
//	}
//	cout << count << endl;
//}

//2.最长公共子序列

//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define N 10000
//int dp[N][N], a[N][N];
//bool issum(char a, char b) {
//	return a == b ? 1 : 0;
//}
//int max(int a, int b, int c) {
//	if (a < b)
//		a = b;
//	if (a < c)
//		a = c;
//	return a;
//}
//int main() {
//	int n1,n2, i, j, t;
//	char s1[1000], s2[1000];
//	cin >> t;
//	while (t--) {
//		cin >> s1 >> s2;
//		memset(dp, 0, sizeof(dp));
//		n1 = strlen(s1);
//		n2 = strlen(s2);
//		for (i = 1; i <= n1; i++) {
//			for (j = 1; j <= n2; j++) {
//				dp[i][j] = max(dp[i - 1][j - 1] + issum(s1[i-1], s2[j-1]), dp[i - 1][j], dp[i][j - 1]);
//			}
//		}
//		cout << dp[n1][n2] << endl;
//	}
//}

//1.数塔

//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define N 10000
//int a[N][N], dp[N][N];
//int main() {
//	int n, i, j, t;
//	cin >> t;
//	while (t--) {
//		cin >> n;
//		memset(dp, 0, sizeof(dp));
//		for (i = 1; i <= n; i++) {
//			for (j = 1; j <= i; j++)
//				cin >> a[i][j];
//		}
//		for (i = 1; i <= n; i++) {
//			dp[n][i] = a[n][i];
//		}
//		for (i = n - 1; i >= 1; i--) {
//			for (j = 1; j <= n; j++) {
//				dp[i][j] = max(dp[i + 1][j] + a[i][j], dp[i + 1][j + 1] + a[i][j]);
//			}
//		}
//		cout << dp[1][1] << endl;
//	}
//}