# 12 — Concurrency and performance

Topics: `std::thread`, `std::jthread` (C++20), mutexes, lock guards, condition variables, futures/promises, atomics, data races, deadlocks, profiling, and benchmarking.

## Safety checklist
- Shared mutable state needs synchronization or a carefully designed lock-free strategy.
- Prefer RAII locks such as `std::lock_guard` and `std::scoped_lock`.
- Never detach threads casually; reason about object lifetimes.
- Race-free code can still perform poorly; measure representative workloads.

## Exercises
- Launch threads that compute independent partial sums.
- Protect a shared counter with a mutex.
- Compare sequential and parallel versions with a benchmark.
- Describe a deadlock and show how to prevent it.
