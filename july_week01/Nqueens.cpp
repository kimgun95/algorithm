//n = int(input())
//# nũ�� ��ŭ �迭 �ʱ�ȭ
//q = [0 for i in range(n)]
//cnt = 0
//
//# ����ġ�� �Լ�(�������� ���� ������ Ž������ ������ ������ ��忡 ���ؼ��� Ž���� �Ѵ�)
//def pruning(q, n):
//    # ������ ���Ҵ� ����� ������ ��ġ���� Ȯ��
//    for i in range(n):
//        # ���� ���� �ִٸ� false
//        if q[i] == q[n]:
//            return 0
//        #  ������ �� ���⿡ ���� �ִٸ� false
//        if (q[i] - q[n]) == (n - i):
//            return 0
//        #  ���� �� ���⿡ ���� �ִٸ� false
//        if (q[n] - q[i]) == (n - i):
//            return 0
//    return 1
//
//# 0��° �迭���� ���� �ϳ��� �߰��Ѵ�
//# n�� 0�� ù �����̰� n + 1�� ���� �÷�����
//def nQueen(q, n):
//    length = len(q)
//    # ���� ������ ä��µ� �����ϸ� cnt�� ������Ų��
//    if n == length:
//        global cnt
//        cnt += 1
//    else:
//        # n��° �迭�� i��ġ�� ���� ���´�
//        for i in range(length):
//            q[n] = i
//            # ����ġ�⸦ �ǽ��ϸ� ������ ��� �߽߰� ���� �迭�� �� ��ġ�� �����Ѵ�
//            if pruning(q, n) == 1:
//                nQueen(q, n+1)
//
//nQueen(q, 0)
//print(cnt)

#include <iostream>
using namespace std;

int main() {
	return 0;
}
