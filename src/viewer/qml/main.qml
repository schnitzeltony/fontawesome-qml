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
    property int verticalScrollWidth: 16
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
                text: darkTheme ? FAQ.colorize(FAQ.fa_moon, toolbar.textColor) : FAQ.colorize(FAQ.fa_sun, "yellow")
                onClicked: {
                    darkTheme = !darkTheme
                }
                background: Rectangle {
                    color: "transparent"
                }
            }
        }
    }
    // Font row component
    Component {
        id: listDelegate
        ItemDelegate {
            anchors.left: parent.left
            width: parent.width - appWnd.verticalScrollWidth
            onClicked: {
                nameTextField.focus = true
            }
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
                    id: nameTextField
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
    }
    // Swiping tab contents is so cool
    SwipeView {
        id: swipeView
        anchors.top: parent.top
        anchors.topMargin: 8
        anchors.bottom: tabBar.top
        anchors.bottomMargin: 8
        anchors.left: parent.left
        width: parent.width
        currentIndex: tabBar.currentIndex
        Material.accent: toolbar.Material.color(Material.Indigo)
        // faRegular tab-content
        ListView {
            clip: true
            model: FaFilter {
                ttyName: "ttfRegular"
                searchStr: searchField.text
            }
            delegate: listDelegate
            ScrollBar.vertical: ScrollBar {
                anchors.right: parent.right
                width: appWnd.verticalScrollWidth
                orientation: Qt.Vertical
                policy: ScrollBar.AlwaysOn
            }
        }
        // faSolid tab-content
        ListView {
            clip: true
            model: FaFilter {
                ttyName: "ttfSolid"
                searchStr: searchField.text
            }
            delegate: listDelegate
            ScrollBar.vertical: ScrollBar {
                anchors.right: parent.right
                width: appWnd.verticalScrollWidth
                orientation: Qt.Vertical
                policy: ScrollBar.AlwaysOn
            }
        }
        // faBrands tab-content
        ListView {
            clip: true
            model: FaFilter {
                ttyName: "ttfBrand"
                searchStr: searchField.text
            }
            delegate: listDelegate
            ScrollBar.vertical: ScrollBar {
                anchors.right: parent.right
                width: appWnd.verticalScrollWidth
                orientation: Qt.Vertical
                policy: ScrollBar.AlwaysOn
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
