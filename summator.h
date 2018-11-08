#ifndef SUMMATOR_H_
#define SUMMATOR_H_

#define BIT(K) (1u << K)
#define GET_BIT(N,K) ((N & BIT(K)) >> K)
#define ONE_AND(N) (N & 1)
#define ONE_LEFT_SHIFT(N) (N << 1)
#define ONE_RIGHT_SHIFT(N) (N >> 1)

unsigned add(const unsigned a, const unsigned b);
unsigned sub(const unsigned a, const unsigned b);
unsigned multiply(unsigned a, unsigned b);
int U2add(const int a, const int b);
int U2sub(const int a, const int b);
int itterAdd(const int a, const int b);
int AddByMacro(int a, int b);

#endif /* SUMMATOR1_H_ */
