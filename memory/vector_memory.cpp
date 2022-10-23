#include <iostream>
#include <vector>

using namespace std;

int main()
{

	int column;
	int row;

	// vector create
	vector<vector<int>> v_1st(row);
	vector<vector<int>> v_2nd(row);
	vector<vector<int>> v_result(row);
	
	cout << "X : ";
	cin >> column;
	
	cout << "Y : ";
	cin >> row;
	
	
	// First Matrix Input
	cout << endl <<"[ First Matrix Input ]" << endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			int n;
			cin >> n;
			v_1st[i].push_back(n);
		}
	}	


	// Second Matrix Input
	cout << endl <<endl <<"[ Second Matrix Input ]" << endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){	
			int n;	
			cin >> n;
			v_2nd[i].push_back(n);
		}
	}	

	cout << endl;
	cout << "---------------------------------------";
	cout << endl;

	// First Matrix Output
	cout << endl <<"[ First Matrix Output ]" << endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			cout << (*(v_1st.begin() + i))[j] << "   ";
		}
		cout << endl;
	}
	
	cout << endl;
	cout << endl;

	// Second Matrix Output
	cout << endl <<"[ Second Matrix Output ]" << endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			cout << (*(v_2nd.begin() + i))[j] << "   ";
		}
		cout << endl;
	}
	
	
	
	// Result
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			v_result[i].push_back(v_1st[i][j] + v_2nd[i][j]);
		}
	}
	
	
	// Result Output
	cout << endl <<"[ Result Matrix Output ]" << endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			cout << (*(v_result.begin() + i))[j] << "   ";
		}
		cout << endl;
	}
	

	return 0;
}
