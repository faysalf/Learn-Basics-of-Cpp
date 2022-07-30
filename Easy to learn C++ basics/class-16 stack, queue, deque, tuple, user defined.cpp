#include <bits/stdc++.h>
using namespace std;

int avg(int a, int b) {     //user defined (return type)
    return (a+b) / 2;
}

void sum(int a, int b) {    //user defined (void type)
    cout << a+b <<'\n';
}

void mul() {                //user defined (void type)
    int a, b; cin >> a >> b;
    cout << a*b << '\n';
}

int main() {
    
    tuple<int, string, double, int, char> tu;
    
    tu = make_tuple(165091, "BBPI", 3.90, 2345, 'C');
    
    cout << get<0>(tu) << ' '<< get<1>(tu) << ' '<< get<2>(tu) << ' '<<get<3>(tu)<< ' '<< get<4>(tu)<< '\n';
    
    
    stack<int> stc;
    stc.push(20);
    stc.push(30);
    stc.push(40);
    stc.push(50);
   
    cout << stc.top() << '\n';
    
    stc.pop();
    cout << stc.top() << "\n\n\n";
    
    
    queue<int>q;
    
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    cout << q.front() << '\n';
    q.pop();
    
    cout << q.front() << '\n';
    cout <<  "size: "<< q.size() << '\n';
    
    
    deque <int> deq;
    
    deq.push_back(20);
    deq.push_back(30);
    deq.push_back(40);
    
    deq.push_front(90);
    deq.push_front(80);
    deq.push_front(70);
    
    cout << deq.front() << '\n';
    cout << deq.back() << '\n';
    
    deq.pop_back();
    deq.pop_front();
    
    cout << deq.front() << '\n';
    cout << deq.back() << '\n';
    
    //User defined function
    
    cout << avg(10, 20) << '\n';
    sum(10,30);
    mul();
    

    return 0;
}
