#ifndef SIBYL_CLIENT_MODEL_H_
#define SIBYL_CLIENT_MODEL_H_

#include "Portfolio.h"

namespace sibyl
{

class Model
{
public:
    virtual
    CSTR& BuildMsgOut() = 0; // build ref list based on pPortfolio and other calculated results

    // to be called by Trader
    virtual
    void SetStateLogPaths(CSTR &state, CSTR &log) = 0;
    void SetPortfolio    (Portfolio *pPortfolio_) { pPortfolio = pPortfolio_; }
    Model() : pPortfolio(nullptr) {} 
protected:
    Portfolio *pPortfolio;
};

}

#endif /* SIBYL_CLIENT_MODEL_H_ */