#ifndef DIVER_H
#define DIVER_H


#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include <QKeyEvent>



class Diver : public QObject, public QGraphicsRectItem{

Q_OBJECT

public:

    Diver(QGraphicsItem* parent = 0);


    void keyPressEvent(QKeyEvent* event);



public slots:



    /*********** void Diver::spawnShark() *******************
     *
     * public slot member. Creates a Shark object connected
     * to the timeout() of a QTimer object.
     * Calls the Shark constructor, then adds the Shark to
     * the scene
     *
     *******************************************************/
    void spawnShark();





    /************ void Diver::spawnPearl(int) **************
     *
     * public slot member. Creates a Pearl object and adds it
     * to the scene. Connected to the diverSurfaced() signal
     * (whenever the level increases).
     * Calls the Pearl constructor, then adds the Pearl to
     * the scene
     *
     *****************************************************/
    void spawnPearl(size_t);


private:



};


#endif // DIVER_H
