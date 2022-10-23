#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
using namespace std;


typedef struct {
	char name[10];
	int mid_score;
	int end_score;
} Stu_info;


int main()
{
	int n;
	
	map<int, Stu_info> map;
	
	
	cout << endl << "Student count : ";
	cin >> n;
	
	for(int i = 0; i < n ; i++)
	{
	
		Stu_info stu_info;
	
		cout << "Name : ";
		cin >> stu_info.name;
		
		cout << "Mid score : ";
		cin >> stu_info.mid_score;
		
		cout << "End score : ";
		cin >> stu_info.end_score;

		map.emplace(i,stu_info);
		cout << endl << " [ Registerd Stuednet Info] " << endl << endl;
	}
	
	
	cout << endl << "--------------------------------------" << endl;
	cout << endl << " [ Student Information ] " << endl << endl;
	
	for(auto i = begin(map); i!= end(map); ++i){
		cout << "Name : " << i->second.name << endl << "mid_score : " << i->second.mid_score << endl << "end_score : " << i->second.end_score << endl << endl;
	}
		
	return 0;
}
