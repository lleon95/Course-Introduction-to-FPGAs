# Final Exercise

The final exercise evaluates the HLS workflow. The RTL part won't be evaluated since it is not the normal acceleration workflow used in supercomputing.

Before proceeding, please, choose a topic (it should not repeat amongst your classmates) and it can be worked in groups.

## **Winograd Multiplication**

The matrix multiplication can be represented as a three for loop algorithm, which yields to a $O(n^3)$ time complexity. For instance:

```c++
for (int i = 0; i < M; ++i) {
    for (int j = 0; j < N, ++j) {
        for (int k = 0; k < N; ++k) {
            C[i][j] += A[i][k] * B[k][j]; 
        }
    }
}
```

However, there are more efficient algorithms that reduce the time complexity to something close to $O(n^2)$. One of these algorithms is the [Winograd multiplication](https://www.sciencedirect.com/science/article/pii/0024379571900097), which uses a domain transformation. 

The idea is to implement a Processing Element to perform the matrix-matrix multiplication for $2\times2$ matrices with accumulation. 


### Instructions

1. Create a fork from the [Flexible Accelerators Library](https://gitlab.com/ecas-lab-tec/approximate-flexible-acceleration-ml/flexible-accelerators-library-fal). Base your branches on `develop`.
2. Duplicate the accelerator from [examples/gemm](https://gitlab.com/ecas-lab-tec/approximate-flexible-acceleration-ml/flexible-accelerators-library-fal/-/tree/develop/examples/gemm). In particular, pay attention to the `execute` function in the [hardware implementation file](https://gitlab.com/ecas-lab-tec/approximate-flexible-acceleration-ml/flexible-accelerators-library-fal/-/blob/develop/examples/gemm/stream-gemm-hw.cpp#L21).
3. Optimise the design through the [tcl file](https://gitlab.com/ecas-lab-tec/approximate-flexible-acceleration-ml/flexible-accelerators-library-fal/-/blob/develop/examples/gemm/stream-gemm.tcl#L74).
4. Generate a report with a comparison between the three-for-loop implementation (the one you replaced) with your new implementation. Compare the difference between the PE resources in terms of resources, clocks and errors. You may need to disable the inlining of the execute function through `#pragma HLS inline off`.

## **Streaming Vector Dot Product**

In Deep Learning, vector dot products are quite common when implementing inference in low-latency applications. In this case, a single neuron can be modeled as a vector dot product between the weights (a.k.a. parameters) and the inputs to produce a single output.

$$
y = \mathbf{w} \cdot \mathbf{x}
$$

where $y$ is the scalar output, $\mathbf{x}$ and $\mathbf{w}$ are the input and weight vectors, respectively.

State-of-the-art accelerators usually use one of the following techniques:

* PE-based matrix multiplicators, i.e. Tensor Cores, Winograd
* Systolic Arrays
* Vector units

In this case, we are creating a novel multiplier that receives and holds the input and swaps the weights.

### Instructions

1. Create a fork from the [Flexible Accelerators Library](https://gitlab.com/ecas-lab-tec/approximate-flexible-acceleration-ml/flexible-accelerators-library-fal). Base your branches on `develop`.
2. Duplicate the accelerator from [examples/addition](https://gitlab.com/ecas-lab-tec/approximate-flexible-acceleration-ml/flexible-accelerators-library-fal/-/tree/feature/add-addition-accelerator/examples/addition). In particular, pay attention to the `execute` function in the [hardware implementation file](hhttps://gitlab.com/ecas-lab-tec/approximate-flexible-acceleration-ml/flexible-accelerators-library-fal/-/blob/feature/add-addition-accelerator/examples/addition/dataflow-addition-hw.cpp#L15). You may need to add masking for loading one of the vectors. You can take the [examples/gemm](https://gitlab.com/ecas-lab-tec/approximate-flexible-acceleration-ml/flexible-accelerators-library-fal/-/tree/develop/examples/gemm) as a reference, in particular, the [load_data](https://gitlab.com/ecas-lab-tec/approximate-flexible-acceleration-ml/flexible-accelerators-library-fal/-/blob/develop/examples/gemm/stream-gemm-hw.cpp#L141).
3. Optimise the design through the [tcl file](https://gitlab.com/ecas-lab-tec/approximate-flexible-acceleration-ml/flexible-accelerators-library-fal/-/blob/feature/add-addition-accelerator/examples/addition/dataflow-addition.tcl).
4. Modify the [testbench file](https://gitlab.com/ecas-lab-tec/approximate-flexible-acceleration-ml/flexible-accelerators-library-fal/-/blob/feature/add-addition-accelerator/examples/addition/dataflow-addition-tb.cpp) to support the vector-vector multiplication. You can base yourself in the [testbench from the gemm](https://gitlab.com/ecas-lab-tec/approximate-flexible-acceleration-ml/flexible-accelerators-library-fal/-/blob/develop/examples/gemm/stream-gemm-tb.cpp).
5. Generate a report with a comparison between the three-for-loop implementation (the one you replaced) with your new implementation. Compare the difference between the PE resources in terms of resources, clocks and errors. You may need to disable the inlining of the execute function through `#pragma HLS inline off`.

Please, submit the solutions are *Merge Requests* to the main repository. Make sure of adding your name as author in the codes so you can be a contributor depending on the quality of your solutions.
