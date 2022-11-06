import QtQuick 2.0
import QtLocation 5.6

Rectangle {
    Plugin {
        id: mapPlugin
        name: "osm"
    }

    Map {
        id: mapView
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositionong.coordinate(-27.5, 153.1);
        zoomLevel: 15
    }
}
