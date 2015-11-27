BASE_DIR=`pwd`
mkdir modbus
cd libmodbus-3.0.6
./configure --prefix $BASE_DIR/modbus 
make
make install
cd ..
