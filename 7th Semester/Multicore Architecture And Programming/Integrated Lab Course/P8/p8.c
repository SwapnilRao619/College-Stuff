#include <stdio.h>
#include <omp.h>

// Helper function to simulate work
void process(char* task_name) {
    printf("Processing: %s\n", task_name);
}

int main() {
    // 1. Create a Team of Threads
    #pragma omp parallel
    {
        // 2. Only ONE thread should create the tasks (otherwise they duplicate)
        #pragma omp single
        {
            #pragma omp task
            process("Blurring");
            
            #pragma omp task
            process("Sharpening");
            
            #pragma omp task
            process("Contrast");
            
            #pragma omp task
            process("Resizing");
        }
    }
    return 0;
}
