#include <gtest/gtest.h>

#include <Kokkos_Core.hpp>

#include <mpi.h>

// Same as unit_test_main, but does not use Kokkos
int main(int argc, char *argv[]) {
    MPI_Init(&argc, &argv);
    ::testing::InitGoogleTest(&argc, argv);
    int return_val = RUN_ALL_TESTS();
    MPI_Finalize();
    return return_val;
}
