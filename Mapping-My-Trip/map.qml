import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Window 2.14
import QtLocation 5.6
import QtPositioning 5.6

Rectangle {
    visible: true
    property double latitude;
    property double longitude;

    Plugin {
        id: mapPlugin
        name: "osm"
    }

    Map {
        id: map
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(42.9869327419883, -81.24889385852319); //London, ON
        zoomLevel: 15

        MapItemView{
            model: pinModel
            delegate: pinComponent
        }
    }

  /*  MouseArea{
        anchors.fill: parent

        onDoubleClicked: {
            var position = mapView.toCoordinate(Qt.point(mouse.x,mouse.y))
            latitude= position.latitude;
            longitude= position.longitude;
        }
    } */

    Component {
        id: pinComponent
        MapQuickItem{
            id: marker
            anchorPoint.x: image.width/2
            anchorPoint.y: image.height
            coordinate: QtPositioning.coordinate(42.9869327419883, -81.24889385852319);

            sourceItem: Image{
                id: image
                source: "qrc:/map_pin.png"
            }
        }
    }



}
