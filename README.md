# raytracing
A console application that prints a given number of characters to the console that causes the illusion of a 3d image. This is done by using raytracing, where a "pixel" is a character in the array. By default there is a moving light source, 2 spheres and a plane on the scene. One of the spheres can be moved by the user.

The movable sphere can be moved accordingly:
 - arrows: left, right, up, down  movement
 - ctrl: move away from the camera
 - shift: move towards the camera
 
 The console window might need to be resized for the image to look normal. 
 The window size I use: 
 - width: 100 characters
 - height: 51 characters

This is a project where I focused on the raytracing technology more than anything else, so it is more than likely to conatin memory leaks.
