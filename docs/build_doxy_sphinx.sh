if [ -d "./xml" ];then
    rm -rf xml
fi
doxygen Doxyfile

if [ -d "./build" ];then
    rm -rf build
fi
sphinx -b html -d build/doctrees source build/html
