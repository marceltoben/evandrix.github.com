/* g++-mp-4.5 -Wall -pedantic -std=c++0x -g -ggdb -I/opt/local/include -L/opt/local/lib -static-libstdc++ monads.cpp -o monads */
#include <iostream>
#include <functional>

template<int n> struct Const {};
template<class E1, class E2> struct Plus {};
template<class E1, class E2> struct Times {};
struct Arg1 {};
struct Arg2 {};

// type Args = [Integer]
struct Args
{
    Args(int i, int j) {
        _a[0] = i;
        _a[1] = j;
    }
    int operator[](int n) { return _a[n]; }
    int _a[2];
};
/* in Haskell:
	getArg :: Int -> Prog Int
	getArg n = PR (λ args -> args !! n)
*/
template<int n> struct GetArg { // instance of the concept PR
    int operator()(Args args) {
        return args[n];
    }
};

/* Haskell's implementation of monadic bind
	bind (PR prog) cont =
	    PR (λ args ->
	        let v = prog args
	            (PR prog') = cont v
	        in
	            prog' args)
*/
template<class P1, class P2>	// compile-time type parameters
struct Bind
{
	Bind(P1 prog, std::function<P2(int)> cont)
		: _prog(prog), _cont(cont) {}

	int operator()(Args args) {
        int v = _prog(args);
        P2 prog2 = _cont(v);
        return prog2(args);
    }

	P1 _prog;
	// store a lambda continuation
    std::function<P2(int)> _cont;
};

/* in Haskell:
	return :: a -> Prog a
	return v = PR (λ args -> v)
*/
struct Return
{
    Return(int v) : _v(v) {}
    int operator()(Args args)
    {
        return _v;
    }
    int _v;
};

// compile :: Exp -> Prog Int
template<class Exp>
struct Compile;

// compile (Const c) = return c
template<int c>
struct Compile<Const<c> > : Return
{
    Compile() : Return(c) {}
};

// compile Arg1 = getArg 0
template<>
struct Compile<Arg1> : GetArg<0> {};

// compile Arg2 = getArg 1
template<>
struct Compile<Arg2> : GetArg<1> {};

/* in Haskell:
	compile (Plus exL exR) =
	  bind compile exL
	       λ left ->
	          bind compile exR
	               λ right ->
	                   return (left + right)
*/
template<class L, class R>
struct Compile<Plus<L, R> > {
  int operator()(Args args)
  {
    return Bind<Compile<L>, Bind<Compile<R>, Return> > (
      Compile<L>(),
      [](int left) -> Bind<Compile<R>, Return> {
        return Bind<Compile<R>, Return>(
          Compile<R>(),
          [left](int right) -> Return {
            return Return(left + right);
          }
        );
      }
    )(args);
  }
};

template<class L, class R>
struct Compile<Times<L, R> > {
  int operator()(Args args)
  {
    return Bind<Compile<L>, Bind<Compile<R>, Return> > (
      Compile<L>(),
      [](int left) -> Bind<Compile<R>, Return> {
        return Bind<Compile<R>, Return>(
          Compile<R>(),
          [left](int right) -> Return {
            return Return(left * right);
          }
        );
      }
    )(args);
  }
};

int main(void) {
    Args args(3, 4);
    Compile<Plus<Times<Arg1, Arg2>, Const<13> > > act;
    int v = act(args);
    std::cout << v << std::endl;
	return 0;
}
