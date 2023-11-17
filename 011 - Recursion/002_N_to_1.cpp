void pDec(int x, vector<int> &v, int i = 1){
    if(i > x)
        return;
    pDec(x,v, i+1);
    v.emplace_back(i);
}

vector<int> printNos(int x) {
    vector<int> ans;
    pDec(x, ans, 1);

    return ans;
}