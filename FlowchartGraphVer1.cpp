#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <fstream>

using std::cin;
using std::cout;

//логика

enum NodeTypes{
        inputOutput,//ввод вывод
        condition,//условие
        begend,//начало конец
        loopUp,//цикл
        loopDown,
        expression//выражение
};

struct Node{
        NodeTypes type;
        Node*next;
};


std::string to_str(int param){
	std::string s = "";
	for(s = ""; param; param /= 10)
		s+= (char)('0'+param%10);
	std::reverse(s.begin(), s.end());
	return s;
}

Node*add(Node*g, NodeTypes type){
        Node*r = (Node*)malloc(sizeof(Node));
        g->next = r;
        r->type = type;
        r->next = NULL;
        return r;
}

void generateSearchMin(Node*r){ // алгоритм поиска минимума в массиве
        std::string s = "begin";
        add(r, begend);
        r = r->next;
        cout << "Min1" << std:: endl;
        s = "int a";
        add(r, expression);
        r = r->next;
        s = "int n";
        cout << "Min2" << std::endl;
        add(r,expression);
        r = r->next;
        cout << "Min3" << std::endl;
        s = "n";
        add(r, inputOutput);
        r = r->next;
        cout << " MIn4" << std::endl;
        s = "int i = 0; i < n";
        add(r, loopUp);
        r = r->next;
        cout << "Min5" << std::endl;
        s = "a[i]";
        add(r, inputOutput);
        r = r->next;
        cout << "Min6" << std::endl;
        s = "i++";
        add(r,loopDown);
        r = r->next;
        cout << "Min&" << std::endl;
        s = "int min = a[0]";
        add(r,expression);
        r = r->next;
        cout << "Min8" << std::endl;
        s = "int i = 0; i < n";
        add(r,loopUp);
        r = r->next;
        cout << "Min9" << std::endl;
        s = "a[i] < min";
        add(r,condition);
	r = r->next;
        cout << "MIn10" << std::endl;
        s = "min = a[i]";
        add(r,expression);
        r = r->next;
        cout << "Min11" << std::endl;
        s = "i++";
        add(r,loopDown);
        r = r->next;
        cout << "Min12" << std::endl;
        s = "min";
        add(r,inputOutput);
        r = r->next;
        cout << "Min13" << std::endl;
        s = "end";
        add(r,begend);
}


//рисование

std::string Rhombus(std::string s, int x, int y){ // рисуем ромб
	s = "<polygon points = \"";
	s += to_str(x);
	s += ",";
	s += to_str(y);
	s += " ";
	s += to_str(x+100);
	s += ",";
	s += to_str(y+70);
	s += " ";
	s += to_str(x+200);
	s += ",";
	s += to_str(y);
	s += " ";
	s += to_str(x+100);
	s += ",";
	s += to_str(y-70);
	s += "\" fill = \"pink\"/>";
	return s;
}

std::string Rectangle(std::string s, int x, int y){ // рисуем прямоугольник
	s = "<polygon points = \"";
	s += to_str(x);
	s+= ",";
	s+= to_str(y);
	s+= " ";
	s+= to_str(x+200);
	s+= ",";
	s+= to_str(y);
	s+= " ";
	s+= to_str(x+200);
	s+= ",";
	s+= to_str(y-100);
	s+= " ";
	s+= to_str(x);
	s+= ",";
	s+= to_str(y-100);
	s+= "\" fill = \"pink\"/>";
	return s;
}

std::string Parallelogramm(std::string s, int x, int y){ // рисуем параллелограмм
	s = "<polygon points = \"";
	s += to_str(x);
	s+= ",";
	s+= to_str(y);
	s+= " ";
	s+= to_str(x+100);
	s+= ",";
	s+= to_str(y-100);
	s+= " ";
	s+= to_str(x+300);
	s+= ",";
	s+= to_str(y-100);
	s+= " ";
	s+= to_str(x+200);
	s+= ",";
	s+= to_str(y);
	s+= "\" fill = \"pink\"/>";
	return s;
}

std::string PolygonUp(std::string s, int x, int y){ // рисуем многочлен (верхнюю часть)
	s ="<polygon points = \"";
	s += to_str(x);
	s += ",";
	s += to_str(y);
	s += " ";
	s += " ";
	s += to_str(x);
	s += ",";
	s+= to_str(y-50);
	s+= " ";
	s+=to_str(x+50);
	s+= ",";
	s+= to_str(y-100);
	s+= " ";
	s+= to_str(x+150);
	s+= ",";
	s+= to_str(y-100);
	s+= " ";
	s+= to_str(x+200);
	s+= ",";
	s+= to_str(y-50);
	s+= " ";
	s+= to_str(x+200);
	s+= ",";
	s+= to_str(y);
	s+= " \" fill = \"pink\"/>";
	s+= "\n";
	return s;
}

std::string PolygonDown(std::string s, int x, int y){ // рисуем многочлен нижнюю часть
	s+= "<polygon points = \"";
	s += to_str(x);
	s += ",";
	s += to_str(y+50);
	s += " ";
	s += to_str(x);
	s += ",";
	s+= to_str(y+100);
	s+= " ";
	s+=to_str(x+50);
	s+= ",";
	s+= to_str(y+150);
	s+= " ";
	s+= to_str(x+150);
	s+= ",";
	s+= to_str(y+150);
	s+= " ";
	s+= to_str(x+200);
	s+= ",";
	s+= to_str(y+100);
	s+= " ";
	s+= to_str(x+200);
	s+= ",";
	s+= to_str(y+50);
	s+= " \" fill = \"pink\"/>";
	return s;
}

std::string Line(std::string s, int x, int y){ // рисуем линию
	s = "<line x1 = \"";
	s+= to_str(x);
	s+= "\"";
	s+= " y1 = \"";
	s+= to_str(y);
	s+= "\"";
	s+= " x2 = \"";
	s+= to_str(x);
	s+= "\"";
	s+= " y2 = \"";
	s+= to_str(y+150);
	s+= "\"";
	s+= " stroke = \"pink\" stroke-width = \"2\"/>";
	return s;
}

std::string BegEnd(std::string s, int x, int y){
	s = "<ellipse rx = \"100\" ry = \"50\" cx = \"";
	s += to_str(x);
	s += "\" cy = \"";
	s += to_str(y);
	s += "\"";
	s += "fill = \"pink\"/>";
	return s;
}

std::string Draw(NodeTypes type, int x, int y, std::string s){
        std::string output;
        if(type == inputOutput){
                output = Parallelogramm(s, x-150, y);
        }
        if(type == condition){
                output = Rhombus(s, x-100, y);
        }
        if(type == begend){
                output = BegEnd(s, x, y);
        }
        if(type == loopUp){
                output = PolygonUp(s, x- 100, y);
        }
        if(type == loopDown){
                output = PolygonDown(s, x - 100, y-100);
        }
        if(type == expression){
                output = Rectangle(s, x - 100, y);
        }
        return output;
}

int main(){
        Node*g = (Node*)malloc(sizeof(Node));
        generateSearchMin(g);

        std::string s, begin, end;
        std::fstream f;
        begin = "<html><svg width = \"";
        begin += to_str(8000);
        begin += "\" height = \"";
        begin += to_str(8000) + "\"> ";
        end = "</svg>";
        end += "</html>";

        f.open("graph.html", std::ios::out);
        f << begin << std::endl;
        int x = 200, y = 50;
        while(g->next != NULL){
                g = g->next;
                f << Draw(g->type, x, y, s) << std::endl;
                y += 300;
        }
	f << end << std::endl;
        f.close();
        system("firefox graph.html");
        return 0;
}







