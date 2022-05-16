#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std; 
int main()
{
  vector<int> v;
  for (int i = 0; i < 5; i++)
    v.push_back(i);

  v.insert(v.begin() + 1, 20); // Insert 20 at index 1
  v.erase(v.end() - 2); // Remove the second last element
  
  for(int i = 0; i < v.size(); ++i)
  {
      std::cout << v.at(i) << " "; 
  }
  std::cout << std::endl; 

  sort(v.begin(), v.end()); // Sort the elements in v
  for(int i = 0; i < v.size(); ++i)
  {
      std::cout << v.at(i) << " "; 
  }
  std::cout << std::endl; 

  random_shuffle(v.begin(), v.end()); // Shuffle the elements in v
  for(int i = 0; i < v.size(); ++i)
  {
      std::cout << v.at(i) << " "; 
  }
  std::cout << std::endl; 

  cout << "The max element is " << 
    *max_element(v.begin(), v.end()) << endl;

  cout << "The min element is " << 
    *min_element(v.begin(), v.end()) << endl;
  
  int key = 45;
  if (find(v.begin(), v.end(), key) == v.end()) 
    cout << key << " is not in the vector" << endl;
  else
    cout << key << " is in the vector" << endl;

  return 0;
}
