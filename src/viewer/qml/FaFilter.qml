import QtQuick 2.12
import SortFilterProxyModel 0.2
import FontAwesomeModelQml 1.0

SortFilterProxyModel {
    property string ttyName
    property string searchStr
    sourceModel: FAMQ.faModel
    filters: [
        ValueFilter {
            roleName: "ttf"
            value: ttyName
        },
        RegExpFilter {
            roleName: "name"
            pattern: "^fa_.*" + searchStr
            caseSensitivity: Qt.CaseInsensitive
        }
    ]
}
