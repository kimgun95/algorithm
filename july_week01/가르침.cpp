#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

typedef pair<char, int> pci;

int N, K;
string word;
vector<string> words;
map<char, int> visited;
map<char, int> res;
int cases; 
int answer = 0;

int word_check(map<char, int> res) {
	int ans = 0;
	for (int i = 0; i < words.size(); i++) {
		int check = 0;
		for (int j = 0; j < words[i].size(); j++) {
			char c = words[i][j];
			if (!(c == 'a' || c == 'n' || c == 't' || c == 'i' || c == 'c')) {
				if (res[c] != 1) {
				check = 1;
				break;
				}
			}
			

		}
		if (check == 0) ans++;
	}
	return ans;
}
void Combination(vector<char> arr, vector<char> comb, int r, int index, int depth)
{
	
    if (r == 0)
    {
        for(int i = 0; i < comb.size(); i++) {
            res[comb[i]] = 1;
		}
            
        answer = max(answer, word_check(res));
        res.clear();
    }
    else if (depth == arr.size())  // depth == n // ��� �Ȼ̴ٰ� r ���� ä���� ���� ���� �� ���� �ɷ��� �Ѵ�.
    {
        return;
    }
    else
    {
        // arr[depth] �� ���� ���
        comb[index] = arr[depth];
        Combination(arr, comb, r - 1, index + 1, depth + 1);
        
        // arr[depth] �� ���� ���� ���
        Combination(arr, comb, r, index, depth + 1);
    }
}

int main() {
	// N, K �Է�. 
	cin >> N >> K;
	// N�� ��ŭ �ܾ� �Է�. 
	for (int i = 0; i < N; i++) {
		cin >> word;
		word = word.substr(4, word.size());
		word = word.substr(0, word.size() - 4);
		words.push_back(word);
	}
	// ���ĺ� visited ���� 
	for (int i = 97; i < 123; i++) {
		char c = i;
		if (c == 'a' || c == 'n' || c == 't' || c == 'i' || c == 'c') {
			visited.insert(pci(c, 1));
		} else {
			visited.insert(pci(c, 0));
		}
		res.insert(pci(c, 0));
	}
	
	 
//	cout << visited['a'] << endl;

	// �н��� �� �ִ� ���ο� ������ ���� �ľ�. 
	int count = 0;
	vector<char> arr;
	for (int i = 0; i < words.size(); i++) {
		for (int j = 0; j < words[i].size(); j++) {
			if (visited[words[i][j]] == 0) {
				visited[words[i][j]] = 1;
				arr.push_back(words[i][j]);
				count++;
			}
		}
	}
//	for (int i = 0; i < arr.size(); i++) {
//		cout << arr[i] << endl;
//	}

	int able = K - 5;
	if (able < 0) {
		cout << 0;
		return 0;
	}
    vector<char> comb(able);
	Combination(arr, comb, able, 0, 0);
	
	cout << answer << endl;
	

	
	
	
}
