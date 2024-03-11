class Solution {
  public:
    string customSortString(string S, string T) {
        unordered_map<char, int> dir;
        int i = 0;
        transform(S.begin(), S.end(), inserter(dir, dir.end()),
                  [&](char &a) { return make_pair(a, ++i); });
        sort(T.begin(), T.end(),
             [&](char a, char b) { return dir[a] < dir[b]; });
        return T;
    }
};