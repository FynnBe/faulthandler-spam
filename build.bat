mkdir build
cd build
del /s /q *.*
cmake -G "Visual Studio 14 2015 Win64" --config Release ../test_module
cmake --build . --target ALL_BUILD --config Release
cd ..
python test.py
