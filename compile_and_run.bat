@echo ***********************  cmake ***********************
mkdir build
cd build
cmake ..
cd ..

MSBuild ./build/CCPlayground.sln -p:Configuration=Debug

start /d "./build/Debug" CCPlayground.exe