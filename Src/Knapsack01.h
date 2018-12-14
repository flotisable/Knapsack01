#ifndef KNAPSACK01_H
#define KNAPSACK01_H

#include <vector>

class Knapsack01
{
  public:

    inline void setCapacity( int capacity );
    inline void addItem    ( int profit,   int weight );

    int solve();

  private:

    struct Item
    {
      int profit;
      int weight;
    };

    int mCapacity;

    std::vector<Item> mItems;
};

// public inline member functions
inline void Knapsack01::setCapacity( int capacity )
{ mCapacity = capacity; }
inline void Knapsack01::addItem    ( int profit,   int weight )
{ mItems.push_back( Item{ profit, weight } ); }
// end public inline member functions

#endif
