import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Controls.Material 2.12
import FontAwesomeQml 1.0
import FontAwesomeModelQml 1.0

ApplicationWindow {
    visible: true
    width: 800
    height: 600
    title: "Font-Awesome viewer"
    Material.accent: Material.color(Material.Green)

    // Swiping tab contents is so cool
    SwipeView {
        id: swipeView
        width: parent.width
        anchors.top: parent.top
        anchors.bottom: tabBar.top
        currentIndex: tabBar.currentIndex
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
                    onFocusChanged:{
                        if(focus)
                            selectAll()
                    }
                }
                TextField {
                    width: 60
                    selectByMouse: true
                    text: model.unicode
                    onFocusChanged:{
                        if(focus)
                            selectAll()
                    }
                }
            }
        }
        // faRegular tab-content
        ScrollView {
            id: viewRegular
            ScrollBar.horizontal.policy: ScrollBar.AlwaysOff
            ListView {
                model: FAMQ.modelRegular
                delegate: listDelegate
            }
        }
        // faSolid tab-content
        ScrollView {
            id: viewSolid
            ScrollBar.horizontal.policy: ScrollBar.AlwaysOff
            ListView {
                model: FAMQ.modelSolid
                delegate: listDelegate
            }
        }
        // faBrands tab-content
        ScrollView {
            id: viewBrands
            ScrollBar.horizontal.policy: ScrollBar.AlwaysOff
            ListView {
                model: FAMQ.modelBrands
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
