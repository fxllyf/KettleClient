#ifndef PRODUCT_H
#define PRODUCT_H

#include "jsonable.h"
#include "part.h"

class Product : public JSONAble {
protected:
    int m_id;
    QString m_name;
    QList<Part> m_parts;

    Product(); // TODO something with this :u
public:

    int id() const;
    void setId(int id);

    QString name() const;
    void setName(const QString &name);

    QList<Part> parts() const;
    void setParts(const QList<Part> &parts);

    // JSONAble interface
protected:
    bool validate(QJsonObject json) override;
    QVariantMap valuesMap() override;
    void setValuesMap(QVariantMap values) override;
};

#endif // PRODUCT_H
