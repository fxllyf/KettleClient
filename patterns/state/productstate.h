#ifndef PRODUCTSTATE_H
#define PRODUCTSTATE_H

#include "abstractstate.h"

class ProductState : public AbstractState {
public:
    ProductState(NetworkService *service, JSONModel *model, QWidget *parent);

    // AbstractState interface
public:
    void getList() override;
    void add() override;
    void update() override;
    void remove() override;
};

#endif // PRODUCTSTATE_H
