#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QObject>

class server: public QObject
{
    Q_OBJECT
private:
    QTcpServer * qServer;
    QTcpSocket * client;

public slots:
    void acceptConn();
    void printMessage();

public:
    server();
};

#endif // SERVER_H
