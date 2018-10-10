#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(){
	char str;
//	string s;
	ifstream file;
	while(str != EOF){
		cin >> str;
		if(str == 'i'){
			cin >> str;
			if(str == 'f'){
				system("/home/missfrost/Flowchart/rectangle.html");
				//while(str != EOF){
				//	cin >> str;
			//	}
				//system("rectangle.html");
				break;
			}
		}
		if(str == 'f'){
			cin >> str;
			if(str == 'o'){
				cin >> str;
				if(str == 'r'){
//					fout >> "<html><svg width = "1920" height = "1280"> == $0 <polygon points = "0,100 0,50 50,0 150,0 200,50 200,100" fill = "pink"/><polygon points = "0,105 0,155 50,205 150,205 200,155 200,105" fill = "pink"/></svg></html>";
					 while(str != EOF){
                		                cin >> str;
                        		}
	                        	break;
				}
			}
		}
                if(str == 'w'){
                        cin >> str;
                        if(str == 'i'){
                                cin >> str;
                                if(str == 'l'){
					cin >> str;
					if(str == 'e'){
	                        //                fout >> "<html><svg width = "1920" height = "1280"> == $0 <polygon points = "0,100 0,50 50,0 150,0 200,50 200,100" fill = "pink"$
        	                                 while(str != EOF){
                	                                cin >> str;
                        	                }
                                	        break;
					}
                                }
                        }
                }

	//	else
//			fout >> "<html><svg><rect width="150" height="100" fill = "pink"/></svg></html>";
	}
	return 0;
}
