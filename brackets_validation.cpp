#include "template.cpp"

char pair[256];

int validate(cost string &str) {
	pair['('] = ')';	pair[')'] = '(';
	pair['['] = ']';	pair[']'] = '[';
	pair['{'] = '}';	pair['}'] = '{';
	vector<char> st;
	for (char c : str) {
		if (c == '{' || c=='[' || c=='{') {
			st.push_back(c);
		} else 
		if (c == '}' || c==']' || c=='}') {
			if (!st.size())	return 0;
			char x = st.back();
			st.pop_back();
			if (pair[x] != c)
				return 0;
		}
	}
	if (st.size())	return 0;
	return 1;
}
