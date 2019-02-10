#include <fenv.h>
#include <math.h>
#include <stdio.h>

void rtest(const char *fname, double (*f)(double x), double x) {
  printf("Clear inexact flag       :%s\n", feclearexcept(FE_INEXACT) ? "Fail" : "Success");
  printf("Set round to nearest mode:%s\n", fesetround(FE_TONEAREST)  ? "Fail" : "Success");

  double y = (*f)(x);
  printf("%s(%f) -->  %f\n", fname,x,y);

  printf("Inexact flag             :%s\n", fetestexcept(FE_INEXACT) ? "Inexact" : "Exact");
  puts("");
}

int main(void) {
  double x = 8.5;
  rtest("nearbyint", nearbyint, x);
  rtest("rint", rint, x);
  rtest("round", round, x);
  return 0;
}
