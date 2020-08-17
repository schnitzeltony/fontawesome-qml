import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Controls.Material 2.12
import QtQuick.Layouts 1.12
import FontAwesomeQml 1.0

ApplicationWindow {
    id: appWnd
    visible: true
    width: 800
    height: 600
    title: "Font-Awesome viewer"

    property bool darkTheme: true
    readonly property real horizontalMargin: 8
    Material.theme: darkTheme ? Material.Dark : Material.Light

    header: ToolBar {
        id: toolbar
        readonly property color textColor: "white"
        RowLayout {
            anchors.fill: parent
            Label {
                Layout.leftMargin: appWnd.horizontalMargin
                text: qsTr("Search:")
                color: toolbar.textColor
            }
            TextField {
                id: searchField
                Layout.leftMargin: appWnd.horizontalMargin
                Layout.minimumWidth: 200
                Layout.bottomMargin: -8
                color: toolbar.textColor
                Material.accent: toolbar.textColor
                selectionColor: "dimgrey"
                selectByMouse: true
                mouseSelectionMode: TextInput.SelectWords
            }
            Item { Layout.fillWidth: true }
            Label {
                text: qsTr("Theme:")
                color: toolbar.textColor
            }
            Button {
                id: darkLightSwitcher
                //Layout.rightMargin: appWnd.horizontalMargin
                width: height
                font.family: FAQ.fontFamily
                font.styleName: "Solid"
                font.pointSize: 20
                text: darkTheme ? FAQ.icon(FAQ.fa_moon, toolbar.textColor) : FAQ.icon(FAQ.fa_sun, "yellow")
                onClicked: {
                    darkTheme = !darkTheme
                }
                background: Rectangle {
                    color: "transparent"
                }
            }
        }
    }
    // Swiping tab contents is so cool
    SwipeView {
        id: swipeView
        width: parent.width
        anchors.top: parent.top
        anchors.topMargin: 8
        anchors.bottom: tabBar.top
        anchors.bottomMargin: 8
        anchors.left: parent.left
        anchors.right: parent.right
        currentIndex: tabBar.currentIndex
        Material.accent: toolbar.Material.color(Material.Indigo)
        // Font row component
        Component {
            id: listDelegate
            Row {
                spacing: 20
                height: 40
                Label {
                    width: 40
                    font.family: FAQ.fontFamily
                    font.pointSize: 25
                    font.styleName: model.style
                    text: model.glyph
                }
                TextField {
                    width: 350
                    selectByMouse: true
                    text: model.name
                    onFocusChanged: {
                        if(focus)
                            selectAll()
                    }
                }
                TextField {
                    width: 60
                    selectByMouse: true
                    text: model.unicode
                    onFocusChanged: {
                        if(focus)
                            selectAll()
                    }
                }
            }
        }
        // faRegular tab-content
        ScrollView {
            ScrollBar.horizontal.policy: ScrollBar.AlwaysOff
            ListView {
                anchors.left: parent.left
                anchors.leftMargin: appWnd.horizontalMargin
                clip: true
                model: FaFilter {
                    ttyName: "ttfRegular"
                    searchStr: searchField.text
                }
                delegate: listDelegate
            }
        }
        // faSolid tab-content
        ScrollView {
            ScrollBar.horizontal.policy: ScrollBar.AlwaysOff
            ListView {
                anchors.left: parent.left
                anchors.leftMargin: appWnd.horizontalMargin
                clip: true
                model: FaFilter {
                    ttyName: "ttfSolid"
                    searchStr: searchField.text
                }
                delegate: listDelegate
            }
        }
        // faBrands tab-content
        ScrollView {
            ScrollBar.horizontal.policy: ScrollBar.AlwaysOff
            ListView {
                anchors.left: parent.left
                anchors.leftMargin: appWnd.horizontalMargin
                clip: true
                model: FaFilter {
                    ttyName: "ttfBrand"
                    searchStr: searchField.text
                }
                delegate: listDelegate
            }
        }
    }
    TabBar {
        id: tabBar
        width: parent.width
        anchors.bottom: parent.bottom
        currentIndex: swipeView.currentIndex
        contentHeight: 32
        Material.accent: Material.color(Material.Indigo)
        TabButton {
            id: tabRegularView
            text: "FA Regular"
        }
        TabButton {
            id: tabSolidView
            text: "FA Solid"
        }
        TabButton {
            id: tabBrandsView
            text: "FA Brands"
        }
    }
}
