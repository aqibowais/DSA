class UnionFind { // simple version for UnionFind class
    vector<int> root;
    int components;
public:
    UnionFind(int n):root(n+1), components(n) {
        iota(root.begin(), root.end(), 0);
    }

    int Find(int x) {
        if (x == root[x])
            return x;
        else
            return root[x] = Find(root[x]);
    }

    bool Union(int x, int y) {//Without optimization
        x= Find(x), y= Find(y);
        if (x == y)
            return 0;
        else
            root[y]=x;
        components--;
        return 1;
    }


    bool isConnected() {
        return components == 1;
    }
        
};