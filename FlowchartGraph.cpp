#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <fstream>


struct Graph{
	std::string ioput;
        std::string cycle;
        std::string cond;
        std::string begEnd;
        std::string ex;
	Graph*next;
};

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


void print(Graph*g){
	g = g->next;
	while(g != NULL){
		if(g->ioput != "0") std::cout << "Input or Output" << " " << g->ioput << std::endl;
		if(g->cycle != "0") std::cout << "Cycle " << g->cycle << std::endl;
		if(g->cond != "0") std::cout << "Condition " << g->cond << std::endl;
		if(g->begEnd != "0") std::cout << g->begEnd << std::endl;
		if(g->ex != "0") std::cout << g->ex << std::endl;
		g = g->next;
	}
	//std::cout << g->begEnd;
}

std::string PolygonUp(std::string s, int x, int y){
        s ="<polygon points = \"";
        s += to_string(x);
        s += ",";
        s += to_string(y);
        s += " ";
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
        return s;
}

std::string PolygonDown(std::string s, int x, int y){
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

std::string Line(std::string s, int x, int y){
	s = "<line x1 = \"";
	s+= to_string(x);
	s+= "\"";
	s+= " y1 = \"";
	s+= to_string(y);
	s+= "\"";
	s+= " x2 = \"";
	s+= to_string(x);
	s+= "\"";
	s+= " y2 = \"";
	s+= to_string(y+150);
	s+= "\"";
	s+= " stroke = \"pink\" stroke-width = \"2\"/>";
	return s;
}

/*std::string BegEnd(std::string s, int x, int y){
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
	s+= "rx = \"50\" ry = \"50\"";
	s+= " fill = \"pink\"/>";
	return s;
}*/

Graph*add(Graph*g, std::string s, int l){
	Graph*r = (Graph*)malloc(sizeof(Graph));
	g->next = r;
	if(l == 1){
		r->ioput = s;
		r->cycle = "0";
		r->cond = "0";
		r->begEnd = "0";
		r->ex = "0";
	}
	if(l == 2){
		r->ioput = "0";
                r->cycle = s;
                r->cond = "0";
                r->begEnd = "0";
                r->ex = "0";
	}
	if(l == 3){
		r->ioput = "0";
                r->cycle = "0";
                r->cond = s;
                r->begEnd = "0";
                r->ex = "0";
	}
	if(l == 4){
		r->ioput = "0";
                r->cycle = "0";
                r->cond = "0";
                r->begEnd = s;
                r->ex = "0";
	}
	if(l == 5){
		r->ioput = "0";
                r->cycle = "0";
                r->cond = "0";
                r->begEnd = "0";
                r->ex = s;
	}
	r->next = NULL;
	return r;
}

void SearchMin(Graph*g){
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

int main(){
	Graph*gr = (Graph*)malloc(sizeof(Graph));
	SearchMin(gr);
	print(gr);

	std::string s, a, b, c, d;
        std::fstream f;
        a = "<html><svg width = \"";
        b = to_string(8000);
        b += "\" height = \"";
        b+= to_string(8000) + "\"> ";
        c = "</svg>";
        d = "</html>";
	f.open("graph.html", std::ios::out);
	f << a << b << std::endl;
	//f << BegEnd(s, 100, 50) << std::endl;
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
	//f << BegEnd(s, 100, 2500) << std::endl;
	f << c << d << std::endl;
	f.close();
	system("firefox graph.html");
	return 0;
}
