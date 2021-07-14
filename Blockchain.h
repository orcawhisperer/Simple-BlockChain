//
// Created by vasanth on 14/05/20.
//

#ifndef TEST_CHAIN_BLOCKCHAIN_H
#define TEST_CHAIN_BLOCKCHAIN_H

#include<cstdint>
#include<vector>
#include "Block.h"

using namespace std;

class BlockChain{
public:
    BlockChain();

    void AddBlock(Block bNew);

private:
    uint32_t _nDifficulty;
    vector<Block> _vChain;

    Block _GetLastBlock() const;
};

#endif //TEST_CHAIN_BLOCKCHAIN_H
