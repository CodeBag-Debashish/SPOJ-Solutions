#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main() {
	int tt,num1,num2,resulting_number;
	std::string line,temp;
	stringstream ss,ss1,ss2;
	string::size_type prev = 0, pos;
	vector<string> wordVector;
	string delims = " +=";
	getline(cin,line);
	ss << line;
	ss >> tt;
	for(int i=0;i<tt;i++) {
		std::getline(cin,temp);
		std::getline(cin,line);
		prev = 0;
    		while ((pos = line.find_first_of(delims, prev)) != string::npos) {
      		if (pos > prev)
     				wordVector.push_back(line.substr(prev, pos-prev));
        		prev = pos+1;
    		}
    		if (prev < line.length())
        		wordVector.push_back(line.substr(prev,string::npos));
        	//----------------------------------------------------------------------------
        	if(wordVector[0].find("machula") != string::npos) {
        		//cout <<"starting"<<endl;
        		ss1 << wordVector[1] ; ss2 << wordVector[2];
        		ss1 >> num1; ss2 >> num2;
        		//cout <<wordVector[0]<<" and "<<wordVector[1]<<" and "<<wordVector[2]<<" where "<<num1<<" and "<<num2<<endl;
        		resulting_number = num2 - num1;
        		cout << resulting_number<<" + "<<wordVector[1]<<" = "<<wordVector[2]<<endl;
        		ss1.clear();ss2.clear();
        	}else if(wordVector[1].find("machula") != string::npos) {
        		//cout <<"middle"<<endl;
        		ss1 << wordVector[0] ; ss2 << wordVector[2];
        		ss1 >> num1; ss2 >> num2;
        		//cout <<wordVector[0]<<" and "<<wordVector[1]<<" and "<<wordVector[2]<<" where "<<num1<<" and "<<num2<<endl;
        		resulting_number = num2 - num1;
        		cout << wordVector[0]<<" + "<<resulting_number<<" = "<<wordVector[2]<<endl;
        		ss1.clear();ss2.clear();
        	}else if(wordVector[2].find("machula") != string::npos) {
        		//cout <<"ending"<<endl;
        		ss1 << wordVector[0] ; ss2 << wordVector[1];
        		ss1 >> num1; ss2 >> num2;
        		//cout <<wordVector[0]<<" and "<<wordVector[1]<<" and "<<wordVector[2]<<" where "<<num1<<" and "<<num2<<endl;
        		resulting_number = num2 + num1;
        		cout << wordVector[0]<<" + "<<wordVector[1]<<" = "<<resulting_number<<endl;
        		ss1.clear();ss2.clear();
        	}
		wordVector.clear(); ss.clear();ss2.clear();
	}

	return 0;	
}
