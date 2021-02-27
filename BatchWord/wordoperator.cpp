#include "wordoperator.h"

WordOperator::WordOperator(QObject *parent, QString strFile) : QObject(parent)
{
    m_strFile = strFile;
}

void WordOperator::AddWaterMark(QString strMarkPng)
{
    if(!m_pDocument)
    {
        if(auto pWord = new QAxWidget("Word.Application"))
        {
            pWord->setProperty("Visible", true);
            pWord->setControl(m_strFile);
        }
    }

}
