public:
    set<int>lop;
    SmallestInfiniteSet() {
        for(int hipo=1;hipo<=1000;hipo++){
            lop.insert(hipo);
        }
    }
    
    int popSmallest() {
        int kipo=*lop.begin();
        lop.erase(lop.begin());
        return kipo;
    }
    
    void addBack(int numoo) {
        lop.insert(numoo);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
