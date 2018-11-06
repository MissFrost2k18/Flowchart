#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <algorithm>

std::string to_string(int param){
   std:: string str = "";
    for(str = ""; param ; param /= 10)
        str += (char)('0' + param % 10);
    std::reverse(str.begin(), str.end());
    return str;
}

std::string Rhombus(std::string s, int x, int y){
	s = "<polygon points = \"";
	s += to_string(x); 
	s += ",";
	s += to_string(y);
	s += " ";
	s += to_string(x+100);
	s += ",";
	s += to_string(y+70);
	s += " "; 
	s += to_string(x+200);
	s += ",";
	s += to_string(y);
	s += " ";
	s += to_string(x+100);
	s += ",";
	s += to_string(y-70);
	s += "\" fill = \"pink\"/>";
	return s;
}

std::string Polygon(std::string s, int x, int y){
	s ="<polygon points = \"";
	s += to_string(x);
	s += ",";
	s += to_string(y);
	s += " ";
	s += to_string(x);
	s += ",";
	s+= to_string(y-50);
	s+= " ";
	s+=to_string(x+50);
	s+= ",";
	s+= to_string(y-100);
	s+= " ";
	s+= to_string(x+150);
	s+= ",";
	s+= to_string(y-100);
	s+= " ";
	s+= to_string(x+200);
	s+= ",";
	s+= to_string(y-50);
	s+= " ";
	s+= to_string(x+200);
	s+= ",";
	s+= to_string(y);
	s+= " \" fill = \"pink\"/>";
	s+= "\n";
	s+= "<polygon points = \"";
	s += to_string(x);
        s += ",";
        s += to_string(y+50);
        s += " ";
        s += to_string(x);
        s += ",";
        s+= to_string(y+100);
        s+= " ";
        s+=to_string(x+50);
        s+= ",";
        s+= to_string(y+150);
        s+= " ";
        s+= to_string(x+150);
        s+= ",";
        s+= to_string(y+150);
        s+= " ";
        s+= to_string(x+200);
        s+= ",";
        s+= to_string(y+100);
        s+= " ";
        s+= to_string(x+200);
        s+= ",";
        s+= to_string(y+50);
        s+= " \" fill = \"pink\"/>";
	return s;
}

std::string Parallelogramm(std::string s, int x, int y){
	s = "<polygon points = \"";
	s += to_string(x);
	s+= ",";
	s+= to_string(y);
	s+= " ";
	s+= to_string(x+100);
	s+= ",";
	s+= to_string(y-100);
	s+= " ";
	s+= to_string(x+300);
	s+= ",";
	s+= to_string(y-100);
	s+= " ";
	s+= to_string(x+200);
	s+= ",";
	s+= to_string(y);
	s+= "\" fill = \"pink\"/>";
	return s;
}

std::string Rectangle(std::string s, int x, int y){
	s = "<polygon points = \"";
        s += to_string(x);
        s+= ",";
        s+= to_string(y);
        s+= " ";
        s+= to_string(x+200);
        s+= ",";
        s+= to_string(y);
        s+= " ";
        s+= to_string(x+200);
        s+= ",";
        s+= to_string(y-100);
        s+= " ";
        s+= to_string(x);
        s+= ",";
        s+= to_string(y-100);
        s+= "\" fill = \"pink\"/>";
	return s;
}

int main(){
        std::string s, input, a, b, c, d;
        std::fstream f;
	int x;
	std::cout << "Input if, for, while, cin, cout or anything else ";
	std::cin >> input;
	std::cout << std::endl;
	std::cout << "Input number of times ";
	std::cin >> x;
	a = "<html><svg width = \"";
	b = to_string(x*1000);
	b += "\" height = \"";
	b+= to_string(x*1000) + "\"> ";
	c = "</svg>";
	d = "</html>";
	if (input == "if"){
		f.open("rhombus.html", std::ios::out);
		f << a << b << std::endl;
		for(int i = 1; i <= x; i++){
        	        f << Rhombus(s, 100, i*200) << std::endl;
		}
		f << c << d << std::endl;
		f.close();
		system("firefox rhombus.html");
        }

	else{
		if(input == "for" || input == "while"){
			f.open("polygon.html", std::ios::out);
			f << a <<b << std::endl;
			for(int i = 1; i <= x; i++){
		                f << Polygon(s, 100, i*300) << std::endl;
			}
			f << c << d;
        	        f.close();
	                system("firefox polygon.html");
		}
		else{
			if(input == "cin" || input == "cout"){
				f.open("parallelogramm.html", std::ios::out);
				f << a << b << std::endl;
				for(int i = 0; i <= x; i++){
	                                f << Parallelogramm(s, 100, i*200) << std::endl;
				}
				f << c << d;
                                f.close();
                                system("firefox parallelogramm.html");
			}
			else{
				f.open("rectangle.html", std::ios::out);
				f << a << b << std::endl;
				for(int i = 1; i<= x; i++){
	                                f << Rectangle(s, 50, i*200) << std::endl;
				}
				f << c << d;
                                f.close();
                                system("firefox rectangle.html");

			}
		}
	}
	return 0;
}
