# Script to automate the build process

cmake -B build/

cd build/
make
cd ..

echo ""
echo "Output file: sdl2_hello_world.bin"