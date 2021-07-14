//
// Created by vasanth on 14/05/20.
//


#include "Blockchain.h"

BlockChain::BlockChain() {
    _vChain.emplace_back(Block(0, "Genesis Block"));
    _nDifficulty= 10;
}

void BlockChain::AddBlock(Block bNew) {
    bNew.sPrevHash = _GetLastBlock().GetHash();
    bNew.MineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}
Block BlockChain::_GetLastBlock() const {
    return _vChain.back();
}

