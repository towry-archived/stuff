# Template 

I am the King!

~~~~~~

> Unless a template specialization has been explicitly instantiated or explicitly specialized, the compiler will generate a specialization for the template only when it needs the definition. This is called implicit instantiation.

> The compiler does not need to generate the specialization for nonclass, noninline entities when an explicit instantiation declaration is present.

> When talking about (explicit/implicit) specialization, we call the general template as primary template, for example

```c++
// primary template
template <typename T1, typename T2>
class A {};

// partial specialization
template <typename T>
class A<T, T> {};

// full spec
template <>
class A<T,T> {};
```
