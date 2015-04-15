#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <vector>

using namespace std;

void splitSalaries(const string &txt, list<string> &sal, char ch)
{
    int pos = txt.find(ch);
    int initialPos = 0;
    sal.clear();

    while( pos != string::npos ) {
        string val = txt.substr( initialPos, pos - initialPos + 1 );
        sal.push_back(val);
        initialPos = pos + 1;
        pos = txt.find( ch, initialPos );
    }
    // last part
    sal.push_back( txt.substr( initialPos, std::min<unsigned long>( pos, txt.size() ) - initialPos + 1 ) );

}

string salaryOfSurvived(string s){
  list<string> salary;
  splitSalaries(s, salary, ' ');
  salary.sort();
  //move all the contents from a the sorted list to vector
  //  vector<string> v{ begin(salary), end(salary) }; //this is only copy
    vector<T> v{ std::make_move_iterator(std::begin(salary)),
                  std::make_move_iterator(std::end(salary)) };
  /* Alternative way from the list itself
  auto i = salary.begin(); ////list<string>::iterator
  i = salary.erase(i);
  return *i;
  */
  return v.at(1);
}

int main(int argc, char *argv[]){
  int n;
  string s;
  cin >> n;
  getline(cin, s);
  for(int i = 0; i < n; i++){
    getline(cin, s);
    cout << "case "<< i+1 <<": "<< salaryOfSurvived(s) << endl;
  }

return 0;
}
