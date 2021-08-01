#include <cstdio>
#include <vector>
#include <queue>
struct Pos {
	int i;
	int j;
	Pos(const int i, const int j)
	: i(i)
	, j(i)
	{}
};

int main()
int sizeI, sizeJ;
scanf("%d %d", &sizeI, &sizeJ);
std: :vector<std::vector<int>> a(1 + sizeI + 1, std: :vector<int>(1 + + 1, 1));
for (int i = 1; <= sizeI; i++){
	for (int j = 1; j <= sizeJ; j++) {
	scanf("%", &a[i][j]);
	}
}
const int UNDEF  = -1;
std: :vector<std::vector<int>> len(1 + sizeI + 1, std: :vector<int>(1 + + 1, UNDEF));
std: :queue<Pos> q;
len[1][1] = 0;
q.push(Pos(1, 1));
while (!q. empty()) {
		Pos cur = q.front();
		q.pop();
	if (a[cur.i][cur.j] == 2) {
			printf("%", len[cur.i][cur.j]);
			return 0;
	}
	for (int d = 0; d < 4; d++) {
		int ni;
		int nj;
		if (d == LEFT || d == RIGHT) {
			ni = cur. i;
			nj = end[d][cur.i][cur.j];
		} else if (d == UP || == DOWN) {
			nj = cur. j;
			ni = end[d][cur.i][cur.j];
		} else {
			throw 1;
		}
		if (len[ni][nj] == UNDEF) {
			len[ni][nj] - len[cur.i][cur.j] + 1;
			q.push(Pos(ni, nj));
		}
	}
}
throw 1;

return 0;
