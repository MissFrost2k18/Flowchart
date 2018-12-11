#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <fstream>

using std::cin;
using std::cout;

//логика

struct Graph{
	std::string inputOutput; //ввод, вывод
	std::string loop; //цикл
	std::string condition; //условие
	std::string begEnd; //начало, конец
	std::string expression; //выражение
	Graph*next;
};

std::string to_str(int param){
	std::string s = "";
	for(s = ""; param; param /= 10)
		s+= (char)('0'+param%10);
	std::reverse(s.begin(), s.end());
	return s;
}

Graph*add(Graph*g, std::string s, int num){ // добавление элемента в список
	Graph*r = (Graph*)malloc(sizeof(Graph));
	g->next = r;
	if(num == 1){
		r->inputOutput = s;
		r->loop = "0";
		r->condition = "0";
		r->begEnd = "0";
		r->expression = "0";
	}
	if(num == 2){
		r->inputOutput = "0";
		r->loop = s;
		r->condition = "0";
		r->begEnd = "0";
		r->expression = "0";
        }
	if(num == 3){
		r->inputOutput = "0";
		r->loop = "0";
		r->condition = s;
		r->begEnd = "0";
		r->expression = "0";
	}
	if(num == 4){
		r->inputOutput = "0";
		r->loop = "0";
		r->condition = "0";
		r->begEnd = s;
		r->expression = "0";
	}
	if(num == 5){
		r->inputOutput = "0";
		r->loop = "0";
		r->condition = "0";
		r->begEnd = "0";
		r->expression = s;
	}
	r->next = NULL;
	return r;
}

void generateSearchMin(Graph*g){ // алгоритм поиска минимума в массиве
	std::string s = "begin";
	add(g, s, 4);
	g = g->next;
	s = "int a";
	add(g, s, 5);
	g = g->next;
	s = "int n";
	add(g, s, 5);
	g = g->next;
	s = "n";
	add(g, s, 1);
	g = g->next;
	s = "int i = 0; i < n";
	add(g, s, 2);
	g = g->next;
	s = "a[i]";
	add(g, s, 1);
	g = g->next;
	s = "i++";
	add(g, s, 2);
	g = g->next;
	s = "int min = a[0]";
	add(g, s, 5);
	g = g->next;
	s = "int i = 0; i < n";
	add(g, s, 2);
	g = g->next;
	s = "a[i] < min";
	add(g, s, 3);
	g = g->next;
	s = "min = a[i]";
	add(g, s, 5);
	g = g->next;
	s = "i++";
	add(g, s, 2);
	g = g->next;
	s = "min";
	add(g, s, 1);
	g = g->next;
	s = "end";
	add(g, s, 4);
}

void print(Graph*g){ //вывод содержимого списка
	g = g->next;
	while(g != NULL){
		if(g->inputOutput != "0")
			cout << "Input or Output" << " " << g->inputOutput << std::endl;
		if(g->loop != "0")
			cout << "Loop " << g->loop << std::endl;
		if(g->condition != "0")
			cout << "Condition " << g->condition << std::endl;
		if(g->begEnd != "0")
			cout << g->begEnd << std::endl;
		if(g->expression != "0")
			cout << g->expression << std::endl;
		g = g->next;
        }
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
	s = "<ellipse rx = \"200\" ry = \"100\" cx = \"";
	s += to_str(x);
	s += "\" cy = \"";
	s += to_str(y);
	s += "\"";
	s += "fill = \"pink\"/>";
	return s;
}

int main(){

	Graph*graph = (Graph*)malloc(sizeof(Graph));
	generateSearchMin(graph);
	print(graph);

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
//	f << BegEnd(s, 100, 50) << std::endl;
//	f << Line(s, 200, 50) << std::endl;
	f << Rectangle(s, 100, 200) << std::endl; //int n
	f << Line(s, 200, 200) << std::endl;
	f << Parallelogramm(s, 50, 400) << std::endl;//cin >> n
	f << Line(s, 200, 400) << std::endl;
	f << Rectangle(s, 100, 600) << std::endl;// int*a;
	f << Line(s, 200, 600) << std::endl;
	f << PolygonUp(s, 100, 800) << std::endl;//for(int i = 0; i < n; i++)
	f << Line(s, 200, 800) << std::endl;
	f << Parallelogramm(s, 50, 1000) << std::endl; //cin >> a[i];
	f << Line(s, 200, 1000) << std::endl;
	f << PolygonDown(s, 100, 1100) << std::endl;
	f << Line(s, 200, 1200) << std::endl;
	f << Rectangle(s, 100, 1400) << std::endl; // int min = a[0];
	f << Line(s, 200, 1400) << std::endl;
	f << PolygonUp(s, 100, 1600) << std::endl; // for()
	f << Line(s, 200, 1600) << std::endl;
	f << Rhombus(s, 100, 1800) << std::endl; //a[i]<min
	f << Line(s, 200, 1800) << std::endl;
	f << Rectangle(s, 100, 2000) << std::endl; //min = a[i];
	f << Line(s, 200, 2000) << std::endl;
	f << PolygonDown(s, 100, 2100) << std::endl;
	f << Line(s, 200, 2200) <<std::endl;
	f << Parallelogramm(s, 50, 2400) << std::endl; // cout << min;
	//f << Line(s, 200, 2400) << std::endl;
	//f << BegEnd(s, 100, 2500) << std::endl;
	f << end << std::endl;
	f.close();
	system("firefox graph.html");
	return 0;
}






