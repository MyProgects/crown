Changelog
=========

0.37.0
------
*DD MMM YYYY*

* runtime: added RenderWorld.mesh_set_material()
* runtime: added World.unit_by_name()
* runtime: fixed an issue where a regular Matrix4x4 was returned if Matrix4x4Box is called without arguments
* runtime: removed "io" and "os" libraries from Lua API
* runtime: small fixes and performance improvements
* runtime: sprite's frame number now wraps if it is greater than the total number of frames in the sprite
* tools: fixed a crash when entering empty commands in the console
* tools: fixed an issue that prevented some operations in the Level Editor from being (un/re)done
* tools: fixed an issue that prevented the data compiler from restoring and saving its state when launched by the Level Editor
* tools: the game will now be started or stopped according to its running state when launched from the Level Editor
* tools: the Properties Panel now accepts more sensible numeric ranges
* tools: the Properties Panel now allows the user to modify most Unit's component properties
* tools: the Data Compiler will now track data "requirements" and automatically include them in packages when it's needed