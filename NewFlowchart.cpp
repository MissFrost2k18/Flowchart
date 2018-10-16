#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

std::string Rhombus(std::string s){
	s = ("<html><svg><polygon points = \"0,70 100,140 200,70 100,0\" fill = \"pink\"/></svg></html>");
	return s;
}

std::string Polygon(std::string s){
	s = ("<html><svg width = \"200\" height = \"200\"> == $0 <polygon points = \"0,100 0,50 50,0 150,0 200,50 200,100 \" fill = \"pink\"></svg><svg width = \"1280\" height = \"600\"> == $0 <polygon points = \"0,150 0,200 50,250 150,250 200,200 200,150 \" fill = \"pink\"></svg></html>");
	return s;

}

std::string Parallelogramm(std::string s){
	s = ("<html><svg width = \"1920\" height = \"1280\"> == $0 <polygon points = \"0,200 100,100 300,100 200,200\",fill = \"pink\"/></svg></html>");
	return s;
}

std::string Rectangle(std::string s){
	s = "<html><svg width = \"1920\" height = \"1280\"> == $0><rect width=\"150\" height=\"100\" fill = \"pink\"/></svg></html>";
	return s;
}

void ReadStr(char str){
	while(str != EOF){
        	std::cin >> str;
		break;
        }
}

int main(){
	char str;
        std::string s;
        std::fstream f;
	while(str != '\n'){
		std::cin >> str;
		if(str == 'i'){
			std::cin >> str;
			if(str == 'f'){
				f.open("rhombus.html", std::ios::out);
				f << Rhombus(s) << std::endl;
				f.close();
				system("firefox rhombus.html");
				ReadStr(str);
				break;
			}
			else{
				f.open("rectangle.html", std::ios::out);
				f << Rectangle(s) << std::endl;
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
	                	                f << Polygon(s) << std::endl;
        		                        f.close();
                                		system("firefox polygon.html");
		                                ReadStr(str);
                		                break;
					}
					else{
	        	                        f.open("rectangle.html", std::ios::out);
        	        	                f << Rectangle(s) << std::endl;
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
			                                                f << Polygon(s) << std::endl;
                      				                        f.close();
			                                                system("firefox polygon.html");
	        		                                        ReadStr(str);
        	                		                        break;
								}
								else{
			                                                f.open("rectangle.html", std::ios::out);
                        			                        f << Rectangle(s) << std::endl;
                                                			f.close();
			                                                system("firefox rectangle.html");
                        			                        ReadStr(str);
                                                			break;
                                        			}
							}
							else{
		                                                f.open("rectangle.html", std::ios::out);
                		                                f << Rectangle(s) << std::endl;
                                		                f.close();
		                                                system("firefox rectangle.html");
                		                                ReadStr(str);
                                		                break;
		                                        }
						}
						else{
	                                                f.open("rectangle.html", std::ios::out);
        	                                        f << Rectangle(s) << std::endl;
                	                                f.close();
                        	                        system("firefox rectangle.html");
                                	                ReadStr(str);
                                        	        break;
                                        	}
					}
					else{
                                                f.open("rectangle.html", std::ios::out);
                                                f << Rectangle(s) << std::endl;
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
								f << Parallelogramm(s) << std::endl;
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
		                                                                f << Parallelogramm(s) << std::endl;
                		                                                f.close();
                                		                                system("firefox parallelogramm.html");
                                                		                ReadStr(str);
                                                                		break;
									}
									else{
			                                                        f.open("rectangle.html", std::ios::out);
                        			                                f << Rectangle(s) << std::endl;
                                                			        f.close();
			                                                        system("firefox rectangle.html");
                        			                                ReadStr(str);
                                                			        break;
			                                                }
								}
								else{
		                                                        f.open("rectangle.html", std::ios::out);
                		                                        f << Rectangle(s) << std::endl;
                                		                        f.close();
                                                		        system("firefox rectangle.html");
		                                                        ReadStr(str);
                		                                        break;
                                		                }
							}
						}
						else{
                                                        f.open("rectangle.html", std::ios::out);
                                                        f << Rectangle(s) << std::endl;
                                                        f.close();
                                                        system("firefox rectangle.html");
                                                        ReadStr(str);
                                                        break;
                                                }
					}
					else{
                                                f.open("rectangle.html", std::ios::out);
                                                f << Rectangle(s) << std::endl;
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
