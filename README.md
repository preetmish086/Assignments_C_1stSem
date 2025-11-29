Simplified linear version of the code for reference and to ensure better readability:

#include <stdio.h>
#include <string.h>
#include <math.h> // For sin() and cos()

int main() {
    float A = 0, B = 0;  //storing current rotation angles
    float i, j;
    float z[1760];       
    char b[1760];
    printf("\x1b[2J"); // Clear screen 
    for (;;) {
        memset(b, 32, 1760); // Fill buffer with spaces
        memset(z, 0, 7040);  // Clear depth buffer
        for (j = 0; 6.28 > j; j += 0.07) { // Angle j for rotating around the y-axis
            for (i = 0; 6.28 > i; i += 0.02) { // Angle i for rotating the circle
                float c = sin(i), d = cos(j), e = sin(A), f = sin(j), g = cos(A),
                      h = d + 2, D = 1 / (c * h * e + f * g + 5),
                      l = cos(i), m = cos(B), n = sin(B),
                      t = c * h * g - f * e;
                int x = 40 + 30 * D * (l * h * m - t * n);
                int y = 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }
        printf("\x1b[H"); // Move cursor to home position
        for (int k = 0; 1761 > k; k++) {
            putchar(k % 80 ? b[k] : 10); // Print character or newline
        }
        A += 0.04; // Increment rotation angle A
        B += 0.02; // Increment rotation angle B
    }
    return 0;
}


Description of various elements used in the above code:

# sin() and cos()- 
needed for rotation as they take angles and return ratios used to calculate positions

# A and B- 
float variables used to store the current rotation angles of the doughnut. They are gradually incremented at the end of the loop (A+=0.04; B+=0.02;) to make the donut spin

# b and z- 
arrays that represent the entire screen, (80 char wide*22 lines high) appx. equal to 1760

# printf("\x1b[2J");- 
special command that tells the termnal to clear the entire screen

# for(;;)- 
an infinite loop which run over and over again to create the animation

# for (j = 0; 6.28 > j; j += 0.07) {
  for (i = 0; 6.28 > i; i += 0.02) {- 
nested loop that iterates through every point on the 3D surface of the donut

# b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];- 
uses the calculated brightness index N to pick a character from the strings. Brighter points get characters like #$@, and darker ones get .,-~

# for (int k = 0; 1761 > k; k++) {
  putchar(k % 80 ? b[k] : 10);- 
this loop prints the entire b array (the frame) to the screen

# A+=0.04; B+=0.02;- 
this increases the rotation angles. While the infinite loop repeats, the donut will be slightly rotated, creating the animation
