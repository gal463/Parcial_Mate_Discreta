#pragma once
#include <cmath>

using namespace System;

namespace TransformacionesLineales
{
    public ref class Transformaciones
    {
    private:

        double vx;
        double vy;

        double rx;
        double ry;

        double a11;
        double a12;
        double a21;
        double a22;

    public:

        Transformaciones()
        {
            vx = 2.0;
            vy = 3.0;

            rx = 4.0;
            ry = 3.0;

            a11 = 2.0;
            a12 = 0.0;
            a21 = 0.0;
            a22 = 1.0;
        }

        ~Transformaciones(){}

        double getVx()
        {
            return vx;
        }

        double getVy()
        {
            return vy;
        }

        double getRx()
        {
            return rx;
        }

        double getRy()
        {
            return ry;
        }

        double getA11()
        {
            return a11;
        }

        double getA12()
        {
            return a12;
        }

        double getA21()
        {
            return a21;
        }

        double getA22()
        {
            return a22;
        }

        void CambiarVector(double x, double y)
        {
            vx = x;
            vy = y;
        }

        void CambiarMatriz(double nuevoA11, double nuevoA12, double nuevoA21, double nuevoA22)
        {
            a11 = nuevoA11;
            a12 = nuevoA12;
            a21 = nuevoA21;
            a22 = nuevoA22;
        }

        void AplicarMatriz()
        {
            rx = a11 * vx + a12 * vy;
            ry = a21 * vx + a22 * vy;
        }

        void AplicarMatriz(double nuevoA11, double nuevoA12, double nuevoA21, double nuevoA22)
        {
            a11 = nuevoA11;
            a12 = nuevoA12;
            a21 = nuevoA21;
            a22 = nuevoA22;

            rx = a11 * vx + a12 * vy;
            ry = a21 * vx + a22 * vy;
        }

        void Identidad()
        {
            a11 = 1.0;
            a12 = 0.0;
            a21 = 0.0;
            a22 = 1.0;

            AplicarMatriz();
        }

        void Rotacion90()
        {
            a11 = 0.0;
            a12 = -1.0;
            a21 = 1.0;
            a22 = 0.0;

            AplicarMatriz();
        }

        void Escala()
        {
            a11 = 2.0;
            a12 = 0.0;
            a21 = 0.0;
            a22 = 2.0;

            AplicarMatriz();
        }

        void ReflexionX()
        {
            a11 = 1.0;
            a12 = 0.0;
            a21 = 0.0;
            a22 = -1.0;

            AplicarMatriz();
        }

        void ReflexionY()
        {
            a11 = -1.0;
            a12 = 0.0;
            a21 = 0.0;
            a22 = 1.0;

            AplicarMatriz();
        }

        void CizallamientoX()
        {
            a11 = 1.0;
            a12 = 1.0;
            a21 = 0.0;
            a22 = 1.0;

            AplicarMatriz();
        }

        void ProyeccionX()
        {
            a11 = 1.0;
            a12 = 0.0;
            a21 = 0.0;
            a22 = 0.0;

            AplicarMatriz();
        }

        void Rotar(double grados)
        {
            double radianes = grados * Math::PI / 180.0;

            double coseno = Math::Cos(radianes);

            double seno = Math::Sin(radianes);

            a11 = coseno;
            a12 = -seno;
            a21 = seno;
            a22 = coseno;

            AplicarMatriz();
        }

        void Reiniciar()
        {
            vx = 0.0;
            vy = 0.0;

            rx = 0.0;
            ry = 0.0;

            a11 = 1.0;
            a12 = 0.0;
            a21 = 0.0;
            a22 = 1.0;
        }

        void CopiarVector()
        {
            rx = vx;
            ry = vy;
        }

        void SumarVector(double x, double y)
        {
            rx = vx + x;
            ry = vy + y;
        }

        void MultiplicarVector(double escalar)
        {
            rx = vx * escalar;
            ry = vy * escalar;
        }

        double MagnitudVector()
        {
            return Math::Sqrt(vx * vx + vy * vy);
        }

        double MagnitudResultado()
        {
            return Math::Sqrt(rx * rx + ry * ry);
        }

        double Determinante()
        {
            return(a11 * a22) - (a12 * a21);
        }

        bool EsIdentidad()
        {
            return a11 == 1.0 && a12 == 0.0 && a21 == 0.0 && a22 == 1.0;
        }

        String^ ObtenerMatriz()
        {
            return L"[ " + a11.ToString() + L"  " + a12.ToString() + L" ]\n[ " + a21.ToString() + L"  " + a22.ToString() + L" ]";
        }
    };
}
//probando porbando 123