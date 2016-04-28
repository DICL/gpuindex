export NVCC=nvcc
export NVCCFLAGS= -default-stream per-thread -arch=sm_20 -std=c++11 -w -ltbb

OBJECTS=./src/*/*.o

all: 
	cd src; $(MAKE)
	$(NVCC) $(NVCCFLAGS) $(OBJECTS) -o ./bin/cuda

clean:
	find . -type f -name "*.o" -delete; find ./bin/ -type f -name "cuda" -delete
