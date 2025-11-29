//This is the very famous donut.c program, a code written in the shape of a donut that generates a 3D spinning donut using ASCII characters in a terminal.
//Some of its key features include:
//**Ascii Graphics
//**3D Projection and Rotation
//**Illumination Calculation
//**Animation Loop
//**Mathematical Foundations


             k;double sin()
         ,cos();main(){float A=
       0,B=0,i,j,z[1760];char b[
     1760];printf("\x1b[2J");for(;;
  ){memset(b,32,1760);memset(z,0,7040)
  ;for(j=0;6.28>j;j+=0.07)for(i=0;6.28
 >i;i+=0.02){float c=sin(i),d=cos(j),e=
 sin(A),f=sin(j),g=cos(A),h=d+2,D=1/(c*
 h*e+f*g+5),l=cos      (i),m=cos(B),n=s\
in(B),t=c*h*g-f*        e;int x=40+30*D*
(l*h*m-t*n),y=            12+15*D*(l*h*n
+t*m),o=x+80*y,          N=8*((f*e-c*d*g
 )*m-c*d*e-f*g-l        *d*n);if(22>y&&
 y>0&&x>0&&80>x&&D>z[o]){z[o]=D;;;b[o]=
 ".,-~:;=!*#$@"[N>0?N:0];}}/*#****!!-*/
  printf("\x1b[H");for(k=0;1761>k;k++)
   putchar(k%80?b[k]:10);A+=0.04;B+=
     0.02;}}/*****####*******!!=;:~
       ~::==!!!**********!!!==::-
         .,~~;;;========;;;:~-.
             ..,--------,*/


//Simplified version of the code

// #include <stdio.h>
// #include <string.h>
// #include <math.h> // For sin() and cos()

// int main() {
//     float A = 0, B = 0;
//     float i, j;
//     float z[1760];
//     char b[1760];
//     printf("\x1b[2J"); // Clear screen

//     for (;;) {
//         memset(b, 32, 1760); // Fill buffer with spaces
//         memset(z, 0, 7040);  // Clear depth buffer

//         for (j = 0; 6.28 > j; j += 0.07) { // Angle j for rotating around the y-axis
//             for (i = 0; 6.28 > i; i += 0.02) { // Angle i for rotating the circle
//                 float c = sin(i), d = cos(j), e = sin(A), f = sin(j), g = cos(A),
//                       h = d + 2, D = 1 / (c * h * e + f * g + 5),
//                       l = cos(i), m = cos(B), n = sin(B),
//                       t = c * h * g - f * e;

//                 int x = 40 + 30 * D * (l * h * m - t * n);
//                 int y = 12 + 15 * D * (l * h * n + t * m);
//                 int o = x + 80 * y;
//                 int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);

//                 if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
//                     z[o] = D;
//                     b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
//                 }
//             }
//         }
//         printf("\x1b[H"); // Move cursor to home position
//         for (int k = 0; 1761 > k; k++) {
//             putchar(k % 80 ? b[k] : 10); // Print character or newline
//         }
//         A += 0.04; // Increment rotation angle A
//         B += 0.02; // Increment rotation angle B
//     }
//     return 0;
// }
