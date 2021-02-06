#ifndef CONVERTTARGET_H
#define CONVERTTARGET_H

#include <QObject>

class ConvertTarget : public QObject
{
    Q_OBJECT
public:
    explicit ConvertTarget(QObject *parent = nullptr);
    ConvertTarget( const QString & source, const quint8 & source_system, QObject * parent = nullptr ) :
        QObject( parent ),
        p_source( source ),
        p_source_system( source_system )
    {

    }

    QString convert( const quint8 & target_system ) {
        return "";
    }
private:
    QString p_source;
    quint8 p_source_system;
};

#endif // CONVERTTARGET_H
