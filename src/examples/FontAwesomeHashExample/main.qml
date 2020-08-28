import QtQuick 2.12
import QtQuick.Window 2.12
import FontAwesomeQml 1.0
import FontAwesomeHash 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("FontAwesomeQML hash / ListModel example")

    ListView {
        anchors.fill: parent
        model: ListModel {
            ListElement {glyph: "fa_moon"; gcolor: "black"; gtext: "Sleep well"}
            ListElement {glyph: "fa_sun"; gcolor: "yellow"; gtext: "Most favorite"}
            ListElement {glyph: "fa_cloud_sun_rain"; gcolor: "orange"; gtext: "Nice either"}
            ListElement {glyph: "fa_snowflake"; gcolor: "lightgrey"; gtext: "Miss you..."}
        }
        delegate: Text {
            font.family: FAQ.fontFamily
            font.pointSize: 50
            text: FAQ.icon(FAQH.strToGlyph(glyph), gcolor) + gtext
        }
    }
}
