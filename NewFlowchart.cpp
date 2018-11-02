#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <algorithm>

<<<<<<< HEAD
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
=======
std::string Rhombus(std::string s, int x, int y){
	s+="<polygon points = \"";
	s += std::to_string(x); 
	s += ",";
	s += std::to_string(y);
	s += " ";
	s +=std::to_string(x+100);
	s += ",";
	s += std ::to_string(y+70);
	s += " "; 
	s += std::to_string(x+200);
	s += ",";
	s += std::to_string(y);
	s += " ";
	s += std::to_string(x+100);
	s += ",";
	s += std::to_string(y-70);
	s+= "\" fill = \"pink\"/>";
	return s;
}

std::string Polygon(std::string s){
	s = "<polygon points = \"0,100 0,50 50,0 150,0 200,50 200,100 \" fill = \"pink\"/>";
	s+="\n";
	s+="<polygon points = \"0,150 0,200 50,250 150,250 200,200 200,150 \" fill = \"pink\"/>";
>>>>>>> ad0c1a81e21e30157c0b90f7d5393f35200cc6bd
	return s;
}

<<<<<<< HEAD
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
=======
std::string Parallelogramm(std::string s){
	s = "<polygon points = \"0,200 100,100 300,100 200,200\",fill = \"pink\"/>";
	return s;
}

std::string Rectangle(std::string s){
	s = "<rect width=\"150\" height=\"100\" fill = \"pink\"/>";
>>>>>>> ad0c1a81e21e30157c0b90f7d5393f35200cc6bd
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
<<<<<<< HEAD
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
=======
	int x = 0, y = 150, z = 0,p = 300;
	char str;
        std::string s, a ,b;
        std::fstream f;
	a = "<html><svg width = \"600\" height = \"600\"> ";
	b = "</svg></html>";
	while(str != '\n'){
		std::cin >> str;
		if(str == 'i'){
			std::cin >> str;
			if(str == 'f'){
				f.open("rhombus.html", std::ios::out);
				f << a << "\n" << Rhombus(s, x , y) << "\n" << Rhombus(s, z, p) << "\n"<<  b << std::endl;
				f.close();
				system("firefox rhombus.html");
				ReadStr(str);
				break;
			}
			else{
				f.open("rectangle.html", std::ios::out);
				f << a << "\n" << Rectangle(s) << "\n" << b << std::endl;
				f.close();
				system("firefox rectangle.html");
				ReadStr(str);
				break;
>>>>>>> ad0c1a81e21e30157c0b90f7d5393f35200cc6bd
			}
			f << c << d;
        	        f.close();
	                system("firefox polygon.html");
		}
		else{
<<<<<<< HEAD
			if(input == "cin" || input == "cout"){
				f.open("parallelogramm.html", std::ios::out);
				f << a << b << std::endl;
				for(int i = 0; i <= x; i++){
	                                f << Parallelogramm(s, 100, i*200) << std::endl;
=======
			if(str == 'f' || str == 'w'){
				std::cin >> str;
				if(str == 'o'){
					std::cin >> str;
					if(str == 'r'){
						f.open("polygon.html", std::ios::out);
	                	                f << a << "\n" << Polygon(s) << "\n" << b << std::endl;
        		                        f.close();
                                		system("firefox polygon.html");
		                                ReadStr(str);
                		                break;
					}
					else{
	        	                        f.open("rectangle.html", std::ios::out);
        	        	                f << a << "\n" << Rectangle(s) << "\n" << b << std::endl;
	 	                                f.close();
		                                system("firefox rectangle.html");
		                                ReadStr(str);
                		                break;
					}
				}
				else{
					if(str == 'h'){
						std::cin >> str;
						if(str == 'i'){
							std::cin >> str;
							if(str == 'l'){
								std::cin >> str;
								if(str == 'e'){
									f.open("polygon.html", std::ios::out);
			                                                f << a << "\n" << Polygon(s) << "\n" << b << std::endl;
                      				                        f.close();
			                                                system("firefox polygon.html");
	        		                                        ReadStr(str);
        	                		                        break;
								}
								else{
			                                                f.open("rectangle.html", std::ios::out);
                        			                        f << a << "\n" << Rectangle(s) << "\n" << b << std::endl;
                                                			f.close();
			                                                system("firefox rectangle.html");
                        			                        ReadStr(str);
                                                			break;
                                        			}
							}
							else{
		                                                f.open("rectangle.html", std::ios::out);
                		                                f << a << "\n" << Rectangle(s) << "\n" << b << std::endl;
                                		                f.close();
		                                                system("firefox rectangle.html");
                		                                ReadStr(str);
                                		                break;
		                                        }
						}
						else{
	                                                f.open("rectangle.html", std::ios::out);
        	                                        f << a << "\n" << Rectangle(s) << "\n" << b << std::endl;
                	                                f.close();
                        	                        system("firefox rectangle.html");
                                	                ReadStr(str);
                                        	        break;
                                        	}
					}
					else{
                                                f.open("rectangle.html", std::ios::out);
                                                f << a << "\n" << Rectangle(s) << "\n" << b << std::endl;
                                                f.close();
                                                system("firefox rectangle.html");
                                                ReadStr(str);
                                                break;
                                        }
>>>>>>> ad0c1a81e21e30157c0b90f7d5393f35200cc6bd
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
<<<<<<< HEAD
				f << c << d;
                                f.close();
                                system("firefox rectangle.html");

			}
=======
				else{
					if(str == 'c'){
						std::cin >> str;
						if(str =='i' || str == 'o'){
							std::cin >> str;
							if(str == 'n'){
								f.open("parallelogramm.html", std::ios::out);
								f << a << "\n" <<  Parallelogramm(s) << "\n" << b<< std::endl;
								f.close();
								system("firefox parallelogramm.html");
								ReadStr(str);
								break;
							}
							else{
								std::cin >> str;
								if(str == 'u'){
									std::cin >> str;
									if(str == 't'){
										f.open("parallelogramm.html", std::ios::out);
		                                                                f  << a << "\n" <<  Parallelogramm(s) << "\n" << b<< std::endl;
                		                                                f.close();
                                		                                system("firefox parallelogramm.html");
                                                		                ReadStr(str);
                                                                		break;
									}
									else{
			                                                        f.open("rectangle.html", std::ios::out);
                        			                                f << a << "\n" << Rectangle(s) << "\n" << b << std::endl;
                                                			        f.close();
			                                                        system("firefox rectangle.html");
                        			                                ReadStr(str);
                                                			        break;
			                                                }
								}
								else{
		                                                        f.open("rectangle.html", std::ios::out);
                		                                        f << a << "\n" << Rectangle(s) << "\n" << b << std::endl;
                                		                        f.close();
                                                		        system("firefox rectangle.html");
		                                                        ReadStr(str);
                		                                        break;
                                		                }
							}
						}
						else{
                                                        f.open("rectangle.html", std::ios::out);
                                                        f << a << "\n" << Rectangle(s) << "\n" << b << std::endl;
                                                        f.close();
                                                        system("firefox rectangle.html");
                                                        ReadStr(str);
                                                        break;
                                                }
					}
					else{
                                                f.open("rectangle.html", std::ios::out);
                                                f << a << "\n" << Rectangle(s) << "\n" << b << std::endl;
                                                f.close();
                                                system("firefox rectangle.html");
                                                ReadStr(str);
                                                break;
                                        }
				}
>>>>>>> ad0c1a81e21e30157c0b90f7d5393f35200cc6bd
		}
	}
	return 0;
}
