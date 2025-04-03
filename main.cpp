
// Asignar una letra de calificación a un estudiante basado en su promedio final.
// Escala: A(90-100), B(80-89), C(70-79), D(60-69), F(menos de 60)

#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
     double promedio_f;

     cout << "Ingrese el promedio final del alumno: ";
     cin >> promedio_f;
     while (promedio_f>100 or promedio_f<0) {
          cout << "El promedio final ingresado no es valido. Vuelva a ingresar el promedio: ";
          cin >> promedio_f;
     }

     if (promedio_f<=60) {
          cout << "La calificacion del alumno es F";
     }

     else if (promedio_f<=69) {
          cout << "La calificacion del alumno es D";
     }
     else if (promedio_f<=79) {
          cout << "La calificacion del alumno es C";
     }
     else if (promedio_f<=89) {
          cout << "La calificacion del alumno es B";
     }
     else{
          cout << "La calificacion del alumno es A";
     }
     }




