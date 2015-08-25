# ESPAI-Hoja16
Ejercicios del curso de C++

Ejercicios capítulo 16

1. Explica cuál es el objetivo de la herencia.

2. ¿Cómo declararíamos una clase Avión que heredase de Vehículo? Escribe solo la linea de declaración,
que comienza con “class...”

3. Dado el siguiente código:
#include <iostream>
using namespace std;
class Persona
{
xxxxxxx:
int edad;
}
¿Qué sucedería en las clases derivadas si el modificador de acceso xxxxxxx fuera...?

a. public
b. private
c. protected

4. De los tres modificadores de acceso, cual es preferible?
¿Porqué?
Ordénalos de más a menos.

5. Explica la diferencia entre sobrecarga e invalidación

6. Dado el siguiente código:
class Vehiculo
{
protected:
string color;
int peso;
public:
Vehiculo(string color, int peso);
void getInfo();
};
Vehiculo::Vehiculo(string color, int peso)
{
this->color = color;
this->peso = peso;
}
void Vehiculo::getInfo()
{
cout << "Vehiculo: color=" << color << " , peso=" << peso << endl;
}
//************************************************************************
class Coche : public Vehiculo
{
protected:
int numPuertas;
public:
Coche(string color, int peso, int numPuertas);
};
Coche::Coche(string color, int peso, int numPuertas) : Vehiculo(color, peso)
{
this->numPuertas = numPuertas;
}
//************************************************************************
int main() {
Vehiculo v("Rojo", 800);
Coche c("Azul", 900, 5);
v.getInfo();
c.getInfo();
return 0;
}
Y la salida:
Vehiculo: color=Rojo , peso=800
Vehiculo: color=Azul , peso=900
¿Cómo harías para que línea 2 de la salida fuera...?
Coche: color=Azul , peso=900, numPuertas=5

7. A partir del código del ejemplo anterior, explica cuál es el objetivo de la siguiente línea de código
Coche::Coche(string color, int peso, int numPuertas) : Vehiculo(color, peso)
Especialmente la parte del final, a continuación de “:”

8. Práctica final del capítulo
Haz una aplicación que nos permita gestionar el personal de un hospital.
Queremos llevar un control del personal de limpieza, enfermeros y médicos que hay.
Nos interesa conocer:

-Nombre y apellidos
-Teléfono
-Planta asignada
-Especialidad
-Horario

El menú de la aplicación será como el siguiente
a. Alta personal
b. Baja personal
c. Ver ficha
  a. Introducir hora entrada
  b. Introducir hora salida
d. Listado total
e. Personal en planta
f. Personal en el hospital

Las opciones a y b nos permitirán insertar/eliminar registros.
c nos muestra el detalle de un empleado, y a su vez nos permite marcar la hora de entrada y de salida
(esto en realidad seria con una tarjeta, pero en nuestra aplicación será manual)
d nos lista toda la informacion de personal
e solamente muestra los que estan asignados a una planta en concreto.
f muestra aquellos cuya hora de salida no esté asignada, porque están trabajando.
Utiliza herencia, sobrecarga e invalidación donde sea necesario.
