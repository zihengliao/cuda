#include <stdio.h>

__global__ void hello(){

  // int index = threadIdx.x + blockIdx.x * blockDim.x

  printf("Hello from block: %u, thread: %u\n", blockIdx.x, threadIdx.x);
}

int main(){

  hello<<<2, 2>>>();
  cudaDeviceSynchronize();
}

