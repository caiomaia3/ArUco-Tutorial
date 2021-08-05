# ArUco-Tutorial
A repository with my learning path to ArUco OpenCV library.


A primeira coisa a se fazer é baixar o opencv

Este pode ser baixado via

```
git@github.com:opencv/opencv.git
git@github.com:opencv/opencv_contrib.git
```

para baixar o opencv e os módulos extras, como aruco.

depois é necessário criar uma basda de build
dentro da pasta de build utilize o comando cmake da seguinte forma:

```
# Install minimal prerequisites (Ubuntu 18.04 as reference)
sudo apt update && sudo apt install -y cmake g++
# Download and unpack sources

# Create build directory and switch into it
mkdir -p build && cd build
# Configure

cmake -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib/modules ../opencv-master
# Build
make -j7

```
7 é o número de processadores utilizados.