![](https://scontent.fbog4-1.fna.fbcdn.net/v/t39.30808-6/271153206_3074657909465585_6907762404450913633_n.jpg?_nc_cat=105&_nc_rgb565=1&ccb=1-5&_nc_sid=730e14&_nc_ohc=7IqN72eeoDwAX9bX3Qr&_nc_ht=scontent.fbog4-1.fna&oh=00_AT_Rjbyy3hyaq21IT0ZPHgwMs7BFAEd-ngb_QF3wpZnDnw&oe=61DD39C0)

# 0x18. C - Dynamic libraries

------------

## General
- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage nm, ldd, ldconfig

## List of files.

|  Archives | what does this file do?  | level |
| ------------ | ------------ | ------------ |
| libdynamic.so | Create the dynamic library libdynamic.so containing all the functions listed | Mandatory |
| 1-create_dynamic_lib.sh | Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory. | Mandatory |
| main.h | Donâ€™t forget to push your main.h file in your repository, containing at least all the prototypes of the above functions. | Mandatory |
| 100-operations.so | Create a dynamic library that contains C functions that can be called from Python | Advanced |
| 101-make_me_win.sh |  | Advanced |

------------
