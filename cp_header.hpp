/*
Command to compile header file:
clang++ -c -x c++-header -Xclang -emit-pch -O3 -std=c++17 cp_header.hpp -o
cp_header.pch
Command to compile source file (FastOlympicCoding): clang++
-include-pch cp_header.pch -O3 -std=c++17 '{source_file}' -o {file_name}
*/
#pragma once
#include <bits/stdc++.h>
using namespace std;

#define LOCAL

#define F first
#define S second
#define B begin
#define E end

using ll = long long;
using ld = long double;
using st = string;
using vll = vector<ll>;
using vld = vector<ld>;
using vs = vector<st>;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p)
{
  return os << '(' << p.first << ", " << p.second << ')';
}

template <typename T_container, typename T = typename enable_if<
                                    !is_same<T_container, string>::value,
                                    typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
  os << '{';
  string sep;
  for (const T &x : v)
    os << sep << x, sep = ", ";
  return os << '}';
}

void dbg_out() { cerr << endl; }

template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T)
{
  cerr << ' ' << H;
  dbg_out(T...);
}

#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif