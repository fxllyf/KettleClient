#ifndef ORDERSTATE_H
#define ORDERSTATE_H

#include "abstractstate.h"

class OrderState : public AbstractState {
public:
    OrderState(NetworkService *service, JSONModel *model, QWidget *parent);

    // AbstractState interface
public:
    void getList() override;
    void add() override;
    void update() override;
    void remove() override;
};

#endif // ORDERSTATE_H
