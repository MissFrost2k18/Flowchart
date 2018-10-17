#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

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
	return s;

}

std::string Parallelogramm(std::string s){
	s = "<polygon points = \"0,200 100,100 300,100 200,200\",fill = \"pink\"/>";
	return s;
}

std::string Rectangle(std::string s){
	s = "<rect width=\"150\" height=\"100\" fill = \"pink\"/>";
	return s;
}

void ReadStr(char str){
	while(str != EOF){
        	std::cin >> str;
		break;
        }
}

int main(){
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
			}
		}
		else{
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
				}
				}
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
		}
		std::cout << "**" << std::endl;
	}
	return 0;
}
