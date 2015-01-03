#include "template.cpp"

unordered_map<int,int> parent;

int get_parent(int node) {
	return !parent[node] ? node : parent[node] = get_parent(parent[node]);
}

void merge(int x, int y) {
	int a = get_parent(x);
	int b = get_parent(y);
	if ( a == b )
		return;
	parent[a] = b;
}

int main() {
}
