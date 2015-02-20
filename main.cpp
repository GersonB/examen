#include "Evaluador.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

//Devuele la suma de todos los elementos de mi_pila (dado) y mi_cola (dado)
float sumarElementos(stack<float> mi_pila, queue<float> mi_cola)
{
float suma;

while(!mi_cola.empty())
{
suma += mi_cola.front();
mi_cola.pop();

while(!mi_pila.empty())
{
suma+= mi_pila.top();
mi_pila.pop();

}
}
return suma;
}


//Devuelve true si mi_vector (dado) tiene valores repetidos
bool existenRepetidos(vector<string> mi_vector)
{


    return false;
}

//Devuelve la cantidad de elementos en edades (dado) que son mayores o iguales que 18
int contarMayoresDeEdad(list<int>edades)
{
int cont=0;
do{
if (edades.front()>=18)
{
cont ++;
}
edades.pop_front();
}
while(!edades.empty());
return cont;

}

//Devolver el un mapa con los siguientes valores dados en la tabla
//   LLave      |   Valor
//----------------------------
//  "Lolo"      |   98923212
//  "Lola""     |   92123243
//  "Rufo"      |   93212322
//  "Punpun"    |   99321273
//  "Ponpon"    |   92133243
map<string,int> obtenerAgenda()
{
    map<string,int> agenda;

agenda["Lolo"]=98923212;
agenda["Lola"]=92123243;
agenda["Rufo"]=93212322;
agenda["Punpun"]=99321273;
agenda["Ponpon"]=92133243;
return agenda;
}

//Devuelve el numero menor en mi_set (dado)
double obtenerMenor(set<double> mi_set)
{
set<double> setmayor;

for(set<double>:: iterator i= mi_set.begin();
i!= mi_set.end(); i++)
{

if(*i==0){
setmayor.insert(*i);
}
if(*i> *i){
setmayor.insert(*i);
}
setmayor.insert(*i);
setmayor.clear();
}

return setmayor;
    //return -1.0;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
