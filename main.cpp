#include "Blockchain.h"

int main() {
    BlockChain bChain = BlockChain();

    cout<<"Mining Block 1..."<<endl;
    bChain.AddBlock(Block(1,"Block 1 Data"));

    cout<<"Mining Block 2..."<<endl;
    bChain.AddBlock(Block(2,"Block 2 Data"));

    cout<<"Mining Block 3..."<<endl;
    bChain.AddBlock(Block(3,"Block 3 Data"));

    return 0;
}
