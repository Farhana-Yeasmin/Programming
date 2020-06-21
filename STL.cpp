#include <bits/stdc++.h>
using namespace std;

void VECTOR()
{
    
    
        vector<int>vc;
        vc.push_back(5);
        vc.push_back(34534);
        vc.push_back(-15);
        vc.push_back(-20);
        vc.push_back(0);
        sort(vc.begin(), vc.end()); /// Intro Sort = Quick Sort + Heap Sort / Merge Sort + Insertion Sort , O(NlogN)
        
        for(int i = 0; i < vc.size(); i++)
        {
            cout << vc[i] << " ";
        }
        cout << "\n";
        cout << vc.size() << "\n";
    
}

void SET()
{
/**
        You are given N integers. Find the number of distinct integers among them.
        9
        1 2 1 2 3 1 2 2 3
        1 1 1 2 2 2 2 3 3
        cnt = 3
        self balancing binary search tree
    **/
    set<int>my_set; /// item sorted in  ascending  
    int n;
    cin >> n; 
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        my_set.insert(val);
    }
    for(int val : my_set)
        cout << val << " ";
    cout << my_set.size() << "\n"; 

    cout << my_set.size() << "\n";
}

void MAP()
{
    map<int, int>mp;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int key, value;
        cin >> key >> value;
        mp[key] = value;
    }
    for(auto item : mp) cout << item.first << " " << item.second << "\n";
}
void QUEUE() /// FIFO -> First In First Out
{
    queue<int>Q;
    Q.push(1);
    Q.push(2);
    Q.push(3); /// insertion -- Q (1, 2, 3)
    cout << Q.front() << "\n"; /// 1
    Q.pop();
    cout << Q.front() << "\n"; /// 2
}

void PRQ()
{
    priority_queue<int>PQ; /// PQ -> (15 21 18 67 42) PQ.front() => 67 , PQ.pop();
    /// PQ -> (15 21 18 42) PQ.front() => 42 , PQ.pop();
    /// PQ -> (15 21 18) PQ.front() => 21 , PQ.pop();
    /// PQ -> (15 18) PQ.front() => 18 , PQ.pop();
    /// PQ -> (15) PQ.front() => 15 , PQ.pop();
    /// Heap Sort
    PQ.push(15); /// O(logN) : N = |PQ|
    PQ.push(21);
    PQ.push(18);
    PQ.push(67);
    PQ.push(42);

    while(!PQ.empty())
    {
        cout << PQ.top() << "\n"; /// O(1)
        PQ.pop(); /// O(logN) : N = |PQ|
    }
}


int main()
{
   MAP();
   VECTOR();
   SET();
   QUEUE();
   PRQ();
    
    return 0;
}