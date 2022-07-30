#include <bits/stdc++.h>
using namespace std;
int main(){

  map<int, int> mp;

  mp[10]=15;
  mp[15]=20;
  mp[5]=30;
  mp[20]=25;
  mp[12]=40;

  for (auto [a, b] : mp){
  cout << a << " " << b <<'\n';
  }
  cout <<'\n';

  unordered_map<int, int> ump;

  ump[10]=15;
  ump[15]=20;
  ump[5]=30;
  ump[20]=25;
  ump[12]=40;

  for (auto [a,b] : ump){
  cout << a << " " << b << '\n';
  }
  cout << "\nset...\n";

  set<int> st;

  st.insert(10);
  st.insert(15);
  st.insert(25);
  st.insert(20);
  st.insert(5);

  for (auto i : st)
  cout << i << " " << '\n';

  cout << '\n';

  auto it = st.begin();

  cout << (*it) <<'\n';

  it++; it++;
  cout << (*it) << '\n';
  
  cout << '\n';

  it = st.end();

  it--;
  cout << (*it) << '\n';

  it--; it--;
  cout << (*it) << '\n';

  cout << '\n';

  st.erase(st.begin());

  cout << (*st.begin()) << '\n';

  for (auto i : st)
  cout << i << " " << '\n';

  it = st.find(80);

  if (it != st.end()){
  cout << "Yes it has!" << '\n';
  }
  else cout << "No!" << '\n';
  cout << '\n';

  unordered_set<int> us;

  us.insert(10);
  us.insert(15);
  us.insert(25);
  us.insert(20);
  us.insert(5);

  for (auto i : us)

  cout << i << " " << '\n';

  cout << '\n';

  us.erase(us.begin());

  cout << "unordered_set size : " << us.size() << '\n';

  auto sig = us.begin();
  cout << *sig << '\n';

  sig++; sig++;
  cout << *sig << '\n';

 // auto en = us.end();
  //en--;
  //cout << *en << '\n';

  return 0;
}


