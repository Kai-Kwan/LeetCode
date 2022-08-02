#include <iostream>
#include <set>
using namespace std;
class MedianFinder {
    set<double> m_max;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        m_max.insert(num);
    }
    
    double findMedian() {
        if(m_max.empty())return 0;
        if(m_max.size()%2==0){
            
        }
        
     return 0;   
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */