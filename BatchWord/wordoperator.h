#ifndef WORDOPERATOR_H
#define WORDOPERATOR_H

#include <QObject>
#include <QAxObject>
#include <QAxWidget>

class WordOperator : public QObject
{
    Q_OBJECT
public:
    explicit WordOperator(QObject *parent, QString strFile);
    void AddWaterMark(QString strMarkPng);
protected:
    QAxObject *m_pDocument = nullptr;
    QString m_strFile = "";
signals:

};

#endif // WORDOPERATOR_H
