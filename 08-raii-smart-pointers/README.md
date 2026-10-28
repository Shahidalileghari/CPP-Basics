# 08 — RAII, smart pointers, and move semantics

Understand deterministic resource release, exception safety, `std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr`, copy/move constructors, move assignment, and value categories.

- Prefer the rule of zero: compose standard types and let them manage resources.
- Use `unique_ptr` for exclusive ownership and `shared_ptr` only for genuinely shared ownership.
- Avoid shared ownership by default; cycles can leak without `weak_ptr`.
- A moved-from object remains valid but may have an unspecified value unless documented otherwise.

## Exercises
- Implement a move-only resource wrapper.
- Explain why copying an owning raw pointer can cause double deletion.
- Use `unique_ptr` to model exclusive ownership.
