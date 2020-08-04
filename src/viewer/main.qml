import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Controls.Material 2.12
import FontAwesomeQml 1.0

ApplicationWindow {
    visible: true
    width: 800
    height: 600
    title: "Font-Awesome viewer"
    Material.accent: Material.color(Material.Green)

    SwipeView {
        id: swipeView
        width: parent.width
        anchors.top: parent.top
        anchors.bottom: tabBar.top
        currentIndex: tabBar.currentIndex
        ScrollView {
            id: viewBrands
            ListView {
                width: parent.width
                model: 2
                delegate: Row {
                    spacing: 10
                    height: 40
                    Label {
                        font.family: FA.family
                        font.styleName: "Solid"
                        font.pointSize: 25
                        text: FA.file
                        anchors.rightMargin: 10
                    }
                    TextField {
                        selectByMouse: true
                        text: "Item " + (index + 1)
                    }
                    width: parent.width
                }
            }
        }
        ScrollView {
            id: viewRegular
            ListView {
                width: parent.width
                model: 2
                delegate: ItemDelegate {
                    text: "Item " + (index + 1)
                    width: parent.width
                }
            }
        }
        ScrollView {
            id: viewSolid
            ListView {
                width: parent.width
                model: 3
                delegate: ItemDelegate {
                    text: "Item " + (index + 1)
                    width: parent.width
                }
            }
        }
    }
    TabBar {
        id: tabBar
        width: parent.width
        anchors.bottom: parent.bottom
        currentIndex: swipeView.currentIndex
        contentHeight: 32
        TabButton {
            id: tabBrandsView
            text: "FA Brands"
        }
        TabButton {
            id: tabRegularView
            text: "FA Regular"
        }
        TabButton {
            id: tabSolidView
            text: "FA Solid"
        }
    }
}
