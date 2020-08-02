#ifndef FONTAWESOME_QML_H
#define FONTAWESOME_QML_H

#include <QObject>
#include <QColor>
#include "fontawesomeqml_export.h"

// forwards
class QQmlEngine;
class QJSEngine;

class FONTAWESOMEQML_EXPORT FontAwesomeQml : public QObject
{
    Q_OBJECT
public:
    static int registerQml();
    static FontAwesomeQml *getInstance();

    Q_PROPERTY(QString family READ family CONSTANT);
    QString family() { return QStringLiteral("Font Awesome 5 Free"); };

    Q_INVOKABLE QString icon(const QString &symbol, QColor color) const;

    // START AUTO-GENERATED
    Q_PROPERTY(QString firefox_browser READ firefox_browser CONSTANT);
    QString firefox_browser() const { return QString::fromUtf8("\ue007"); }
    Q_PROPERTY(QString ideal READ ideal CONSTANT);
    QString ideal() const { return QString::fromUtf8("\ue013"); }
    Q_PROPERTY(QString microblog READ microblog CONSTANT);
    QString microblog() const { return QString::fromUtf8("\ue01a"); }
    Q_PROPERTY(QString pied_piper_square READ pied_piper_square CONSTANT);
    QString pied_piper_square() const { return QString::fromUtf8("\ue01e"); }
    Q_PROPERTY(QString unity READ unity CONSTANT);
    QString unity() const { return QString::fromUtf8("\ue049"); }
    Q_PROPERTY(QString dailymotion READ dailymotion CONSTANT);
    QString dailymotion() const { return QString::fromUtf8("\ue052"); }
    Q_PROPERTY(QString instagram_square READ instagram_square CONSTANT);
    QString instagram_square() const { return QString::fromUtf8("\ue055"); }
    Q_PROPERTY(QString mixer READ mixer CONSTANT);
    QString mixer() const { return QString::fromUtf8("\ue056"); }
    Q_PROPERTY(QString shopify READ shopify CONSTANT);
    QString shopify() const { return QString::fromUtf8("\ue057"); }
    Q_PROPERTY(QString deezer READ deezer CONSTANT);
    QString deezer() const { return QString::fromUtf8("\ue077"); }
    Q_PROPERTY(QString edge_legacy READ edge_legacy CONSTANT);
    QString edge_legacy() const { return QString::fromUtf8("\ue078"); }
    Q_PROPERTY(QString google_pay READ google_pay CONSTANT);
    QString google_pay() const { return QString::fromUtf8("\ue079"); }
    Q_PROPERTY(QString rust READ rust CONSTANT);
    QString rust() const { return QString::fromUtf8("\ue07a"); }
    Q_PROPERTY(QString tiktok READ tiktok CONSTANT);
    QString tiktok() const { return QString::fromUtf8("\ue07b"); }
    Q_PROPERTY(QString unsplash READ unsplash CONSTANT);
    QString unsplash() const { return QString::fromUtf8("\ue07c"); }
    Q_PROPERTY(QString twitter_square READ twitter_square CONSTANT);
    QString twitter_square() const { return QString::fromUtf8("\uf081"); }
    Q_PROPERTY(QString facebook_square READ facebook_square CONSTANT);
    QString facebook_square() const { return QString::fromUtf8("\uf082"); }
    Q_PROPERTY(QString linkedin READ linkedin CONSTANT);
    QString linkedin() const { return QString::fromUtf8("\uf08c"); }
    Q_PROPERTY(QString github_square READ github_square CONSTANT);
    QString github_square() const { return QString::fromUtf8("\uf092"); }
    Q_PROPERTY(QString twitter READ twitter CONSTANT);
    QString twitter() const { return QString::fromUtf8("\uf099"); }
    Q_PROPERTY(QString facebook READ facebook CONSTANT);
    QString facebook() const { return QString::fromUtf8("\uf09a"); }
    Q_PROPERTY(QString github READ github CONSTANT);
    QString github() const { return QString::fromUtf8("\uf09b"); }
    Q_PROPERTY(QString pinterest READ pinterest CONSTANT);
    QString pinterest() const { return QString::fromUtf8("\uf0d2"); }
    Q_PROPERTY(QString pinterest_square READ pinterest_square CONSTANT);
    QString pinterest_square() const { return QString::fromUtf8("\uf0d3"); }
    Q_PROPERTY(QString google_plus_square READ google_plus_square CONSTANT);
    QString google_plus_square() const { return QString::fromUtf8("\uf0d4"); }
    Q_PROPERTY(QString google_plus_g READ google_plus_g CONSTANT);
    QString google_plus_g() const { return QString::fromUtf8("\uf0d5"); }
    Q_PROPERTY(QString linkedin_in READ linkedin_in CONSTANT);
    QString linkedin_in() const { return QString::fromUtf8("\uf0e1"); }
    Q_PROPERTY(QString github_alt READ github_alt CONSTANT);
    QString github_alt() const { return QString::fromUtf8("\uf113"); }
    Q_PROPERTY(QString maxcdn READ maxcdn CONSTANT);
    QString maxcdn() const { return QString::fromUtf8("\uf136"); }
    Q_PROPERTY(QString html5 READ html5 CONSTANT);
    QString html5() const { return QString::fromUtf8("\uf13b"); }
    Q_PROPERTY(QString css3 READ css3 CONSTANT);
    QString css3() const { return QString::fromUtf8("\uf13c"); }
    Q_PROPERTY(QString btc READ btc CONSTANT);
    QString btc() const { return QString::fromUtf8("\uf15a"); }
    Q_PROPERTY(QString youtube READ youtube CONSTANT);
    QString youtube() const { return QString::fromUtf8("\uf167"); }
    Q_PROPERTY(QString xing READ xing CONSTANT);
    QString xing() const { return QString::fromUtf8("\uf168"); }
    Q_PROPERTY(QString xing_square READ xing_square CONSTANT);
    QString xing_square() const { return QString::fromUtf8("\uf169"); }
    Q_PROPERTY(QString dropbox READ dropbox CONSTANT);
    QString dropbox() const { return QString::fromUtf8("\uf16b"); }
    Q_PROPERTY(QString stack_overflow READ stack_overflow CONSTANT);
    QString stack_overflow() const { return QString::fromUtf8("\uf16c"); }
    Q_PROPERTY(QString instagram READ instagram CONSTANT);
    QString instagram() const { return QString::fromUtf8("\uf16d"); }
    Q_PROPERTY(QString flickr READ flickr CONSTANT);
    QString flickr() const { return QString::fromUtf8("\uf16e"); }
    Q_PROPERTY(QString adn READ adn CONSTANT);
    QString adn() const { return QString::fromUtf8("\uf170"); }
    Q_PROPERTY(QString bitbucket READ bitbucket CONSTANT);
    QString bitbucket() const { return QString::fromUtf8("\uf171"); }
    Q_PROPERTY(QString tumblr READ tumblr CONSTANT);
    QString tumblr() const { return QString::fromUtf8("\uf173"); }
    Q_PROPERTY(QString tumblr_square READ tumblr_square CONSTANT);
    QString tumblr_square() const { return QString::fromUtf8("\uf174"); }
    Q_PROPERTY(QString apple READ apple CONSTANT);
    QString apple() const { return QString::fromUtf8("\uf179"); }
    Q_PROPERTY(QString windows READ windows CONSTANT);
    QString windows() const { return QString::fromUtf8("\uf17a"); }
    Q_PROPERTY(QString android READ android CONSTANT);
    QString android() const { return QString::fromUtf8("\uf17b"); }
    Q_PROPERTY(QString linux_rocks READ linux_rocks CONSTANT);
    QString linux_rocks() const { return QString::fromUtf8("\uf17c"); }
    Q_PROPERTY(QString dribbble READ dribbble CONSTANT);
    QString dribbble() const { return QString::fromUtf8("\uf17d"); }
    Q_PROPERTY(QString skype READ skype CONSTANT);
    QString skype() const { return QString::fromUtf8("\uf17e"); }
    Q_PROPERTY(QString foursquare READ foursquare CONSTANT);
    QString foursquare() const { return QString::fromUtf8("\uf180"); }
    Q_PROPERTY(QString trello READ trello CONSTANT);
    QString trello() const { return QString::fromUtf8("\uf181"); }
    Q_PROPERTY(QString gratipay READ gratipay CONSTANT);
    QString gratipay() const { return QString::fromUtf8("\uf184"); }
    Q_PROPERTY(QString vk READ vk CONSTANT);
    QString vk() const { return QString::fromUtf8("\uf189"); }
    Q_PROPERTY(QString weibo READ weibo CONSTANT);
    QString weibo() const { return QString::fromUtf8("\uf18a"); }
    Q_PROPERTY(QString renren READ renren CONSTANT);
    QString renren() const { return QString::fromUtf8("\uf18b"); }
    Q_PROPERTY(QString pagelines READ pagelines CONSTANT);
    QString pagelines() const { return QString::fromUtf8("\uf18c"); }
    Q_PROPERTY(QString stack_exchange READ stack_exchange CONSTANT);
    QString stack_exchange() const { return QString::fromUtf8("\uf18d"); }
    Q_PROPERTY(QString vimeo_square READ vimeo_square CONSTANT);
    QString vimeo_square() const { return QString::fromUtf8("\uf194"); }
    Q_PROPERTY(QString slack READ slack CONSTANT);
    QString slack() const { return QString::fromUtf8("\uf198"); }
    Q_PROPERTY(QString wordpress READ wordpress CONSTANT);
    QString wordpress() const { return QString::fromUtf8("\uf19a"); }
    Q_PROPERTY(QString openid READ openid CONSTANT);
    QString openid() const { return QString::fromUtf8("\uf19b"); }
    Q_PROPERTY(QString yahoo READ yahoo CONSTANT);
    QString yahoo() const { return QString::fromUtf8("\uf19e"); }
    Q_PROPERTY(QString google READ google CONSTANT);
    QString google() const { return QString::fromUtf8("\uf1a0"); }
    Q_PROPERTY(QString reddit READ reddit CONSTANT);
    QString reddit() const { return QString::fromUtf8("\uf1a1"); }
    Q_PROPERTY(QString reddit_square READ reddit_square CONSTANT);
    QString reddit_square() const { return QString::fromUtf8("\uf1a2"); }
    Q_PROPERTY(QString stumbleupon_circle READ stumbleupon_circle CONSTANT);
    QString stumbleupon_circle() const { return QString::fromUtf8("\uf1a3"); }
    Q_PROPERTY(QString stumbleupon READ stumbleupon CONSTANT);
    QString stumbleupon() const { return QString::fromUtf8("\uf1a4"); }
    Q_PROPERTY(QString delicious READ delicious CONSTANT);
    QString delicious() const { return QString::fromUtf8("\uf1a5"); }
    Q_PROPERTY(QString digg READ digg CONSTANT);
    QString digg() const { return QString::fromUtf8("\uf1a6"); }
    Q_PROPERTY(QString pied_piper_pp READ pied_piper_pp CONSTANT);
    QString pied_piper_pp() const { return QString::fromUtf8("\uf1a7"); }
    Q_PROPERTY(QString pied_piper_alt READ pied_piper_alt CONSTANT);
    QString pied_piper_alt() const { return QString::fromUtf8("\uf1a8"); }
    Q_PROPERTY(QString drupal READ drupal CONSTANT);
    QString drupal() const { return QString::fromUtf8("\uf1a9"); }
    Q_PROPERTY(QString joomla READ joomla CONSTANT);
    QString joomla() const { return QString::fromUtf8("\uf1aa"); }
    Q_PROPERTY(QString behance READ behance CONSTANT);
    QString behance() const { return QString::fromUtf8("\uf1b4"); }
    Q_PROPERTY(QString behance_square READ behance_square CONSTANT);
    QString behance_square() const { return QString::fromUtf8("\uf1b5"); }
    Q_PROPERTY(QString steam READ steam CONSTANT);
    QString steam() const { return QString::fromUtf8("\uf1b6"); }
    Q_PROPERTY(QString steam_square READ steam_square CONSTANT);
    QString steam_square() const { return QString::fromUtf8("\uf1b7"); }
    Q_PROPERTY(QString spotify READ spotify CONSTANT);
    QString spotify() const { return QString::fromUtf8("\uf1bc"); }
    Q_PROPERTY(QString deviantart READ deviantart CONSTANT);
    QString deviantart() const { return QString::fromUtf8("\uf1bd"); }
    Q_PROPERTY(QString soundcloud READ soundcloud CONSTANT);
    QString soundcloud() const { return QString::fromUtf8("\uf1be"); }
    Q_PROPERTY(QString vine READ vine CONSTANT);
    QString vine() const { return QString::fromUtf8("\uf1ca"); }
    Q_PROPERTY(QString codepen READ codepen CONSTANT);
    QString codepen() const { return QString::fromUtf8("\uf1cb"); }
    Q_PROPERTY(QString jsfiddle READ jsfiddle CONSTANT);
    QString jsfiddle() const { return QString::fromUtf8("\uf1cc"); }
    Q_PROPERTY(QString rebel READ rebel CONSTANT);
    QString rebel() const { return QString::fromUtf8("\uf1d0"); }
    Q_PROPERTY(QString empire READ empire CONSTANT);
    QString empire() const { return QString::fromUtf8("\uf1d1"); }
    Q_PROPERTY(QString git_square READ git_square CONSTANT);
    QString git_square() const { return QString::fromUtf8("\uf1d2"); }
    Q_PROPERTY(QString git READ git CONSTANT);
    QString git() const { return QString::fromUtf8("\uf1d3"); }
    Q_PROPERTY(QString hacker_news READ hacker_news CONSTANT);
    QString hacker_news() const { return QString::fromUtf8("\uf1d4"); }
    Q_PROPERTY(QString tencent_weibo READ tencent_weibo CONSTANT);
    QString tencent_weibo() const { return QString::fromUtf8("\uf1d5"); }
    Q_PROPERTY(QString qq READ qq CONSTANT);
    QString qq() const { return QString::fromUtf8("\uf1d6"); }
    Q_PROPERTY(QString weixin READ weixin CONSTANT);
    QString weixin() const { return QString::fromUtf8("\uf1d7"); }
    Q_PROPERTY(QString slideshare READ slideshare CONSTANT);
    QString slideshare() const { return QString::fromUtf8("\uf1e7"); }
    Q_PROPERTY(QString twitch READ twitch CONSTANT);
    QString twitch() const { return QString::fromUtf8("\uf1e8"); }
    Q_PROPERTY(QString yelp READ yelp CONSTANT);
    QString yelp() const { return QString::fromUtf8("\uf1e9"); }
    Q_PROPERTY(QString paypal READ paypal CONSTANT);
    QString paypal() const { return QString::fromUtf8("\uf1ed"); }
    Q_PROPERTY(QString google_wallet READ google_wallet CONSTANT);
    QString google_wallet() const { return QString::fromUtf8("\uf1ee"); }
    Q_PROPERTY(QString cc_visa READ cc_visa CONSTANT);
    QString cc_visa() const { return QString::fromUtf8("\uf1f0"); }
    Q_PROPERTY(QString cc_mastercard READ cc_mastercard CONSTANT);
    QString cc_mastercard() const { return QString::fromUtf8("\uf1f1"); }
    Q_PROPERTY(QString cc_discover READ cc_discover CONSTANT);
    QString cc_discover() const { return QString::fromUtf8("\uf1f2"); }
    Q_PROPERTY(QString cc_amex READ cc_amex CONSTANT);
    QString cc_amex() const { return QString::fromUtf8("\uf1f3"); }
    Q_PROPERTY(QString cc_paypal READ cc_paypal CONSTANT);
    QString cc_paypal() const { return QString::fromUtf8("\uf1f4"); }
    Q_PROPERTY(QString cc_stripe READ cc_stripe CONSTANT);
    QString cc_stripe() const { return QString::fromUtf8("\uf1f5"); }
    Q_PROPERTY(QString lastfm READ lastfm CONSTANT);
    QString lastfm() const { return QString::fromUtf8("\uf202"); }
    Q_PROPERTY(QString lastfm_square READ lastfm_square CONSTANT);
    QString lastfm_square() const { return QString::fromUtf8("\uf203"); }
    Q_PROPERTY(QString ioxhost READ ioxhost CONSTANT);
    QString ioxhost() const { return QString::fromUtf8("\uf208"); }
    Q_PROPERTY(QString angellist READ angellist CONSTANT);
    QString angellist() const { return QString::fromUtf8("\uf209"); }
    Q_PROPERTY(QString buysellads READ buysellads CONSTANT);
    QString buysellads() const { return QString::fromUtf8("\uf20d"); }
    Q_PROPERTY(QString connectdevelop READ connectdevelop CONSTANT);
    QString connectdevelop() const { return QString::fromUtf8("\uf20e"); }
    Q_PROPERTY(QString dashcube READ dashcube CONSTANT);
    QString dashcube() const { return QString::fromUtf8("\uf210"); }
    Q_PROPERTY(QString forumbee READ forumbee CONSTANT);
    QString forumbee() const { return QString::fromUtf8("\uf211"); }
    Q_PROPERTY(QString leanpub READ leanpub CONSTANT);
    QString leanpub() const { return QString::fromUtf8("\uf212"); }
    Q_PROPERTY(QString sellsy READ sellsy CONSTANT);
    QString sellsy() const { return QString::fromUtf8("\uf213"); }
    Q_PROPERTY(QString shirtsinbulk READ shirtsinbulk CONSTANT);
    QString shirtsinbulk() const { return QString::fromUtf8("\uf214"); }
    Q_PROPERTY(QString simplybuilt READ simplybuilt CONSTANT);
    QString simplybuilt() const { return QString::fromUtf8("\uf215"); }
    Q_PROPERTY(QString skyatlas READ skyatlas CONSTANT);
    QString skyatlas() const { return QString::fromUtf8("\uf216"); }
    Q_PROPERTY(QString pinterest_p READ pinterest_p CONSTANT);
    QString pinterest_p() const { return QString::fromUtf8("\uf231"); }
    Q_PROPERTY(QString whatsapp READ whatsapp CONSTANT);
    QString whatsapp() const { return QString::fromUtf8("\uf232"); }
    Q_PROPERTY(QString viacoin READ viacoin CONSTANT);
    QString viacoin() const { return QString::fromUtf8("\uf237"); }
    Q_PROPERTY(QString medium READ medium CONSTANT);
    QString medium() const { return QString::fromUtf8("\uf23a"); }
    Q_PROPERTY(QString y_combinator READ y_combinator CONSTANT);
    QString y_combinator() const { return QString::fromUtf8("\uf23b"); }
    Q_PROPERTY(QString optin_monster READ optin_monster CONSTANT);
    QString optin_monster() const { return QString::fromUtf8("\uf23c"); }
    Q_PROPERTY(QString opencart READ opencart CONSTANT);
    QString opencart() const { return QString::fromUtf8("\uf23d"); }
    Q_PROPERTY(QString expeditedssl READ expeditedssl CONSTANT);
    QString expeditedssl() const { return QString::fromUtf8("\uf23e"); }
    Q_PROPERTY(QString cc_jcb READ cc_jcb CONSTANT);
    QString cc_jcb() const { return QString::fromUtf8("\uf24b"); }
    Q_PROPERTY(QString cc_diners_club READ cc_diners_club CONSTANT);
    QString cc_diners_club() const { return QString::fromUtf8("\uf24c"); }
    Q_PROPERTY(QString creative_commons READ creative_commons CONSTANT);
    QString creative_commons() const { return QString::fromUtf8("\uf25e"); }
    Q_PROPERTY(QString gg READ gg CONSTANT);
    QString gg() const { return QString::fromUtf8("\uf260"); }
    Q_PROPERTY(QString gg_circle READ gg_circle CONSTANT);
    QString gg_circle() const { return QString::fromUtf8("\uf261"); }
    Q_PROPERTY(QString tripadvisor READ tripadvisor CONSTANT);
    QString tripadvisor() const { return QString::fromUtf8("\uf262"); }
    Q_PROPERTY(QString odnoklassniki READ odnoklassniki CONSTANT);
    QString odnoklassniki() const { return QString::fromUtf8("\uf263"); }
    Q_PROPERTY(QString odnoklassniki_square READ odnoklassniki_square CONSTANT);
    QString odnoklassniki_square() const { return QString::fromUtf8("\uf264"); }
    Q_PROPERTY(QString get_pocket READ get_pocket CONSTANT);
    QString get_pocket() const { return QString::fromUtf8("\uf265"); }
    Q_PROPERTY(QString wikipedia_w READ wikipedia_w CONSTANT);
    QString wikipedia_w() const { return QString::fromUtf8("\uf266"); }
    Q_PROPERTY(QString safari READ safari CONSTANT);
    QString safari() const { return QString::fromUtf8("\uf267"); }
    Q_PROPERTY(QString chrome READ chrome CONSTANT);
    QString chrome() const { return QString::fromUtf8("\uf268"); }
    Q_PROPERTY(QString firefox READ firefox CONSTANT);
    QString firefox() const { return QString::fromUtf8("\uf269"); }
    Q_PROPERTY(QString opera READ opera CONSTANT);
    QString opera() const { return QString::fromUtf8("\uf26a"); }
    Q_PROPERTY(QString internet_explorer READ internet_explorer CONSTANT);
    QString internet_explorer() const { return QString::fromUtf8("\uf26b"); }
    Q_PROPERTY(QString contao READ contao CONSTANT);
    QString contao() const { return QString::fromUtf8("\uf26d"); }
    Q_PROPERTY(QString px500 READ px500 CONSTANT);
    QString px500() const { return QString::fromUtf8("\uf26e"); }
    Q_PROPERTY(QString amazon READ amazon CONSTANT);
    QString amazon() const { return QString::fromUtf8("\uf270"); }
    Q_PROPERTY(QString houzz READ houzz CONSTANT);
    QString houzz() const { return QString::fromUtf8("\uf27c"); }
    Q_PROPERTY(QString vimeo_v READ vimeo_v CONSTANT);
    QString vimeo_v() const { return QString::fromUtf8("\uf27d"); }
    Q_PROPERTY(QString black_tie READ black_tie CONSTANT);
    QString black_tie() const { return QString::fromUtf8("\uf27e"); }
    Q_PROPERTY(QString fonticons READ fonticons CONSTANT);
    QString fonticons() const { return QString::fromUtf8("\uf280"); }
    Q_PROPERTY(QString reddit_alien READ reddit_alien CONSTANT);
    QString reddit_alien() const { return QString::fromUtf8("\uf281"); }
    Q_PROPERTY(QString edge READ edge CONSTANT);
    QString edge() const { return QString::fromUtf8("\uf282"); }
    Q_PROPERTY(QString codiepie READ codiepie CONSTANT);
    QString codiepie() const { return QString::fromUtf8("\uf284"); }
    Q_PROPERTY(QString modx READ modx CONSTANT);
    QString modx() const { return QString::fromUtf8("\uf285"); }
    Q_PROPERTY(QString fort_awesome READ fort_awesome CONSTANT);
    QString fort_awesome() const { return QString::fromUtf8("\uf286"); }
    Q_PROPERTY(QString usb READ usb CONSTANT);
    QString usb() const { return QString::fromUtf8("\uf287"); }
    Q_PROPERTY(QString product_hunt READ product_hunt CONSTANT);
    QString product_hunt() const { return QString::fromUtf8("\uf288"); }
    Q_PROPERTY(QString mixcloud READ mixcloud CONSTANT);
    QString mixcloud() const { return QString::fromUtf8("\uf289"); }
    Q_PROPERTY(QString scribd READ scribd CONSTANT);
    QString scribd() const { return QString::fromUtf8("\uf28a"); }
    Q_PROPERTY(QString bluetooth READ bluetooth CONSTANT);
    QString bluetooth() const { return QString::fromUtf8("\uf293"); }
    Q_PROPERTY(QString bluetooth_b READ bluetooth_b CONSTANT);
    QString bluetooth_b() const { return QString::fromUtf8("\uf294"); }
    Q_PROPERTY(QString gitlab READ gitlab CONSTANT);
    QString gitlab() const { return QString::fromUtf8("\uf296"); }
    Q_PROPERTY(QString wpbeginner READ wpbeginner CONSTANT);
    QString wpbeginner() const { return QString::fromUtf8("\uf297"); }
    Q_PROPERTY(QString wpforms READ wpforms CONSTANT);
    QString wpforms() const { return QString::fromUtf8("\uf298"); }
    Q_PROPERTY(QString envira READ envira CONSTANT);
    QString envira() const { return QString::fromUtf8("\uf299"); }
    Q_PROPERTY(QString glide READ glide CONSTANT);
    QString glide() const { return QString::fromUtf8("\uf2a5"); }
    Q_PROPERTY(QString glide_g READ glide_g CONSTANT);
    QString glide_g() const { return QString::fromUtf8("\uf2a6"); }
    Q_PROPERTY(QString viadeo READ viadeo CONSTANT);
    QString viadeo() const { return QString::fromUtf8("\uf2a9"); }
    Q_PROPERTY(QString viadeo_square READ viadeo_square CONSTANT);
    QString viadeo_square() const { return QString::fromUtf8("\uf2aa"); }
    Q_PROPERTY(QString snapchat READ snapchat CONSTANT);
    QString snapchat() const { return QString::fromUtf8("\uf2ab"); }
    Q_PROPERTY(QString snapchat_ghost READ snapchat_ghost CONSTANT);
    QString snapchat_ghost() const { return QString::fromUtf8("\uf2ac"); }
    Q_PROPERTY(QString snapchat_square READ snapchat_square CONSTANT);
    QString snapchat_square() const { return QString::fromUtf8("\uf2ad"); }
    Q_PROPERTY(QString pied_piper READ pied_piper CONSTANT);
    QString pied_piper() const { return QString::fromUtf8("\uf2ae"); }
    Q_PROPERTY(QString first_order READ first_order CONSTANT);
    QString first_order() const { return QString::fromUtf8("\uf2b0"); }
    Q_PROPERTY(QString yoast READ yoast CONSTANT);
    QString yoast() const { return QString::fromUtf8("\uf2b1"); }
    Q_PROPERTY(QString themeisle READ themeisle CONSTANT);
    QString themeisle() const { return QString::fromUtf8("\uf2b2"); }
    Q_PROPERTY(QString google_plus READ google_plus CONSTANT);
    QString google_plus() const { return QString::fromUtf8("\uf2b3"); }
    Q_PROPERTY(QString font_awesome READ font_awesome CONSTANT);
    QString font_awesome() const { return QString::fromUtf8("\uf2b4"); }
    Q_PROPERTY(QString linode READ linode CONSTANT);
    QString linode() const { return QString::fromUtf8("\uf2b8"); }
    Q_PROPERTY(QString quora READ quora CONSTANT);
    QString quora() const { return QString::fromUtf8("\uf2c4"); }
    Q_PROPERTY(QString free_code_camp READ free_code_camp CONSTANT);
    QString free_code_camp() const { return QString::fromUtf8("\uf2c5"); }
    Q_PROPERTY(QString telegram READ telegram CONSTANT);
    QString telegram() const { return QString::fromUtf8("\uf2c6"); }
    Q_PROPERTY(QString bandcamp READ bandcamp CONSTANT);
    QString bandcamp() const { return QString::fromUtf8("\uf2d5"); }
    Q_PROPERTY(QString grav READ grav CONSTANT);
    QString grav() const { return QString::fromUtf8("\uf2d6"); }
    Q_PROPERTY(QString etsy READ etsy CONSTANT);
    QString etsy() const { return QString::fromUtf8("\uf2d7"); }
    Q_PROPERTY(QString imdb READ imdb CONSTANT);
    QString imdb() const { return QString::fromUtf8("\uf2d8"); }
    Q_PROPERTY(QString ravelry READ ravelry CONSTANT);
    QString ravelry() const { return QString::fromUtf8("\uf2d9"); }
    Q_PROPERTY(QString sellcast READ sellcast CONSTANT);
    QString sellcast() const { return QString::fromUtf8("\uf2da"); }
    Q_PROPERTY(QString superpowers READ superpowers CONSTANT);
    QString superpowers() const { return QString::fromUtf8("\uf2dd"); }
    Q_PROPERTY(QString wpexplorer READ wpexplorer CONSTANT);
    QString wpexplorer() const { return QString::fromUtf8("\uf2de"); }
    Q_PROPERTY(QString meetup READ meetup CONSTANT);
    QString meetup() const { return QString::fromUtf8("\uf2e0"); }
    Q_PROPERTY(QString font_awesome_alt READ font_awesome_alt CONSTANT);
    QString font_awesome_alt() const { return QString::fromUtf8("\uf35c"); }
    Q_PROPERTY(QString accessible_icon READ accessible_icon CONSTANT);
    QString accessible_icon() const { return QString::fromUtf8("\uf368"); }
    Q_PROPERTY(QString accusoft READ accusoft CONSTANT);
    QString accusoft() const { return QString::fromUtf8("\uf369"); }
    Q_PROPERTY(QString adversal READ adversal CONSTANT);
    QString adversal() const { return QString::fromUtf8("\uf36a"); }
    Q_PROPERTY(QString affiliatetheme READ affiliatetheme CONSTANT);
    QString affiliatetheme() const { return QString::fromUtf8("\uf36b"); }
    Q_PROPERTY(QString algolia READ algolia CONSTANT);
    QString algolia() const { return QString::fromUtf8("\uf36c"); }
    Q_PROPERTY(QString amilia READ amilia CONSTANT);
    QString amilia() const { return QString::fromUtf8("\uf36d"); }
    Q_PROPERTY(QString angrycreative READ angrycreative CONSTANT);
    QString angrycreative() const { return QString::fromUtf8("\uf36e"); }
    Q_PROPERTY(QString app_store READ app_store CONSTANT);
    QString app_store() const { return QString::fromUtf8("\uf36f"); }
    Q_PROPERTY(QString app_store_ios READ app_store_ios CONSTANT);
    QString app_store_ios() const { return QString::fromUtf8("\uf370"); }
    Q_PROPERTY(QString apper READ apper CONSTANT);
    QString apper() const { return QString::fromUtf8("\uf371"); }
    Q_PROPERTY(QString asymmetrik READ asymmetrik CONSTANT);
    QString asymmetrik() const { return QString::fromUtf8("\uf372"); }
    Q_PROPERTY(QString audible READ audible CONSTANT);
    QString audible() const { return QString::fromUtf8("\uf373"); }
    Q_PROPERTY(QString avianex READ avianex CONSTANT);
    QString avianex() const { return QString::fromUtf8("\uf374"); }
    Q_PROPERTY(QString aws READ aws CONSTANT);
    QString aws() const { return QString::fromUtf8("\uf375"); }
    Q_PROPERTY(QString bimobject READ bimobject CONSTANT);
    QString bimobject() const { return QString::fromUtf8("\uf378"); }
    Q_PROPERTY(QString bitcoin READ bitcoin CONSTANT);
    QString bitcoin() const { return QString::fromUtf8("\uf379"); }
    Q_PROPERTY(QString bity READ bity CONSTANT);
    QString bity() const { return QString::fromUtf8("\uf37a"); }
    Q_PROPERTY(QString blackberry READ blackberry CONSTANT);
    QString blackberry() const { return QString::fromUtf8("\uf37b"); }
    Q_PROPERTY(QString blogger READ blogger CONSTANT);
    QString blogger() const { return QString::fromUtf8("\uf37c"); }
    Q_PROPERTY(QString blogger_b READ blogger_b CONSTANT);
    QString blogger_b() const { return QString::fromUtf8("\uf37d"); }
    Q_PROPERTY(QString buromobelexperte READ buromobelexperte CONSTANT);
    QString buromobelexperte() const { return QString::fromUtf8("\uf37f"); }
    Q_PROPERTY(QString centercode READ centercode CONSTANT);
    QString centercode() const { return QString::fromUtf8("\uf380"); }
    Q_PROPERTY(QString cloudscale READ cloudscale CONSTANT);
    QString cloudscale() const { return QString::fromUtf8("\uf383"); }
    Q_PROPERTY(QString cloudsmith READ cloudsmith CONSTANT);
    QString cloudsmith() const { return QString::fromUtf8("\uf384"); }
    Q_PROPERTY(QString cloudversify READ cloudversify CONSTANT);
    QString cloudversify() const { return QString::fromUtf8("\uf385"); }
    Q_PROPERTY(QString cpanel READ cpanel CONSTANT);
    QString cpanel() const { return QString::fromUtf8("\uf388"); }
    Q_PROPERTY(QString css3_alt READ css3_alt CONSTANT);
    QString css3_alt() const { return QString::fromUtf8("\uf38b"); }
    Q_PROPERTY(QString cuttlefish READ cuttlefish CONSTANT);
    QString cuttlefish() const { return QString::fromUtf8("\uf38c"); }
    Q_PROPERTY(QString d_and_d READ d_and_d CONSTANT);
    QString d_and_d() const { return QString::fromUtf8("\uf38d"); }
    Q_PROPERTY(QString deploydog READ deploydog CONSTANT);
    QString deploydog() const { return QString::fromUtf8("\uf38e"); }
    Q_PROPERTY(QString deskpro READ deskpro CONSTANT);
    QString deskpro() const { return QString::fromUtf8("\uf38f"); }
    Q_PROPERTY(QString digital_ocean READ digital_ocean CONSTANT);
    QString digital_ocean() const { return QString::fromUtf8("\uf391"); }
    Q_PROPERTY(QString discord READ discord CONSTANT);
    QString discord() const { return QString::fromUtf8("\uf392"); }
    Q_PROPERTY(QString discourse READ discourse CONSTANT);
    QString discourse() const { return QString::fromUtf8("\uf393"); }
    Q_PROPERTY(QString dochub READ dochub CONSTANT);
    QString dochub() const { return QString::fromUtf8("\uf394"); }
    Q_PROPERTY(QString docker READ docker CONSTANT);
    QString docker() const { return QString::fromUtf8("\uf395"); }
    Q_PROPERTY(QString draft2digital READ draft2digital CONSTANT);
    QString draft2digital() const { return QString::fromUtf8("\uf396"); }
    Q_PROPERTY(QString dribbble_square READ dribbble_square CONSTANT);
    QString dribbble_square() const { return QString::fromUtf8("\uf397"); }
    Q_PROPERTY(QString dyalog READ dyalog CONSTANT);
    QString dyalog() const { return QString::fromUtf8("\uf399"); }
    Q_PROPERTY(QString earlybirds READ earlybirds CONSTANT);
    QString earlybirds() const { return QString::fromUtf8("\uf39a"); }
    Q_PROPERTY(QString erlang READ erlang CONSTANT);
    QString erlang() const { return QString::fromUtf8("\uf39d"); }
    Q_PROPERTY(QString facebook_f READ facebook_f CONSTANT);
    QString facebook_f() const { return QString::fromUtf8("\uf39e"); }
    Q_PROPERTY(QString facebook_messenger READ facebook_messenger CONSTANT);
    QString facebook_messenger() const { return QString::fromUtf8("\uf39f"); }
    Q_PROPERTY(QString firstdraft READ firstdraft CONSTANT);
    QString firstdraft() const { return QString::fromUtf8("\uf3a1"); }
    Q_PROPERTY(QString fonticons_fi READ fonticons_fi CONSTANT);
    QString fonticons_fi() const { return QString::fromUtf8("\uf3a2"); }
    Q_PROPERTY(QString fort_awesome_alt READ fort_awesome_alt CONSTANT);
    QString fort_awesome_alt() const { return QString::fromUtf8("\uf3a3"); }
    Q_PROPERTY(QString freebsd READ freebsd CONSTANT);
    QString freebsd() const { return QString::fromUtf8("\uf3a4"); }
    Q_PROPERTY(QString gitkraken READ gitkraken CONSTANT);
    QString gitkraken() const { return QString::fromUtf8("\uf3a6"); }
    Q_PROPERTY(QString gofore READ gofore CONSTANT);
    QString gofore() const { return QString::fromUtf8("\uf3a7"); }
    Q_PROPERTY(QString goodreads READ goodreads CONSTANT);
    QString goodreads() const { return QString::fromUtf8("\uf3a8"); }
    Q_PROPERTY(QString goodreads_g READ goodreads_g CONSTANT);
    QString goodreads_g() const { return QString::fromUtf8("\uf3a9"); }
    Q_PROPERTY(QString google_drive READ google_drive CONSTANT);
    QString google_drive() const { return QString::fromUtf8("\uf3aa"); }
    Q_PROPERTY(QString google_play READ google_play CONSTANT);
    QString google_play() const { return QString::fromUtf8("\uf3ab"); }
    Q_PROPERTY(QString gripfire READ gripfire CONSTANT);
    QString gripfire() const { return QString::fromUtf8("\uf3ac"); }
    Q_PROPERTY(QString grunt READ grunt CONSTANT);
    QString grunt() const { return QString::fromUtf8("\uf3ad"); }
    Q_PROPERTY(QString gulp READ gulp CONSTANT);
    QString gulp() const { return QString::fromUtf8("\uf3ae"); }
    Q_PROPERTY(QString hacker_news_square READ hacker_news_square CONSTANT);
    QString hacker_news_square() const { return QString::fromUtf8("\uf3af"); }
    Q_PROPERTY(QString hire_a_helper READ hire_a_helper CONSTANT);
    QString hire_a_helper() const { return QString::fromUtf8("\uf3b0"); }
    Q_PROPERTY(QString hotjar READ hotjar CONSTANT);
    QString hotjar() const { return QString::fromUtf8("\uf3b1"); }
    Q_PROPERTY(QString hubspot READ hubspot CONSTANT);
    QString hubspot() const { return QString::fromUtf8("\uf3b2"); }
    Q_PROPERTY(QString itunes READ itunes CONSTANT);
    QString itunes() const { return QString::fromUtf8("\uf3b4"); }
    Q_PROPERTY(QString itunes_note READ itunes_note CONSTANT);
    QString itunes_note() const { return QString::fromUtf8("\uf3b5"); }
    Q_PROPERTY(QString jenkins READ jenkins CONSTANT);
    QString jenkins() const { return QString::fromUtf8("\uf3b6"); }
    Q_PROPERTY(QString joget READ joget CONSTANT);
    QString joget() const { return QString::fromUtf8("\uf3b7"); }
    Q_PROPERTY(QString js READ js CONSTANT);
    QString js() const { return QString::fromUtf8("\uf3b8"); }
    Q_PROPERTY(QString js_square READ js_square CONSTANT);
    QString js_square() const { return QString::fromUtf8("\uf3b9"); }
    Q_PROPERTY(QString keycdn READ keycdn CONSTANT);
    QString keycdn() const { return QString::fromUtf8("\uf3ba"); }
    Q_PROPERTY(QString kickstarter READ kickstarter CONSTANT);
    QString kickstarter() const { return QString::fromUtf8("\uf3bb"); }
    Q_PROPERTY(QString kickstarter_k READ kickstarter_k CONSTANT);
    QString kickstarter_k() const { return QString::fromUtf8("\uf3bc"); }
    Q_PROPERTY(QString laravel READ laravel CONSTANT);
    QString laravel() const { return QString::fromUtf8("\uf3bd"); }
    Q_PROPERTY(QString line READ line CONSTANT);
    QString line() const { return QString::fromUtf8("\uf3c0"); }
    Q_PROPERTY(QString lyft READ lyft CONSTANT);
    QString lyft() const { return QString::fromUtf8("\uf3c3"); }
    Q_PROPERTY(QString magento READ magento CONSTANT);
    QString magento() const { return QString::fromUtf8("\uf3c4"); }
    Q_PROPERTY(QString medapps READ medapps CONSTANT);
    QString medapps() const { return QString::fromUtf8("\uf3c6"); }
    Q_PROPERTY(QString medium_m READ medium_m CONSTANT);
    QString medium_m() const { return QString::fromUtf8("\uf3c7"); }
    Q_PROPERTY(QString medrt READ medrt CONSTANT);
    QString medrt() const { return QString::fromUtf8("\uf3c8"); }
    Q_PROPERTY(QString microsoft READ microsoft CONSTANT);
    QString microsoft() const { return QString::fromUtf8("\uf3ca"); }
    Q_PROPERTY(QString mix READ mix CONSTANT);
    QString mix() const { return QString::fromUtf8("\uf3cb"); }
    Q_PROPERTY(QString mizuni READ mizuni CONSTANT);
    QString mizuni() const { return QString::fromUtf8("\uf3cc"); }
    Q_PROPERTY(QString monero READ monero CONSTANT);
    QString monero() const { return QString::fromUtf8("\uf3d0"); }
    Q_PROPERTY(QString napster READ napster CONSTANT);
    QString napster() const { return QString::fromUtf8("\uf3d2"); }
    Q_PROPERTY(QString node_js READ node_js CONSTANT);
    QString node_js() const { return QString::fromUtf8("\uf3d3"); }
    Q_PROPERTY(QString npm READ npm CONSTANT);
    QString npm() const { return QString::fromUtf8("\uf3d4"); }
    Q_PROPERTY(QString ns8 READ ns8 CONSTANT);
    QString ns8() const { return QString::fromUtf8("\uf3d5"); }
    Q_PROPERTY(QString nutritionix READ nutritionix CONSTANT);
    QString nutritionix() const { return QString::fromUtf8("\uf3d6"); }
    Q_PROPERTY(QString page4 READ page4 CONSTANT);
    QString page4() const { return QString::fromUtf8("\uf3d7"); }
    Q_PROPERTY(QString palfed READ palfed CONSTANT);
    QString palfed() const { return QString::fromUtf8("\uf3d8"); }
    Q_PROPERTY(QString patreon READ patreon CONSTANT);
    QString patreon() const { return QString::fromUtf8("\uf3d9"); }
    Q_PROPERTY(QString periscope READ periscope CONSTANT);
    QString periscope() const { return QString::fromUtf8("\uf3da"); }
    Q_PROPERTY(QString phabricator READ phabricator CONSTANT);
    QString phabricator() const { return QString::fromUtf8("\uf3db"); }
    Q_PROPERTY(QString phoenix_framework READ phoenix_framework CONSTANT);
    QString phoenix_framework() const { return QString::fromUtf8("\uf3dc"); }
    Q_PROPERTY(QString playstation READ playstation CONSTANT);
    QString playstation() const { return QString::fromUtf8("\uf3df"); }
    Q_PROPERTY(QString pushed READ pushed CONSTANT);
    QString pushed() const { return QString::fromUtf8("\uf3e1"); }
    Q_PROPERTY(QString python READ python CONSTANT);
    QString python() const { return QString::fromUtf8("\uf3e2"); }
    Q_PROPERTY(QString red_river READ red_river CONSTANT);
    QString red_river() const { return QString::fromUtf8("\uf3e3"); }
    Q_PROPERTY(QString wpressr READ wpressr CONSTANT);
    QString wpressr() const { return QString::fromUtf8("\uf3e4"); }
    Q_PROPERTY(QString replyd READ replyd CONSTANT);
    QString replyd() const { return QString::fromUtf8("\uf3e6"); }
    Q_PROPERTY(QString resolving READ resolving CONSTANT);
    QString resolving() const { return QString::fromUtf8("\uf3e7"); }
    Q_PROPERTY(QString rocketchat READ rocketchat CONSTANT);
    QString rocketchat() const { return QString::fromUtf8("\uf3e8"); }
    Q_PROPERTY(QString rockrms READ rockrms CONSTANT);
    QString rockrms() const { return QString::fromUtf8("\uf3e9"); }
    Q_PROPERTY(QString schlix READ schlix CONSTANT);
    QString schlix() const { return QString::fromUtf8("\uf3ea"); }
    Q_PROPERTY(QString searchengin READ searchengin CONSTANT);
    QString searchengin() const { return QString::fromUtf8("\uf3eb"); }
    Q_PROPERTY(QString servicestack READ servicestack CONSTANT);
    QString servicestack() const { return QString::fromUtf8("\uf3ec"); }
    Q_PROPERTY(QString sistrix READ sistrix CONSTANT);
    QString sistrix() const { return QString::fromUtf8("\uf3ee"); }
    Q_PROPERTY(QString slack_hash READ slack_hash CONSTANT);
    QString slack_hash() const { return QString::fromUtf8("\uf3ef"); }
    Q_PROPERTY(QString speakap READ speakap CONSTANT);
    QString speakap() const { return QString::fromUtf8("\uf3f3"); }
    Q_PROPERTY(QString staylinked READ staylinked CONSTANT);
    QString staylinked() const { return QString::fromUtf8("\uf3f5"); }
    Q_PROPERTY(QString steam_symbol READ steam_symbol CONSTANT);
    QString steam_symbol() const { return QString::fromUtf8("\uf3f6"); }
    Q_PROPERTY(QString sticker_mule READ sticker_mule CONSTANT);
    QString sticker_mule() const { return QString::fromUtf8("\uf3f7"); }
    Q_PROPERTY(QString studiovinari READ studiovinari CONSTANT);
    QString studiovinari() const { return QString::fromUtf8("\uf3f8"); }
    Q_PROPERTY(QString supple READ supple CONSTANT);
    QString supple() const { return QString::fromUtf8("\uf3f9"); }
    Q_PROPERTY(QString telegram_plane READ telegram_plane CONSTANT);
    QString telegram_plane() const { return QString::fromUtf8("\uf3fe"); }
    Q_PROPERTY(QString uber READ uber CONSTANT);
    QString uber() const { return QString::fromUtf8("\uf402"); }
    Q_PROPERTY(QString uikit READ uikit CONSTANT);
    QString uikit() const { return QString::fromUtf8("\uf403"); }
    Q_PROPERTY(QString uniregistry READ uniregistry CONSTANT);
    QString uniregistry() const { return QString::fromUtf8("\uf404"); }
    Q_PROPERTY(QString untappd READ untappd CONSTANT);
    QString untappd() const { return QString::fromUtf8("\uf405"); }
    Q_PROPERTY(QString ussunnah READ ussunnah CONSTANT);
    QString ussunnah() const { return QString::fromUtf8("\uf407"); }
    Q_PROPERTY(QString vaadin READ vaadin CONSTANT);
    QString vaadin() const { return QString::fromUtf8("\uf408"); }
    Q_PROPERTY(QString viber READ viber CONSTANT);
    QString viber() const { return QString::fromUtf8("\uf409"); }
    Q_PROPERTY(QString vimeo READ vimeo CONSTANT);
    QString vimeo() const { return QString::fromUtf8("\uf40a"); }
    Q_PROPERTY(QString vnv READ vnv CONSTANT);
    QString vnv() const { return QString::fromUtf8("\uf40b"); }
    Q_PROPERTY(QString whatsapp_square READ whatsapp_square CONSTANT);
    QString whatsapp_square() const { return QString::fromUtf8("\uf40c"); }
    Q_PROPERTY(QString whmcs READ whmcs CONSTANT);
    QString whmcs() const { return QString::fromUtf8("\uf40d"); }
    Q_PROPERTY(QString wordpress_simple READ wordpress_simple CONSTANT);
    QString wordpress_simple() const { return QString::fromUtf8("\uf411"); }
    Q_PROPERTY(QString xbox READ xbox CONSTANT);
    QString xbox() const { return QString::fromUtf8("\uf412"); }
    Q_PROPERTY(QString yandex READ yandex CONSTANT);
    QString yandex() const { return QString::fromUtf8("\uf413"); }
    Q_PROPERTY(QString yandex_international READ yandex_international CONSTANT);
    QString yandex_international() const { return QString::fromUtf8("\uf414"); }
    Q_PROPERTY(QString apple_pay READ apple_pay CONSTANT);
    QString apple_pay() const { return QString::fromUtf8("\uf415"); }
    Q_PROPERTY(QString cc_apple_pay READ cc_apple_pay CONSTANT);
    QString cc_apple_pay() const { return QString::fromUtf8("\uf416"); }
    Q_PROPERTY(QString fly READ fly CONSTANT);
    QString fly() const { return QString::fromUtf8("\uf417"); }
    Q_PROPERTY(QString node READ node CONSTANT);
    QString node() const { return QString::fromUtf8("\uf419"); }
    Q_PROPERTY(QString osi READ osi CONSTANT);
    QString osi() const { return QString::fromUtf8("\uf41a"); }
    Q_PROPERTY(QString react READ react CONSTANT);
    QString react() const { return QString::fromUtf8("\uf41b"); }
    Q_PROPERTY(QString autoprefixer READ autoprefixer CONSTANT);
    QString autoprefixer() const { return QString::fromUtf8("\uf41c"); }
    Q_PROPERTY(QString less READ less CONSTANT);
    QString less() const { return QString::fromUtf8("\uf41d"); }
    Q_PROPERTY(QString sass READ sass CONSTANT);
    QString sass() const { return QString::fromUtf8("\uf41e"); }
    Q_PROPERTY(QString vuejs READ vuejs CONSTANT);
    QString vuejs() const { return QString::fromUtf8("\uf41f"); }
    Q_PROPERTY(QString angular READ angular CONSTANT);
    QString angular() const { return QString::fromUtf8("\uf420"); }
    Q_PROPERTY(QString aviato READ aviato CONSTANT);
    QString aviato() const { return QString::fromUtf8("\uf421"); }
    Q_PROPERTY(QString ember READ ember CONSTANT);
    QString ember() const { return QString::fromUtf8("\uf423"); }
    Q_PROPERTY(QString font_awesome_flag READ font_awesome_flag CONSTANT);
    QString font_awesome_flag() const { return QString::fromUtf8("\uf425"); }
    Q_PROPERTY(QString gitter READ gitter CONSTANT);
    QString gitter() const { return QString::fromUtf8("\uf426"); }
    Q_PROPERTY(QString hooli READ hooli CONSTANT);
    QString hooli() const { return QString::fromUtf8("\uf427"); }
    Q_PROPERTY(QString strava READ strava CONSTANT);
    QString strava() const { return QString::fromUtf8("\uf428"); }
    Q_PROPERTY(QString stripe READ stripe CONSTANT);
    QString stripe() const { return QString::fromUtf8("\uf429"); }
    Q_PROPERTY(QString stripe_s READ stripe_s CONSTANT);
    QString stripe_s() const { return QString::fromUtf8("\uf42a"); }
    Q_PROPERTY(QString typo3 READ typo3 CONSTANT);
    QString typo3() const { return QString::fromUtf8("\uf42b"); }
    Q_PROPERTY(QString amazon_pay READ amazon_pay CONSTANT);
    QString amazon_pay() const { return QString::fromUtf8("\uf42c"); }
    Q_PROPERTY(QString cc_amazon_pay READ cc_amazon_pay CONSTANT);
    QString cc_amazon_pay() const { return QString::fromUtf8("\uf42d"); }
    Q_PROPERTY(QString ethereum READ ethereum CONSTANT);
    QString ethereum() const { return QString::fromUtf8("\uf42e"); }
    Q_PROPERTY(QString korvue READ korvue CONSTANT);
    QString korvue() const { return QString::fromUtf8("\uf42f"); }
    Q_PROPERTY(QString elementor READ elementor CONSTANT);
    QString elementor() const { return QString::fromUtf8("\uf430"); }
    Q_PROPERTY(QString youtube_square READ youtube_square CONSTANT);
    QString youtube_square() const { return QString::fromUtf8("\uf431"); }
    Q_PROPERTY(QString flipboard READ flipboard CONSTANT);
    QString flipboard() const { return QString::fromUtf8("\uf44d"); }
    Q_PROPERTY(QString hips READ hips CONSTANT);
    QString hips() const { return QString::fromUtf8("\uf452"); }
    Q_PROPERTY(QString php READ php CONSTANT);
    QString php() const { return QString::fromUtf8("\uf457"); }
    Q_PROPERTY(QString quinscape READ quinscape CONSTANT);
    QString quinscape() const { return QString::fromUtf8("\uf459"); }
    Q_PROPERTY(QString readme READ readme CONSTANT);
    QString readme() const { return QString::fromUtf8("\uf4d5"); }
    Q_PROPERTY(QString java READ java CONSTANT);
    QString java() const { return QString::fromUtf8("\uf4e4"); }
    Q_PROPERTY(QString pied_piper_hat READ pied_piper_hat CONSTANT);
    QString pied_piper_hat() const { return QString::fromUtf8("\uf4e5"); }
    Q_PROPERTY(QString creative_commons_by READ creative_commons_by CONSTANT);
    QString creative_commons_by() const { return QString::fromUtf8("\uf4e7"); }
    Q_PROPERTY(QString creative_commons_nc READ creative_commons_nc CONSTANT);
    QString creative_commons_nc() const { return QString::fromUtf8("\uf4e8"); }
    Q_PROPERTY(QString creative_commons_nc_eu READ creative_commons_nc_eu CONSTANT);
    QString creative_commons_nc_eu() const { return QString::fromUtf8("\uf4e9"); }
    Q_PROPERTY(QString creative_commons_nc_jp READ creative_commons_nc_jp CONSTANT);
    QString creative_commons_nc_jp() const { return QString::fromUtf8("\uf4ea"); }
    Q_PROPERTY(QString creative_commons_nd READ creative_commons_nd CONSTANT);
    QString creative_commons_nd() const { return QString::fromUtf8("\uf4eb"); }
    Q_PROPERTY(QString creative_commons_pd READ creative_commons_pd CONSTANT);
    QString creative_commons_pd() const { return QString::fromUtf8("\uf4ec"); }
    Q_PROPERTY(QString creative_commons_pd_alt READ creative_commons_pd_alt CONSTANT);
    QString creative_commons_pd_alt() const { return QString::fromUtf8("\uf4ed"); }
    Q_PROPERTY(QString creative_commons_remix READ creative_commons_remix CONSTANT);
    QString creative_commons_remix() const { return QString::fromUtf8("\uf4ee"); }
    Q_PROPERTY(QString creative_commons_sa READ creative_commons_sa CONSTANT);
    QString creative_commons_sa() const { return QString::fromUtf8("\uf4ef"); }
    Q_PROPERTY(QString creative_commons_sampling READ creative_commons_sampling CONSTANT);
    QString creative_commons_sampling() const { return QString::fromUtf8("\uf4f0"); }
    Q_PROPERTY(QString creative_commons_sampling_plus READ creative_commons_sampling_plus CONSTANT);
    QString creative_commons_sampling_plus() const { return QString::fromUtf8("\uf4f1"); }
    Q_PROPERTY(QString creative_commons_share READ creative_commons_share CONSTANT);
    QString creative_commons_share() const { return QString::fromUtf8("\uf4f2"); }
    Q_PROPERTY(QString creative_commons_zero READ creative_commons_zero CONSTANT);
    QString creative_commons_zero() const { return QString::fromUtf8("\uf4f3"); }
    Q_PROPERTY(QString ebay READ ebay CONSTANT);
    QString ebay() const { return QString::fromUtf8("\uf4f4"); }
    Q_PROPERTY(QString keybase READ keybase CONSTANT);
    QString keybase() const { return QString::fromUtf8("\uf4f5"); }
    Q_PROPERTY(QString mastodon READ mastodon CONSTANT);
    QString mastodon() const { return QString::fromUtf8("\uf4f6"); }
    Q_PROPERTY(QString r_project READ r_project CONSTANT);
    QString r_project() const { return QString::fromUtf8("\uf4f7"); }
    Q_PROPERTY(QString researchgate READ researchgate CONSTANT);
    QString researchgate() const { return QString::fromUtf8("\uf4f8"); }
    Q_PROPERTY(QString teamspeak READ teamspeak CONSTANT);
    QString teamspeak() const { return QString::fromUtf8("\uf4f9"); }
    Q_PROPERTY(QString first_order_alt READ first_order_alt CONSTANT);
    QString first_order_alt() const { return QString::fromUtf8("\uf50a"); }
    Q_PROPERTY(QString fulcrum READ fulcrum CONSTANT);
    QString fulcrum() const { return QString::fromUtf8("\uf50b"); }
    Q_PROPERTY(QString galactic_republic READ galactic_republic CONSTANT);
    QString galactic_republic() const { return QString::fromUtf8("\uf50c"); }
    Q_PROPERTY(QString galactic_senate READ galactic_senate CONSTANT);
    QString galactic_senate() const { return QString::fromUtf8("\uf50d"); }
    Q_PROPERTY(QString jedi_order READ jedi_order CONSTANT);
    QString jedi_order() const { return QString::fromUtf8("\uf50e"); }
    Q_PROPERTY(QString mandalorian READ mandalorian CONSTANT);
    QString mandalorian() const { return QString::fromUtf8("\uf50f"); }
    Q_PROPERTY(QString old_republic READ old_republic CONSTANT);
    QString old_republic() const { return QString::fromUtf8("\uf510"); }
    Q_PROPERTY(QString phoenix_squadron READ phoenix_squadron CONSTANT);
    QString phoenix_squadron() const { return QString::fromUtf8("\uf511"); }
    Q_PROPERTY(QString sith READ sith CONSTANT);
    QString sith() const { return QString::fromUtf8("\uf512"); }
    Q_PROPERTY(QString trade_federation READ trade_federation CONSTANT);
    QString trade_federation() const { return QString::fromUtf8("\uf513"); }
    Q_PROPERTY(QString wolf_pack_battalion READ wolf_pack_battalion CONSTANT);
    QString wolf_pack_battalion() const { return QString::fromUtf8("\uf514"); }
    Q_PROPERTY(QString hornbill READ hornbill CONSTANT);
    QString hornbill() const { return QString::fromUtf8("\uf592"); }
    Q_PROPERTY(QString mailchimp READ mailchimp CONSTANT);
    QString mailchimp() const { return QString::fromUtf8("\uf59e"); }
    Q_PROPERTY(QString megaport READ megaport CONSTANT);
    QString megaport() const { return QString::fromUtf8("\uf5a3"); }
    Q_PROPERTY(QString nimblr READ nimblr CONSTANT);
    QString nimblr() const { return QString::fromUtf8("\uf5a8"); }
    Q_PROPERTY(QString rev READ rev CONSTANT);
    QString rev() const { return QString::fromUtf8("\uf5b2"); }
    Q_PROPERTY(QString shopware READ shopware CONSTANT);
    QString shopware() const { return QString::fromUtf8("\uf5b5"); }
    Q_PROPERTY(QString squarespace READ squarespace CONSTANT);
    QString squarespace() const { return QString::fromUtf8("\uf5be"); }
    Q_PROPERTY(QString themeco READ themeco CONSTANT);
    QString themeco() const { return QString::fromUtf8("\uf5c6"); }
    Q_PROPERTY(QString weebly READ weebly CONSTANT);
    QString weebly() const { return QString::fromUtf8("\uf5cc"); }
    Q_PROPERTY(QString wix READ wix CONSTANT);
    QString wix() const { return QString::fromUtf8("\uf5cf"); }
    Q_PROPERTY(QString ello READ ello CONSTANT);
    QString ello() const { return QString::fromUtf8("\uf5f1"); }
    Q_PROPERTY(QString hackerrank READ hackerrank CONSTANT);
    QString hackerrank() const { return QString::fromUtf8("\uf5f7"); }
    Q_PROPERTY(QString kaggle READ kaggle CONSTANT);
    QString kaggle() const { return QString::fromUtf8("\uf5fa"); }
    Q_PROPERTY(QString markdown READ markdown CONSTANT);
    QString markdown() const { return QString::fromUtf8("\uf60f"); }
    Q_PROPERTY(QString neos READ neos CONSTANT);
    QString neos() const { return QString::fromUtf8("\uf612"); }
    Q_PROPERTY(QString zhihu READ zhihu CONSTANT);
    QString zhihu() const { return QString::fromUtf8("\uf63f"); }
    Q_PROPERTY(QString alipay READ alipay CONSTANT);
    QString alipay() const { return QString::fromUtf8("\uf642"); }
    Q_PROPERTY(QString the_red_yeti READ the_red_yeti CONSTANT);
    QString the_red_yeti() const { return QString::fromUtf8("\uf69d"); }
    Q_PROPERTY(QString acquisitions_incorporated READ acquisitions_incorporated CONSTANT);
    QString acquisitions_incorporated() const { return QString::fromUtf8("\uf6af"); }
    Q_PROPERTY(QString critical_role READ critical_role CONSTANT);
    QString critical_role() const { return QString::fromUtf8("\uf6c9"); }
    Q_PROPERTY(QString d_and_d_beyond READ d_and_d_beyond CONSTANT);
    QString d_and_d_beyond() const { return QString::fromUtf8("\uf6ca"); }
    Q_PROPERTY(QString dev READ dev CONSTANT);
    QString dev() const { return QString::fromUtf8("\uf6cc"); }
    Q_PROPERTY(QString fantasy_flight_games READ fantasy_flight_games CONSTANT);
    QString fantasy_flight_games() const { return QString::fromUtf8("\uf6dc"); }
    Q_PROPERTY(QString penny_arcade READ penny_arcade CONSTANT);
    QString penny_arcade() const { return QString::fromUtf8("\uf704"); }
    Q_PROPERTY(QString wizards_of_the_coast READ wizards_of_the_coast CONSTANT);
    QString wizards_of_the_coast() const { return QString::fromUtf8("\uf730"); }
    Q_PROPERTY(QString think_peaks READ think_peaks CONSTANT);
    QString think_peaks() const { return QString::fromUtf8("\uf731"); }
    Q_PROPERTY(QString reacteurope READ reacteurope CONSTANT);
    QString reacteurope() const { return QString::fromUtf8("\uf75d"); }
    Q_PROPERTY(QString adobe READ adobe CONSTANT);
    QString adobe() const { return QString::fromUtf8("\uf778"); }
    Q_PROPERTY(QString artstation READ artstation CONSTANT);
    QString artstation() const { return QString::fromUtf8("\uf77a"); }
    Q_PROPERTY(QString atlassian READ atlassian CONSTANT);
    QString atlassian() const { return QString::fromUtf8("\uf77b"); }
    Q_PROPERTY(QString canadian_maple_leaf READ canadian_maple_leaf CONSTANT);
    QString canadian_maple_leaf() const { return QString::fromUtf8("\uf785"); }
    Q_PROPERTY(QString centos READ centos CONSTANT);
    QString centos() const { return QString::fromUtf8("\uf789"); }
    Q_PROPERTY(QString confluence READ confluence CONSTANT);
    QString confluence() const { return QString::fromUtf8("\uf78d"); }
    Q_PROPERTY(QString dhl READ dhl CONSTANT);
    QString dhl() const { return QString::fromUtf8("\uf790"); }
    Q_PROPERTY(QString diaspora READ diaspora CONSTANT);
    QString diaspora() const { return QString::fromUtf8("\uf791"); }
    Q_PROPERTY(QString fedex READ fedex CONSTANT);
    QString fedex() const { return QString::fromUtf8("\uf797"); }
    Q_PROPERTY(QString fedora READ fedora CONSTANT);
    QString fedora() const { return QString::fromUtf8("\uf798"); }
    Q_PROPERTY(QString figma READ figma CONSTANT);
    QString figma() const { return QString::fromUtf8("\uf799"); }
    Q_PROPERTY(QString intercom READ intercom CONSTANT);
    QString intercom() const { return QString::fromUtf8("\uf7af"); }
    Q_PROPERTY(QString invision READ invision CONSTANT);
    QString invision() const { return QString::fromUtf8("\uf7b0"); }
    Q_PROPERTY(QString jira READ jira CONSTANT);
    QString jira() const { return QString::fromUtf8("\uf7b1"); }
    Q_PROPERTY(QString mendeley READ mendeley CONSTANT);
    QString mendeley() const { return QString::fromUtf8("\uf7b3"); }
    Q_PROPERTY(QString raspberry_pi READ raspberry_pi CONSTANT);
    QString raspberry_pi() const { return QString::fromUtf8("\uf7bb"); }
    Q_PROPERTY(QString redhat READ redhat CONSTANT);
    QString redhat() const { return QString::fromUtf8("\uf7bc"); }
    Q_PROPERTY(QString sketch READ sketch CONSTANT);
    QString sketch() const { return QString::fromUtf8("\uf7c6"); }
    Q_PROPERTY(QString sourcetree READ sourcetree CONSTANT);
    QString sourcetree() const { return QString::fromUtf8("\uf7d3"); }
    Q_PROPERTY(QString suse READ suse CONSTANT);
    QString suse() const { return QString::fromUtf8("\uf7d6"); }
    Q_PROPERTY(QString ubuntu READ ubuntu CONSTANT);
    QString ubuntu() const { return QString::fromUtf8("\uf7df"); }
    Q_PROPERTY(QString ups READ ups CONSTANT);
    QString ups() const { return QString::fromUtf8("\uf7e0"); }
    Q_PROPERTY(QString usps READ usps CONSTANT);
    QString usps() const { return QString::fromUtf8("\uf7e1"); }
    Q_PROPERTY(QString yarn READ yarn CONSTANT);
    QString yarn() const { return QString::fromUtf8("\uf7e3"); }
    Q_PROPERTY(QString airbnb READ airbnb CONSTANT);
    QString airbnb() const { return QString::fromUtf8("\uf834"); }
    Q_PROPERTY(QString battle_net READ battle_net CONSTANT);
    QString battle_net() const { return QString::fromUtf8("\uf835"); }
    Q_PROPERTY(QString bootstrap READ bootstrap CONSTANT);
    QString bootstrap() const { return QString::fromUtf8("\uf836"); }
    Q_PROPERTY(QString buffer READ buffer CONSTANT);
    QString buffer() const { return QString::fromUtf8("\uf837"); }
    Q_PROPERTY(QString chromecast READ chromecast CONSTANT);
    QString chromecast() const { return QString::fromUtf8("\uf838"); }
    Q_PROPERTY(QString evernote READ evernote CONSTANT);
    QString evernote() const { return QString::fromUtf8("\uf839"); }
    Q_PROPERTY(QString itch_io READ itch_io CONSTANT);
    QString itch_io() const { return QString::fromUtf8("\uf83a"); }
    Q_PROPERTY(QString salesforce READ salesforce CONSTANT);
    QString salesforce() const { return QString::fromUtf8("\uf83b"); }
    Q_PROPERTY(QString speaker_deck READ speaker_deck CONSTANT);
    QString speaker_deck() const { return QString::fromUtf8("\uf83c"); }
    Q_PROPERTY(QString symfony READ symfony CONSTANT);
    QString symfony() const { return QString::fromUtf8("\uf83d"); }
    Q_PROPERTY(QString waze READ waze CONSTANT);
    QString waze() const { return QString::fromUtf8("\uf83f"); }
    Q_PROPERTY(QString yammer READ yammer CONSTANT);
    QString yammer() const { return QString::fromUtf8("\uf840"); }
    Q_PROPERTY(QString git_alt READ git_alt CONSTANT);
    QString git_alt() const { return QString::fromUtf8("\uf841"); }
    Q_PROPERTY(QString stackpath READ stackpath CONSTANT);
    QString stackpath() const { return QString::fromUtf8("\uf842"); }
    Q_PROPERTY(QString cotton_bureau READ cotton_bureau CONSTANT);
    QString cotton_bureau() const { return QString::fromUtf8("\uf89e"); }
    Q_PROPERTY(QString buy_n_large READ buy_n_large CONSTANT);
    QString buy_n_large() const { return QString::fromUtf8("\uf8a6"); }
    Q_PROPERTY(QString mdb READ mdb CONSTANT);
    QString mdb() const { return QString::fromUtf8("\uf8ca"); }
    Q_PROPERTY(QString orcid READ orcid CONSTANT);
    QString orcid() const { return QString::fromUtf8("\uf8d2"); }
    Q_PROPERTY(QString swift READ swift CONSTANT);
    QString swift() const { return QString::fromUtf8("\uf8e1"); }
    Q_PROPERTY(QString umbraco READ umbraco CONSTANT);
    QString umbraco() const { return QString::fromUtf8("\uf8e8"); }
    Q_PROPERTY(QString heart READ heart CONSTANT);
    QString heart() const { return QString::fromUtf8("\uf004"); }
    Q_PROPERTY(QString star READ star CONSTANT);
    QString star() const { return QString::fromUtf8("\uf005"); }
    Q_PROPERTY(QString user READ user CONSTANT);
    QString user() const { return QString::fromUtf8("\uf007"); }
    Q_PROPERTY(QString clock READ clock CONSTANT);
    QString clock() const { return QString::fromUtf8("\uf017"); }
    Q_PROPERTY(QString list_alt READ list_alt CONSTANT);
    QString list_alt() const { return QString::fromUtf8("\uf022"); }
    Q_PROPERTY(QString flag READ flag CONSTANT);
    QString flag() const { return QString::fromUtf8("\uf024"); }
    Q_PROPERTY(QString bookmark READ bookmark CONSTANT);
    QString bookmark() const { return QString::fromUtf8("\uf02e"); }
    Q_PROPERTY(QString image READ image CONSTANT);
    QString image() const { return QString::fromUtf8("\uf03e"); }
    Q_PROPERTY(QString edit READ edit CONSTANT);
    QString edit() const { return QString::fromUtf8("\uf044"); }
    Q_PROPERTY(QString times_circle READ times_circle CONSTANT);
    QString times_circle() const { return QString::fromUtf8("\uf057"); }
    Q_PROPERTY(QString check_circle READ check_circle CONSTANT);
    QString check_circle() const { return QString::fromUtf8("\uf058"); }
    Q_PROPERTY(QString question_circle READ question_circle CONSTANT);
    QString question_circle() const { return QString::fromUtf8("\uf059"); }
    Q_PROPERTY(QString eye READ eye CONSTANT);
    QString eye() const { return QString::fromUtf8("\uf06e"); }
    Q_PROPERTY(QString eye_slash READ eye_slash CONSTANT);
    QString eye_slash() const { return QString::fromUtf8("\uf070"); }
    Q_PROPERTY(QString calendar_alt READ calendar_alt CONSTANT);
    QString calendar_alt() const { return QString::fromUtf8("\uf073"); }
    Q_PROPERTY(QString comment READ comment CONSTANT);
    QString comment() const { return QString::fromUtf8("\uf075"); }
    Q_PROPERTY(QString folder READ folder CONSTANT);
    QString folder() const { return QString::fromUtf8("\uf07b"); }
    Q_PROPERTY(QString folder_open READ folder_open CONSTANT);
    QString folder_open() const { return QString::fromUtf8("\uf07c"); }
    Q_PROPERTY(QString chart_bar READ chart_bar CONSTANT);
    QString chart_bar() const { return QString::fromUtf8("\uf080"); }
    Q_PROPERTY(QString comments READ comments CONSTANT);
    QString comments() const { return QString::fromUtf8("\uf086"); }
    Q_PROPERTY(QString star_half READ star_half CONSTANT);
    QString star_half() const { return QString::fromUtf8("\uf089"); }
    Q_PROPERTY(QString lemon READ lemon CONSTANT);
    QString lemon() const { return QString::fromUtf8("\uf094"); }
    Q_PROPERTY(QString credit_card READ credit_card CONSTANT);
    QString credit_card() const { return QString::fromUtf8("\uf09d"); }
    Q_PROPERTY(QString hdd READ hdd CONSTANT);
    QString hdd() const { return QString::fromUtf8("\uf0a0"); }
    Q_PROPERTY(QString hand_point_right READ hand_point_right CONSTANT);
    QString hand_point_right() const { return QString::fromUtf8("\uf0a4"); }
    Q_PROPERTY(QString hand_point_left READ hand_point_left CONSTANT);
    QString hand_point_left() const { return QString::fromUtf8("\uf0a5"); }
    Q_PROPERTY(QString hand_point_up READ hand_point_up CONSTANT);
    QString hand_point_up() const { return QString::fromUtf8("\uf0a6"); }
    Q_PROPERTY(QString hand_point_down READ hand_point_down CONSTANT);
    QString hand_point_down() const { return QString::fromUtf8("\uf0a7"); }
    Q_PROPERTY(QString copy READ copy CONSTANT);
    QString copy() const { return QString::fromUtf8("\uf0c5"); }
    Q_PROPERTY(QString save READ save CONSTANT);
    QString save() const { return QString::fromUtf8("\uf0c7"); }
    Q_PROPERTY(QString square READ square CONSTANT);
    QString square() const { return QString::fromUtf8("\uf0c8"); }
    Q_PROPERTY(QString envelope READ envelope CONSTANT);
    QString envelope() const { return QString::fromUtf8("\uf0e0"); }
    Q_PROPERTY(QString lightbulb READ lightbulb CONSTANT);
    QString lightbulb() const { return QString::fromUtf8("\uf0eb"); }
    Q_PROPERTY(QString bell READ bell CONSTANT);
    QString bell() const { return QString::fromUtf8("\uf0f3"); }
    Q_PROPERTY(QString hospital READ hospital CONSTANT);
    QString hospital() const { return QString::fromUtf8("\uf0f8"); }
    Q_PROPERTY(QString plus_square READ plus_square CONSTANT);
    QString plus_square() const { return QString::fromUtf8("\uf0fe"); }
    Q_PROPERTY(QString circle READ circle CONSTANT);
    QString circle() const { return QString::fromUtf8("\uf111"); }
    Q_PROPERTY(QString smile READ smile CONSTANT);
    QString smile() const { return QString::fromUtf8("\uf118"); }
    Q_PROPERTY(QString frown READ frown CONSTANT);
    QString frown() const { return QString::fromUtf8("\uf119"); }
    Q_PROPERTY(QString meh READ meh CONSTANT);
    QString meh() const { return QString::fromUtf8("\uf11a"); }
    Q_PROPERTY(QString keyboard READ keyboard CONSTANT);
    QString keyboard() const { return QString::fromUtf8("\uf11c"); }
    Q_PROPERTY(QString calendar READ calendar CONSTANT);
    QString calendar() const { return QString::fromUtf8("\uf133"); }
    Q_PROPERTY(QString play_circle READ play_circle CONSTANT);
    QString play_circle() const { return QString::fromUtf8("\uf144"); }
    Q_PROPERTY(QString minus_square READ minus_square CONSTANT);
    QString minus_square() const { return QString::fromUtf8("\uf146"); }
    Q_PROPERTY(QString check_square READ check_square CONSTANT);
    QString check_square() const { return QString::fromUtf8("\uf14a"); }
    Q_PROPERTY(QString share_square READ share_square CONSTANT);
    QString share_square() const { return QString::fromUtf8("\uf14d"); }
    Q_PROPERTY(QString compass READ compass CONSTANT);
    QString compass() const { return QString::fromUtf8("\uf14e"); }
    Q_PROPERTY(QString caret_square_down READ caret_square_down CONSTANT);
    QString caret_square_down() const { return QString::fromUtf8("\uf150"); }
    Q_PROPERTY(QString caret_square_up READ caret_square_up CONSTANT);
    QString caret_square_up() const { return QString::fromUtf8("\uf151"); }
    Q_PROPERTY(QString caret_square_right READ caret_square_right CONSTANT);
    QString caret_square_right() const { return QString::fromUtf8("\uf152"); }
    Q_PROPERTY(QString file READ file CONSTANT);
    QString file() const { return QString::fromUtf8("\uf15b"); }
    Q_PROPERTY(QString file_alt READ file_alt CONSTANT);
    QString file_alt() const { return QString::fromUtf8("\uf15c"); }
    Q_PROPERTY(QString thumbs_up READ thumbs_up CONSTANT);
    QString thumbs_up() const { return QString::fromUtf8("\uf164"); }
    Q_PROPERTY(QString thumbs_down READ thumbs_down CONSTANT);
    QString thumbs_down() const { return QString::fromUtf8("\uf165"); }
    Q_PROPERTY(QString sun READ sun CONSTANT);
    QString sun() const { return QString::fromUtf8("\uf185"); }
    Q_PROPERTY(QString moon READ moon CONSTANT);
    QString moon() const { return QString::fromUtf8("\uf186"); }
    Q_PROPERTY(QString caret_square_left READ caret_square_left CONSTANT);
    QString caret_square_left() const { return QString::fromUtf8("\uf191"); }
    Q_PROPERTY(QString dot_circle READ dot_circle CONSTANT);
    QString dot_circle() const { return QString::fromUtf8("\uf192"); }
    Q_PROPERTY(QString building READ building CONSTANT);
    QString building() const { return QString::fromUtf8("\uf1ad"); }
    Q_PROPERTY(QString file_pdf READ file_pdf CONSTANT);
    QString file_pdf() const { return QString::fromUtf8("\uf1c1"); }
    Q_PROPERTY(QString file_word READ file_word CONSTANT);
    QString file_word() const { return QString::fromUtf8("\uf1c2"); }
    Q_PROPERTY(QString file_excel READ file_excel CONSTANT);
    QString file_excel() const { return QString::fromUtf8("\uf1c3"); }
    Q_PROPERTY(QString file_powerpoint READ file_powerpoint CONSTANT);
    QString file_powerpoint() const { return QString::fromUtf8("\uf1c4"); }
    Q_PROPERTY(QString file_image READ file_image CONSTANT);
    QString file_image() const { return QString::fromUtf8("\uf1c5"); }
    Q_PROPERTY(QString file_archive READ file_archive CONSTANT);
    QString file_archive() const { return QString::fromUtf8("\uf1c6"); }
    Q_PROPERTY(QString file_audio READ file_audio CONSTANT);
    QString file_audio() const { return QString::fromUtf8("\uf1c7"); }
    Q_PROPERTY(QString file_video READ file_video CONSTANT);
    QString file_video() const { return QString::fromUtf8("\uf1c8"); }
    Q_PROPERTY(QString file_code READ file_code CONSTANT);
    QString file_code() const { return QString::fromUtf8("\uf1c9"); }
    Q_PROPERTY(QString life_ring READ life_ring CONSTANT);
    QString life_ring() const { return QString::fromUtf8("\uf1cd"); }
    Q_PROPERTY(QString paper_plane READ paper_plane CONSTANT);
    QString paper_plane() const { return QString::fromUtf8("\uf1d8"); }
    Q_PROPERTY(QString futbol READ futbol CONSTANT);
    QString futbol() const { return QString::fromUtf8("\uf1e3"); }
    Q_PROPERTY(QString newspaper READ newspaper CONSTANT);
    QString newspaper() const { return QString::fromUtf8("\uf1ea"); }
    Q_PROPERTY(QString bell_slash READ bell_slash CONSTANT);
    QString bell_slash() const { return QString::fromUtf8("\uf1f6"); }
    Q_PROPERTY(QString copyright READ copyright CONSTANT);
    QString copyright() const { return QString::fromUtf8("\uf1f9"); }
    Q_PROPERTY(QString closed_captioning READ closed_captioning CONSTANT);
    QString closed_captioning() const { return QString::fromUtf8("\uf20a"); }
    Q_PROPERTY(QString object_group READ object_group CONSTANT);
    QString object_group() const { return QString::fromUtf8("\uf247"); }
    Q_PROPERTY(QString object_ungroup READ object_ungroup CONSTANT);
    QString object_ungroup() const { return QString::fromUtf8("\uf248"); }
    Q_PROPERTY(QString sticky_note READ sticky_note CONSTANT);
    QString sticky_note() const { return QString::fromUtf8("\uf249"); }
    Q_PROPERTY(QString clone READ clone CONSTANT);
    QString clone() const { return QString::fromUtf8("\uf24d"); }
    Q_PROPERTY(QString hourglass READ hourglass CONSTANT);
    QString hourglass() const { return QString::fromUtf8("\uf254"); }
    Q_PROPERTY(QString hand_rock READ hand_rock CONSTANT);
    QString hand_rock() const { return QString::fromUtf8("\uf255"); }
    Q_PROPERTY(QString hand_paper READ hand_paper CONSTANT);
    QString hand_paper() const { return QString::fromUtf8("\uf256"); }
    Q_PROPERTY(QString hand_scissors READ hand_scissors CONSTANT);
    QString hand_scissors() const { return QString::fromUtf8("\uf257"); }
    Q_PROPERTY(QString hand_lizard READ hand_lizard CONSTANT);
    QString hand_lizard() const { return QString::fromUtf8("\uf258"); }
    Q_PROPERTY(QString hand_spock READ hand_spock CONSTANT);
    QString hand_spock() const { return QString::fromUtf8("\uf259"); }
    Q_PROPERTY(QString hand_pointer READ hand_pointer CONSTANT);
    QString hand_pointer() const { return QString::fromUtf8("\uf25a"); }
    Q_PROPERTY(QString hand_peace READ hand_peace CONSTANT);
    QString hand_peace() const { return QString::fromUtf8("\uf25b"); }
    Q_PROPERTY(QString registered READ registered CONSTANT);
    QString registered() const { return QString::fromUtf8("\uf25d"); }
    Q_PROPERTY(QString calendar_plus READ calendar_plus CONSTANT);
    QString calendar_plus() const { return QString::fromUtf8("\uf271"); }
    Q_PROPERTY(QString calendar_minus READ calendar_minus CONSTANT);
    QString calendar_minus() const { return QString::fromUtf8("\uf272"); }
    Q_PROPERTY(QString calendar_times READ calendar_times CONSTANT);
    QString calendar_times() const { return QString::fromUtf8("\uf273"); }
    Q_PROPERTY(QString calendar_check READ calendar_check CONSTANT);
    QString calendar_check() const { return QString::fromUtf8("\uf274"); }
    Q_PROPERTY(QString map READ map CONSTANT);
    QString map() const { return QString::fromUtf8("\uf279"); }
    Q_PROPERTY(QString comment_alt READ comment_alt CONSTANT);
    QString comment_alt() const { return QString::fromUtf8("\uf27a"); }
    Q_PROPERTY(QString pause_circle READ pause_circle CONSTANT);
    QString pause_circle() const { return QString::fromUtf8("\uf28b"); }
    Q_PROPERTY(QString stop_circle READ stop_circle CONSTANT);
    QString stop_circle() const { return QString::fromUtf8("\uf28d"); }
    Q_PROPERTY(QString handshake READ handshake CONSTANT);
    QString handshake() const { return QString::fromUtf8("\uf2b5"); }
    Q_PROPERTY(QString envelope_open READ envelope_open CONSTANT);
    QString envelope_open() const { return QString::fromUtf8("\uf2b6"); }
    Q_PROPERTY(QString address_book READ address_book CONSTANT);
    QString address_book() const { return QString::fromUtf8("\uf2b9"); }
    Q_PROPERTY(QString address_card READ address_card CONSTANT);
    QString address_card() const { return QString::fromUtf8("\uf2bb"); }
    Q_PROPERTY(QString user_circle READ user_circle CONSTANT);
    QString user_circle() const { return QString::fromUtf8("\uf2bd"); }
    Q_PROPERTY(QString id_badge READ id_badge CONSTANT);
    QString id_badge() const { return QString::fromUtf8("\uf2c1"); }
    Q_PROPERTY(QString id_card READ id_card CONSTANT);
    QString id_card() const { return QString::fromUtf8("\uf2c2"); }
    Q_PROPERTY(QString window_maximize READ window_maximize CONSTANT);
    QString window_maximize() const { return QString::fromUtf8("\uf2d0"); }
    Q_PROPERTY(QString window_minimize READ window_minimize CONSTANT);
    QString window_minimize() const { return QString::fromUtf8("\uf2d1"); }
    Q_PROPERTY(QString window_restore READ window_restore CONSTANT);
    QString window_restore() const { return QString::fromUtf8("\uf2d2"); }
    Q_PROPERTY(QString snowflake READ snowflake CONSTANT);
    QString snowflake() const { return QString::fromUtf8("\uf2dc"); }
    Q_PROPERTY(QString trash_alt READ trash_alt CONSTANT);
    QString trash_alt() const { return QString::fromUtf8("\uf2ed"); }
    Q_PROPERTY(QString images READ images CONSTANT);
    QString images() const { return QString::fromUtf8("\uf302"); }
    Q_PROPERTY(QString clipboard READ clipboard CONSTANT);
    QString clipboard() const { return QString::fromUtf8("\uf328"); }
    Q_PROPERTY(QString arrow_alt_circle_down READ arrow_alt_circle_down CONSTANT);
    QString arrow_alt_circle_down() const { return QString::fromUtf8("\uf358"); }
    Q_PROPERTY(QString arrow_alt_circle_left READ arrow_alt_circle_left CONSTANT);
    QString arrow_alt_circle_left() const { return QString::fromUtf8("\uf359"); }
    Q_PROPERTY(QString arrow_alt_circle_right READ arrow_alt_circle_right CONSTANT);
    QString arrow_alt_circle_right() const { return QString::fromUtf8("\uf35a"); }
    Q_PROPERTY(QString arrow_alt_circle_up READ arrow_alt_circle_up CONSTANT);
    QString arrow_alt_circle_up() const { return QString::fromUtf8("\uf35b"); }
    Q_PROPERTY(QString gem READ gem CONSTANT);
    QString gem() const { return QString::fromUtf8("\uf3a5"); }
    Q_PROPERTY(QString money_bill_alt READ money_bill_alt CONSTANT);
    QString money_bill_alt() const { return QString::fromUtf8("\uf3d1"); }
    Q_PROPERTY(QString window_close READ window_close CONSTANT);
    QString window_close() const { return QString::fromUtf8("\uf410"); }
    Q_PROPERTY(QString comment_dots READ comment_dots CONSTANT);
    QString comment_dots() const { return QString::fromUtf8("\uf4ad"); }
    Q_PROPERTY(QString smile_wink READ smile_wink CONSTANT);
    QString smile_wink() const { return QString::fromUtf8("\uf4da"); }
    Q_PROPERTY(QString angry READ angry CONSTANT);
    QString angry() const { return QString::fromUtf8("\uf556"); }
    Q_PROPERTY(QString dizzy READ dizzy CONSTANT);
    QString dizzy() const { return QString::fromUtf8("\uf567"); }
    Q_PROPERTY(QString flushed READ flushed CONSTANT);
    QString flushed() const { return QString::fromUtf8("\uf579"); }
    Q_PROPERTY(QString frown_open READ frown_open CONSTANT);
    QString frown_open() const { return QString::fromUtf8("\uf57a"); }
    Q_PROPERTY(QString grimace READ grimace CONSTANT);
    QString grimace() const { return QString::fromUtf8("\uf57f"); }
    Q_PROPERTY(QString grin READ grin CONSTANT);
    QString grin() const { return QString::fromUtf8("\uf580"); }
    Q_PROPERTY(QString grin_alt READ grin_alt CONSTANT);
    QString grin_alt() const { return QString::fromUtf8("\uf581"); }
    Q_PROPERTY(QString grin_beam READ grin_beam CONSTANT);
    QString grin_beam() const { return QString::fromUtf8("\uf582"); }
    Q_PROPERTY(QString grin_beam_sweat READ grin_beam_sweat CONSTANT);
    QString grin_beam_sweat() const { return QString::fromUtf8("\uf583"); }
    Q_PROPERTY(QString grin_hearts READ grin_hearts CONSTANT);
    QString grin_hearts() const { return QString::fromUtf8("\uf584"); }
    Q_PROPERTY(QString grin_squint READ grin_squint CONSTANT);
    QString grin_squint() const { return QString::fromUtf8("\uf585"); }
    Q_PROPERTY(QString grin_squint_tears READ grin_squint_tears CONSTANT);
    QString grin_squint_tears() const { return QString::fromUtf8("\uf586"); }
    Q_PROPERTY(QString grin_stars READ grin_stars CONSTANT);
    QString grin_stars() const { return QString::fromUtf8("\uf587"); }
    Q_PROPERTY(QString grin_tears READ grin_tears CONSTANT);
    QString grin_tears() const { return QString::fromUtf8("\uf588"); }
    Q_PROPERTY(QString grin_tongue READ grin_tongue CONSTANT);
    QString grin_tongue() const { return QString::fromUtf8("\uf589"); }
    Q_PROPERTY(QString grin_tongue_squint READ grin_tongue_squint CONSTANT);
    QString grin_tongue_squint() const { return QString::fromUtf8("\uf58a"); }
    Q_PROPERTY(QString grin_tongue_wink READ grin_tongue_wink CONSTANT);
    QString grin_tongue_wink() const { return QString::fromUtf8("\uf58b"); }
    Q_PROPERTY(QString grin_wink READ grin_wink CONSTANT);
    QString grin_wink() const { return QString::fromUtf8("\uf58c"); }
    Q_PROPERTY(QString kiss READ kiss CONSTANT);
    QString kiss() const { return QString::fromUtf8("\uf596"); }
    Q_PROPERTY(QString kiss_beam READ kiss_beam CONSTANT);
    QString kiss_beam() const { return QString::fromUtf8("\uf597"); }
    Q_PROPERTY(QString kiss_wink_heart READ kiss_wink_heart CONSTANT);
    QString kiss_wink_heart() const { return QString::fromUtf8("\uf598"); }
    Q_PROPERTY(QString laugh READ laugh CONSTANT);
    QString laugh() const { return QString::fromUtf8("\uf599"); }
    Q_PROPERTY(QString laugh_beam READ laugh_beam CONSTANT);
    QString laugh_beam() const { return QString::fromUtf8("\uf59a"); }
    Q_PROPERTY(QString laugh_squint READ laugh_squint CONSTANT);
    QString laugh_squint() const { return QString::fromUtf8("\uf59b"); }
    Q_PROPERTY(QString laugh_wink READ laugh_wink CONSTANT);
    QString laugh_wink() const { return QString::fromUtf8("\uf59c"); }
    Q_PROPERTY(QString meh_blank READ meh_blank CONSTANT);
    QString meh_blank() const { return QString::fromUtf8("\uf5a4"); }
    Q_PROPERTY(QString meh_rolling_eyes READ meh_rolling_eyes CONSTANT);
    QString meh_rolling_eyes() const { return QString::fromUtf8("\uf5a5"); }
    Q_PROPERTY(QString sad_cry READ sad_cry CONSTANT);
    QString sad_cry() const { return QString::fromUtf8("\uf5b3"); }
    Q_PROPERTY(QString sad_tear READ sad_tear CONSTANT);
    QString sad_tear() const { return QString::fromUtf8("\uf5b4"); }
    Q_PROPERTY(QString smile_beam READ smile_beam CONSTANT);
    QString smile_beam() const { return QString::fromUtf8("\uf5b8"); }
    Q_PROPERTY(QString surprise READ surprise CONSTANT);
    QString surprise() const { return QString::fromUtf8("\uf5c2"); }
    Q_PROPERTY(QString tired READ tired CONSTANT);
    QString tired() const { return QString::fromUtf8("\uf5c8"); }
    Q_PROPERTY(QString faucet READ faucet CONSTANT);
    QString faucet() const { return QString::fromUtf8("\ue005"); }
    Q_PROPERTY(QString trailer READ trailer CONSTANT);
    QString trailer() const { return QString::fromUtf8("\ue041"); }
    Q_PROPERTY(QString bacteria READ bacteria CONSTANT);
    QString bacteria() const { return QString::fromUtf8("\ue059"); }
    Q_PROPERTY(QString bacterium READ bacterium CONSTANT);
    QString bacterium() const { return QString::fromUtf8("\ue05a"); }
    Q_PROPERTY(QString box_tissue READ box_tissue CONSTANT);
    QString box_tissue() const { return QString::fromUtf8("\ue05b"); }
    Q_PROPERTY(QString hand_holding_medical READ hand_holding_medical CONSTANT);
    QString hand_holding_medical() const { return QString::fromUtf8("\ue05c"); }
    Q_PROPERTY(QString hand_sparkles READ hand_sparkles CONSTANT);
    QString hand_sparkles() const { return QString::fromUtf8("\ue05d"); }
    Q_PROPERTY(QString hands_wash READ hands_wash CONSTANT);
    QString hands_wash() const { return QString::fromUtf8("\ue05e"); }
    Q_PROPERTY(QString handshake_alt_slash READ handshake_alt_slash CONSTANT);
    QString handshake_alt_slash() const { return QString::fromUtf8("\ue05f"); }
    Q_PROPERTY(QString handshake_slash READ handshake_slash CONSTANT);
    QString handshake_slash() const { return QString::fromUtf8("\ue060"); }
    Q_PROPERTY(QString head_side_cough READ head_side_cough CONSTANT);
    QString head_side_cough() const { return QString::fromUtf8("\ue061"); }
    Q_PROPERTY(QString head_side_cough_slash READ head_side_cough_slash CONSTANT);
    QString head_side_cough_slash() const { return QString::fromUtf8("\ue062"); }
    Q_PROPERTY(QString head_side_mask READ head_side_mask CONSTANT);
    QString head_side_mask() const { return QString::fromUtf8("\ue063"); }
    Q_PROPERTY(QString head_side_virus READ head_side_virus CONSTANT);
    QString head_side_virus() const { return QString::fromUtf8("\ue064"); }
    Q_PROPERTY(QString house_user READ house_user CONSTANT);
    QString house_user() const { return QString::fromUtf8("\ue065"); }
    Q_PROPERTY(QString laptop_house READ laptop_house CONSTANT);
    QString laptop_house() const { return QString::fromUtf8("\ue066"); }
    Q_PROPERTY(QString lungs_virus READ lungs_virus CONSTANT);
    QString lungs_virus() const { return QString::fromUtf8("\ue067"); }
    Q_PROPERTY(QString people_arrows READ people_arrows CONSTANT);
    QString people_arrows() const { return QString::fromUtf8("\ue068"); }
    Q_PROPERTY(QString plane_slash READ plane_slash CONSTANT);
    QString plane_slash() const { return QString::fromUtf8("\ue069"); }
    Q_PROPERTY(QString pump_medical READ pump_medical CONSTANT);
    QString pump_medical() const { return QString::fromUtf8("\ue06a"); }
    Q_PROPERTY(QString pump_soap READ pump_soap CONSTANT);
    QString pump_soap() const { return QString::fromUtf8("\ue06b"); }
    Q_PROPERTY(QString shield_virus READ shield_virus CONSTANT);
    QString shield_virus() const { return QString::fromUtf8("\ue06c"); }
    Q_PROPERTY(QString sink READ sink CONSTANT);
    QString sink() const { return QString::fromUtf8("\ue06d"); }
    Q_PROPERTY(QString soap READ soap CONSTANT);
    QString soap() const { return QString::fromUtf8("\ue06e"); }
    Q_PROPERTY(QString stopwatch_20 READ stopwatch_20 CONSTANT);
    QString stopwatch_20() const { return QString::fromUtf8("\ue06f"); }
    Q_PROPERTY(QString store_alt_slash READ store_alt_slash CONSTANT);
    QString store_alt_slash() const { return QString::fromUtf8("\ue070"); }
    Q_PROPERTY(QString store_slash READ store_slash CONSTANT);
    QString store_slash() const { return QString::fromUtf8("\ue071"); }
    Q_PROPERTY(QString toilet_paper_slash READ toilet_paper_slash CONSTANT);
    QString toilet_paper_slash() const { return QString::fromUtf8("\ue072"); }
    Q_PROPERTY(QString users_slash READ users_slash CONSTANT);
    QString users_slash() const { return QString::fromUtf8("\ue073"); }
    Q_PROPERTY(QString virus READ virus CONSTANT);
    QString virus() const { return QString::fromUtf8("\ue074"); }
    Q_PROPERTY(QString virus_slash READ virus_slash CONSTANT);
    QString virus_slash() const { return QString::fromUtf8("\ue075"); }
    Q_PROPERTY(QString viruses READ viruses CONSTANT);
    QString viruses() const { return QString::fromUtf8("\ue076"); }
    Q_PROPERTY(QString glass_martini READ glass_martini CONSTANT);
    QString glass_martini() const { return QString::fromUtf8("\uf000"); }
    Q_PROPERTY(QString music READ music CONSTANT);
    QString music() const { return QString::fromUtf8("\uf001"); }
    Q_PROPERTY(QString search READ search CONSTANT);
    QString search() const { return QString::fromUtf8("\uf002"); }
    Q_PROPERTY(QString film READ film CONSTANT);
    QString film() const { return QString::fromUtf8("\uf008"); }
    Q_PROPERTY(QString th_large READ th_large CONSTANT);
    QString th_large() const { return QString::fromUtf8("\uf009"); }
    Q_PROPERTY(QString th READ th CONSTANT);
    QString th() const { return QString::fromUtf8("\uf00a"); }
    Q_PROPERTY(QString th_list READ th_list CONSTANT);
    QString th_list() const { return QString::fromUtf8("\uf00b"); }
    Q_PROPERTY(QString check READ check CONSTANT);
    QString check() const { return QString::fromUtf8("\uf00c"); }
    Q_PROPERTY(QString times READ times CONSTANT);
    QString times() const { return QString::fromUtf8("\uf00d"); }
    Q_PROPERTY(QString search_plus READ search_plus CONSTANT);
    QString search_plus() const { return QString::fromUtf8("\uf00e"); }
    Q_PROPERTY(QString search_minus READ search_minus CONSTANT);
    QString search_minus() const { return QString::fromUtf8("\uf010"); }
    Q_PROPERTY(QString power_off READ power_off CONSTANT);
    QString power_off() const { return QString::fromUtf8("\uf011"); }
    Q_PROPERTY(QString signal READ signal CONSTANT);
    QString signal() const { return QString::fromUtf8("\uf012"); }
    Q_PROPERTY(QString cog READ cog CONSTANT);
    QString cog() const { return QString::fromUtf8("\uf013"); }
    Q_PROPERTY(QString home READ home CONSTANT);
    QString home() const { return QString::fromUtf8("\uf015"); }
    Q_PROPERTY(QString road READ road CONSTANT);
    QString road() const { return QString::fromUtf8("\uf018"); }
    Q_PROPERTY(QString download READ download CONSTANT);
    QString download() const { return QString::fromUtf8("\uf019"); }
    Q_PROPERTY(QString inbox READ inbox CONSTANT);
    QString inbox() const { return QString::fromUtf8("\uf01c"); }
    Q_PROPERTY(QString redo READ redo CONSTANT);
    QString redo() const { return QString::fromUtf8("\uf01e"); }
    Q_PROPERTY(QString sync READ sync CONSTANT);
    QString sync() const { return QString::fromUtf8("\uf021"); }
    Q_PROPERTY(QString lock READ lock CONSTANT);
    QString lock() const { return QString::fromUtf8("\uf023"); }
    Q_PROPERTY(QString headphones READ headphones CONSTANT);
    QString headphones() const { return QString::fromUtf8("\uf025"); }
    Q_PROPERTY(QString volume_off READ volume_off CONSTANT);
    QString volume_off() const { return QString::fromUtf8("\uf026"); }
    Q_PROPERTY(QString volume_down READ volume_down CONSTANT);
    QString volume_down() const { return QString::fromUtf8("\uf027"); }
    Q_PROPERTY(QString volume_up READ volume_up CONSTANT);
    QString volume_up() const { return QString::fromUtf8("\uf028"); }
    Q_PROPERTY(QString qrcode READ qrcode CONSTANT);
    QString qrcode() const { return QString::fromUtf8("\uf029"); }
    Q_PROPERTY(QString barcode READ barcode CONSTANT);
    QString barcode() const { return QString::fromUtf8("\uf02a"); }
    Q_PROPERTY(QString tag READ tag CONSTANT);
    QString tag() const { return QString::fromUtf8("\uf02b"); }
    Q_PROPERTY(QString tags READ tags CONSTANT);
    QString tags() const { return QString::fromUtf8("\uf02c"); }
    Q_PROPERTY(QString book READ book CONSTANT);
    QString book() const { return QString::fromUtf8("\uf02d"); }
    Q_PROPERTY(QString print READ print CONSTANT);
    QString print() const { return QString::fromUtf8("\uf02f"); }
    Q_PROPERTY(QString camera READ camera CONSTANT);
    QString camera() const { return QString::fromUtf8("\uf030"); }
    Q_PROPERTY(QString font READ font CONSTANT);
    QString font() const { return QString::fromUtf8("\uf031"); }
    Q_PROPERTY(QString bold READ bold CONSTANT);
    QString bold() const { return QString::fromUtf8("\uf032"); }
    Q_PROPERTY(QString italic READ italic CONSTANT);
    QString italic() const { return QString::fromUtf8("\uf033"); }
    Q_PROPERTY(QString text_height READ text_height CONSTANT);
    QString text_height() const { return QString::fromUtf8("\uf034"); }
    Q_PROPERTY(QString text_width READ text_width CONSTANT);
    QString text_width() const { return QString::fromUtf8("\uf035"); }
    Q_PROPERTY(QString align_left READ align_left CONSTANT);
    QString align_left() const { return QString::fromUtf8("\uf036"); }
    Q_PROPERTY(QString align_center READ align_center CONSTANT);
    QString align_center() const { return QString::fromUtf8("\uf037"); }
    Q_PROPERTY(QString align_right READ align_right CONSTANT);
    QString align_right() const { return QString::fromUtf8("\uf038"); }
    Q_PROPERTY(QString align_justify READ align_justify CONSTANT);
    QString align_justify() const { return QString::fromUtf8("\uf039"); }
    Q_PROPERTY(QString list READ list CONSTANT);
    QString list() const { return QString::fromUtf8("\uf03a"); }
    Q_PROPERTY(QString outdent READ outdent CONSTANT);
    QString outdent() const { return QString::fromUtf8("\uf03b"); }
    Q_PROPERTY(QString indent READ indent CONSTANT);
    QString indent() const { return QString::fromUtf8("\uf03c"); }
    Q_PROPERTY(QString video READ video CONSTANT);
    QString video() const { return QString::fromUtf8("\uf03d"); }
    Q_PROPERTY(QString map_marker READ map_marker CONSTANT);
    QString map_marker() const { return QString::fromUtf8("\uf041"); }
    Q_PROPERTY(QString adjust READ adjust CONSTANT);
    QString adjust() const { return QString::fromUtf8("\uf042"); }
    Q_PROPERTY(QString tint READ tint CONSTANT);
    QString tint() const { return QString::fromUtf8("\uf043"); }
    Q_PROPERTY(QString step_backward READ step_backward CONSTANT);
    QString step_backward() const { return QString::fromUtf8("\uf048"); }
    Q_PROPERTY(QString fast_backward READ fast_backward CONSTANT);
    QString fast_backward() const { return QString::fromUtf8("\uf049"); }
    Q_PROPERTY(QString backward READ backward CONSTANT);
    QString backward() const { return QString::fromUtf8("\uf04a"); }
    Q_PROPERTY(QString play READ play CONSTANT);
    QString play() const { return QString::fromUtf8("\uf04b"); }
    Q_PROPERTY(QString pause READ pause CONSTANT);
    QString pause() const { return QString::fromUtf8("\uf04c"); }
    Q_PROPERTY(QString stop READ stop CONSTANT);
    QString stop() const { return QString::fromUtf8("\uf04d"); }
    Q_PROPERTY(QString forward READ forward CONSTANT);
    QString forward() const { return QString::fromUtf8("\uf04e"); }
    Q_PROPERTY(QString fast_forward READ fast_forward CONSTANT);
    QString fast_forward() const { return QString::fromUtf8("\uf050"); }
    Q_PROPERTY(QString step_forward READ step_forward CONSTANT);
    QString step_forward() const { return QString::fromUtf8("\uf051"); }
    Q_PROPERTY(QString eject READ eject CONSTANT);
    QString eject() const { return QString::fromUtf8("\uf052"); }
    Q_PROPERTY(QString chevron_left READ chevron_left CONSTANT);
    QString chevron_left() const { return QString::fromUtf8("\uf053"); }
    Q_PROPERTY(QString chevron_right READ chevron_right CONSTANT);
    QString chevron_right() const { return QString::fromUtf8("\uf054"); }
    Q_PROPERTY(QString plus_circle READ plus_circle CONSTANT);
    QString plus_circle() const { return QString::fromUtf8("\uf055"); }
    Q_PROPERTY(QString minus_circle READ minus_circle CONSTANT);
    QString minus_circle() const { return QString::fromUtf8("\uf056"); }
    Q_PROPERTY(QString info_circle READ info_circle CONSTANT);
    QString info_circle() const { return QString::fromUtf8("\uf05a"); }
    Q_PROPERTY(QString crosshairs READ crosshairs CONSTANT);
    QString crosshairs() const { return QString::fromUtf8("\uf05b"); }
    Q_PROPERTY(QString ban READ ban CONSTANT);
    QString ban() const { return QString::fromUtf8("\uf05e"); }
    Q_PROPERTY(QString arrow_left READ arrow_left CONSTANT);
    QString arrow_left() const { return QString::fromUtf8("\uf060"); }
    Q_PROPERTY(QString arrow_right READ arrow_right CONSTANT);
    QString arrow_right() const { return QString::fromUtf8("\uf061"); }
    Q_PROPERTY(QString arrow_up READ arrow_up CONSTANT);
    QString arrow_up() const { return QString::fromUtf8("\uf062"); }
    Q_PROPERTY(QString arrow_down READ arrow_down CONSTANT);
    QString arrow_down() const { return QString::fromUtf8("\uf063"); }
    Q_PROPERTY(QString share READ share CONSTANT);
    QString share() const { return QString::fromUtf8("\uf064"); }
    Q_PROPERTY(QString expand READ expand CONSTANT);
    QString expand() const { return QString::fromUtf8("\uf065"); }
    Q_PROPERTY(QString compress READ compress CONSTANT);
    QString compress() const { return QString::fromUtf8("\uf066"); }
    Q_PROPERTY(QString plus READ plus CONSTANT);
    QString plus() const { return QString::fromUtf8("\uf067"); }
    Q_PROPERTY(QString minus READ minus CONSTANT);
    QString minus() const { return QString::fromUtf8("\uf068"); }
    Q_PROPERTY(QString asterisk READ asterisk CONSTANT);
    QString asterisk() const { return QString::fromUtf8("\uf069"); }
    Q_PROPERTY(QString exclamation_circle READ exclamation_circle CONSTANT);
    QString exclamation_circle() const { return QString::fromUtf8("\uf06a"); }
    Q_PROPERTY(QString gift READ gift CONSTANT);
    QString gift() const { return QString::fromUtf8("\uf06b"); }
    Q_PROPERTY(QString leaf READ leaf CONSTANT);
    QString leaf() const { return QString::fromUtf8("\uf06c"); }
    Q_PROPERTY(QString fire READ fire CONSTANT);
    QString fire() const { return QString::fromUtf8("\uf06d"); }
    Q_PROPERTY(QString exclamation_triangle READ exclamation_triangle CONSTANT);
    QString exclamation_triangle() const { return QString::fromUtf8("\uf071"); }
    Q_PROPERTY(QString plane READ plane CONSTANT);
    QString plane() const { return QString::fromUtf8("\uf072"); }
    Q_PROPERTY(QString random READ random CONSTANT);
    QString random() const { return QString::fromUtf8("\uf074"); }
    Q_PROPERTY(QString magnet READ magnet CONSTANT);
    QString magnet() const { return QString::fromUtf8("\uf076"); }
    Q_PROPERTY(QString chevron_up READ chevron_up CONSTANT);
    QString chevron_up() const { return QString::fromUtf8("\uf077"); }
    Q_PROPERTY(QString chevron_down READ chevron_down CONSTANT);
    QString chevron_down() const { return QString::fromUtf8("\uf078"); }
    Q_PROPERTY(QString retweet READ retweet CONSTANT);
    QString retweet() const { return QString::fromUtf8("\uf079"); }
    Q_PROPERTY(QString shopping_cart READ shopping_cart CONSTANT);
    QString shopping_cart() const { return QString::fromUtf8("\uf07a"); }
    Q_PROPERTY(QString camera_retro READ camera_retro CONSTANT);
    QString camera_retro() const { return QString::fromUtf8("\uf083"); }
    Q_PROPERTY(QString key READ key CONSTANT);
    QString key() const { return QString::fromUtf8("\uf084"); }
    Q_PROPERTY(QString cogs READ cogs CONSTANT);
    QString cogs() const { return QString::fromUtf8("\uf085"); }
    Q_PROPERTY(QString thumbtack READ thumbtack CONSTANT);
    QString thumbtack() const { return QString::fromUtf8("\uf08d"); }
    Q_PROPERTY(QString trophy READ trophy CONSTANT);
    QString trophy() const { return QString::fromUtf8("\uf091"); }
    Q_PROPERTY(QString upload READ upload CONSTANT);
    QString upload() const { return QString::fromUtf8("\uf093"); }
    Q_PROPERTY(QString phone READ phone CONSTANT);
    QString phone() const { return QString::fromUtf8("\uf095"); }
    Q_PROPERTY(QString phone_square READ phone_square CONSTANT);
    QString phone_square() const { return QString::fromUtf8("\uf098"); }
    Q_PROPERTY(QString unlock READ unlock CONSTANT);
    QString unlock() const { return QString::fromUtf8("\uf09c"); }
    Q_PROPERTY(QString rss READ rss CONSTANT);
    QString rss() const { return QString::fromUtf8("\uf09e"); }
    Q_PROPERTY(QString bullhorn READ bullhorn CONSTANT);
    QString bullhorn() const { return QString::fromUtf8("\uf0a1"); }
    Q_PROPERTY(QString certificate READ certificate CONSTANT);
    QString certificate() const { return QString::fromUtf8("\uf0a3"); }
    Q_PROPERTY(QString arrow_circle_left READ arrow_circle_left CONSTANT);
    QString arrow_circle_left() const { return QString::fromUtf8("\uf0a8"); }
    Q_PROPERTY(QString arrow_circle_right READ arrow_circle_right CONSTANT);
    QString arrow_circle_right() const { return QString::fromUtf8("\uf0a9"); }
    Q_PROPERTY(QString arrow_circle_up READ arrow_circle_up CONSTANT);
    QString arrow_circle_up() const { return QString::fromUtf8("\uf0aa"); }
    Q_PROPERTY(QString arrow_circle_down READ arrow_circle_down CONSTANT);
    QString arrow_circle_down() const { return QString::fromUtf8("\uf0ab"); }
    Q_PROPERTY(QString globe READ globe CONSTANT);
    QString globe() const { return QString::fromUtf8("\uf0ac"); }
    Q_PROPERTY(QString wrench READ wrench CONSTANT);
    QString wrench() const { return QString::fromUtf8("\uf0ad"); }
    Q_PROPERTY(QString tasks READ tasks CONSTANT);
    QString tasks() const { return QString::fromUtf8("\uf0ae"); }
    Q_PROPERTY(QString filter READ filter CONSTANT);
    QString filter() const { return QString::fromUtf8("\uf0b0"); }
    Q_PROPERTY(QString briefcase READ briefcase CONSTANT);
    QString briefcase() const { return QString::fromUtf8("\uf0b1"); }
    Q_PROPERTY(QString arrows_alt READ arrows_alt CONSTANT);
    QString arrows_alt() const { return QString::fromUtf8("\uf0b2"); }
    Q_PROPERTY(QString users READ users CONSTANT);
    QString users() const { return QString::fromUtf8("\uf0c0"); }
    Q_PROPERTY(QString link READ link CONSTANT);
    QString link() const { return QString::fromUtf8("\uf0c1"); }
    Q_PROPERTY(QString cloud READ cloud CONSTANT);
    QString cloud() const { return QString::fromUtf8("\uf0c2"); }
    Q_PROPERTY(QString flask READ flask CONSTANT);
    QString flask() const { return QString::fromUtf8("\uf0c3"); }
    Q_PROPERTY(QString cut READ cut CONSTANT);
    QString cut() const { return QString::fromUtf8("\uf0c4"); }
    Q_PROPERTY(QString paperclip READ paperclip CONSTANT);
    QString paperclip() const { return QString::fromUtf8("\uf0c6"); }
    Q_PROPERTY(QString bars READ bars CONSTANT);
    QString bars() const { return QString::fromUtf8("\uf0c9"); }
    Q_PROPERTY(QString list_ul READ list_ul CONSTANT);
    QString list_ul() const { return QString::fromUtf8("\uf0ca"); }
    Q_PROPERTY(QString list_ol READ list_ol CONSTANT);
    QString list_ol() const { return QString::fromUtf8("\uf0cb"); }
    Q_PROPERTY(QString strikethrough READ strikethrough CONSTANT);
    QString strikethrough() const { return QString::fromUtf8("\uf0cc"); }
    Q_PROPERTY(QString underline READ underline CONSTANT);
    QString underline() const { return QString::fromUtf8("\uf0cd"); }
    Q_PROPERTY(QString table READ table CONSTANT);
    QString table() const { return QString::fromUtf8("\uf0ce"); }
    Q_PROPERTY(QString magic READ magic CONSTANT);
    QString magic() const { return QString::fromUtf8("\uf0d0"); }
    Q_PROPERTY(QString truck READ truck CONSTANT);
    QString truck() const { return QString::fromUtf8("\uf0d1"); }
    Q_PROPERTY(QString money_bill READ money_bill CONSTANT);
    QString money_bill() const { return QString::fromUtf8("\uf0d6"); }
    Q_PROPERTY(QString caret_down READ caret_down CONSTANT);
    QString caret_down() const { return QString::fromUtf8("\uf0d7"); }
    Q_PROPERTY(QString caret_up READ caret_up CONSTANT);
    QString caret_up() const { return QString::fromUtf8("\uf0d8"); }
    Q_PROPERTY(QString caret_left READ caret_left CONSTANT);
    QString caret_left() const { return QString::fromUtf8("\uf0d9"); }
    Q_PROPERTY(QString caret_right READ caret_right CONSTANT);
    QString caret_right() const { return QString::fromUtf8("\uf0da"); }
    Q_PROPERTY(QString columns READ columns CONSTANT);
    QString columns() const { return QString::fromUtf8("\uf0db"); }
    Q_PROPERTY(QString sort READ sort CONSTANT);
    QString sort() const { return QString::fromUtf8("\uf0dc"); }
    Q_PROPERTY(QString sort_down READ sort_down CONSTANT);
    QString sort_down() const { return QString::fromUtf8("\uf0dd"); }
    Q_PROPERTY(QString sort_up READ sort_up CONSTANT);
    QString sort_up() const { return QString::fromUtf8("\uf0de"); }
    Q_PROPERTY(QString undo READ undo CONSTANT);
    QString undo() const { return QString::fromUtf8("\uf0e2"); }
    Q_PROPERTY(QString gavel READ gavel CONSTANT);
    QString gavel() const { return QString::fromUtf8("\uf0e3"); }
    Q_PROPERTY(QString bolt READ bolt CONSTANT);
    QString bolt() const { return QString::fromUtf8("\uf0e7"); }
    Q_PROPERTY(QString sitemap READ sitemap CONSTANT);
    QString sitemap() const { return QString::fromUtf8("\uf0e8"); }
    Q_PROPERTY(QString umbrella READ umbrella CONSTANT);
    QString umbrella() const { return QString::fromUtf8("\uf0e9"); }
    Q_PROPERTY(QString paste READ paste CONSTANT);
    QString paste() const { return QString::fromUtf8("\uf0ea"); }
    Q_PROPERTY(QString user_md READ user_md CONSTANT);
    QString user_md() const { return QString::fromUtf8("\uf0f0"); }
    Q_PROPERTY(QString stethoscope READ stethoscope CONSTANT);
    QString stethoscope() const { return QString::fromUtf8("\uf0f1"); }
    Q_PROPERTY(QString suitcase READ suitcase CONSTANT);
    QString suitcase() const { return QString::fromUtf8("\uf0f2"); }
    Q_PROPERTY(QString coffee READ coffee CONSTANT);
    QString coffee() const { return QString::fromUtf8("\uf0f4"); }
    Q_PROPERTY(QString ambulance READ ambulance CONSTANT);
    QString ambulance() const { return QString::fromUtf8("\uf0f9"); }
    Q_PROPERTY(QString medkit READ medkit CONSTANT);
    QString medkit() const { return QString::fromUtf8("\uf0fa"); }
    Q_PROPERTY(QString fighter_jet READ fighter_jet CONSTANT);
    QString fighter_jet() const { return QString::fromUtf8("\uf0fb"); }
    Q_PROPERTY(QString beer READ beer CONSTANT);
    QString beer() const { return QString::fromUtf8("\uf0fc"); }
    Q_PROPERTY(QString h_square READ h_square CONSTANT);
    QString h_square() const { return QString::fromUtf8("\uf0fd"); }
    Q_PROPERTY(QString angle_double_left READ angle_double_left CONSTANT);
    QString angle_double_left() const { return QString::fromUtf8("\uf100"); }
    Q_PROPERTY(QString angle_double_right READ angle_double_right CONSTANT);
    QString angle_double_right() const { return QString::fromUtf8("\uf101"); }
    Q_PROPERTY(QString angle_double_up READ angle_double_up CONSTANT);
    QString angle_double_up() const { return QString::fromUtf8("\uf102"); }
    Q_PROPERTY(QString angle_double_down READ angle_double_down CONSTANT);
    QString angle_double_down() const { return QString::fromUtf8("\uf103"); }
    Q_PROPERTY(QString angle_left READ angle_left CONSTANT);
    QString angle_left() const { return QString::fromUtf8("\uf104"); }
    Q_PROPERTY(QString angle_right READ angle_right CONSTANT);
    QString angle_right() const { return QString::fromUtf8("\uf105"); }
    Q_PROPERTY(QString angle_up READ angle_up CONSTANT);
    QString angle_up() const { return QString::fromUtf8("\uf106"); }
    Q_PROPERTY(QString angle_down READ angle_down CONSTANT);
    QString angle_down() const { return QString::fromUtf8("\uf107"); }
    Q_PROPERTY(QString desktop READ desktop CONSTANT);
    QString desktop() const { return QString::fromUtf8("\uf108"); }
    Q_PROPERTY(QString laptop READ laptop CONSTANT);
    QString laptop() const { return QString::fromUtf8("\uf109"); }
    Q_PROPERTY(QString tablet READ tablet CONSTANT);
    QString tablet() const { return QString::fromUtf8("\uf10a"); }
    Q_PROPERTY(QString mobile READ mobile CONSTANT);
    QString mobile() const { return QString::fromUtf8("\uf10b"); }
    Q_PROPERTY(QString quote_left READ quote_left CONSTANT);
    QString quote_left() const { return QString::fromUtf8("\uf10d"); }
    Q_PROPERTY(QString quote_right READ quote_right CONSTANT);
    QString quote_right() const { return QString::fromUtf8("\uf10e"); }
    Q_PROPERTY(QString spinner READ spinner CONSTANT);
    QString spinner() const { return QString::fromUtf8("\uf110"); }
    Q_PROPERTY(QString gamepad READ gamepad CONSTANT);
    QString gamepad() const { return QString::fromUtf8("\uf11b"); }
    Q_PROPERTY(QString flag_checkered READ flag_checkered CONSTANT);
    QString flag_checkered() const { return QString::fromUtf8("\uf11e"); }
    Q_PROPERTY(QString terminal READ terminal CONSTANT);
    QString terminal() const { return QString::fromUtf8("\uf120"); }
    Q_PROPERTY(QString code READ code CONSTANT);
    QString code() const { return QString::fromUtf8("\uf121"); }
    Q_PROPERTY(QString reply_all READ reply_all CONSTANT);
    QString reply_all() const { return QString::fromUtf8("\uf122"); }
    Q_PROPERTY(QString location_arrow READ location_arrow CONSTANT);
    QString location_arrow() const { return QString::fromUtf8("\uf124"); }
    Q_PROPERTY(QString crop READ crop CONSTANT);
    QString crop() const { return QString::fromUtf8("\uf125"); }
    Q_PROPERTY(QString code_branch READ code_branch CONSTANT);
    QString code_branch() const { return QString::fromUtf8("\uf126"); }
    Q_PROPERTY(QString unlink READ unlink CONSTANT);
    QString unlink() const { return QString::fromUtf8("\uf127"); }
    Q_PROPERTY(QString question READ question CONSTANT);
    QString question() const { return QString::fromUtf8("\uf128"); }
    Q_PROPERTY(QString info READ info CONSTANT);
    QString info() const { return QString::fromUtf8("\uf129"); }
    Q_PROPERTY(QString exclamation READ exclamation CONSTANT);
    QString exclamation() const { return QString::fromUtf8("\uf12a"); }
    Q_PROPERTY(QString superscript READ superscript CONSTANT);
    QString superscript() const { return QString::fromUtf8("\uf12b"); }
    Q_PROPERTY(QString subscript READ subscript CONSTANT);
    QString subscript() const { return QString::fromUtf8("\uf12c"); }
    Q_PROPERTY(QString eraser READ eraser CONSTANT);
    QString eraser() const { return QString::fromUtf8("\uf12d"); }
    Q_PROPERTY(QString puzzle_piece READ puzzle_piece CONSTANT);
    QString puzzle_piece() const { return QString::fromUtf8("\uf12e"); }
    Q_PROPERTY(QString microphone READ microphone CONSTANT);
    QString microphone() const { return QString::fromUtf8("\uf130"); }
    Q_PROPERTY(QString microphone_slash READ microphone_slash CONSTANT);
    QString microphone_slash() const { return QString::fromUtf8("\uf131"); }
    Q_PROPERTY(QString fire_extinguisher READ fire_extinguisher CONSTANT);
    QString fire_extinguisher() const { return QString::fromUtf8("\uf134"); }
    Q_PROPERTY(QString rocket READ rocket CONSTANT);
    QString rocket() const { return QString::fromUtf8("\uf135"); }
    Q_PROPERTY(QString chevron_circle_left READ chevron_circle_left CONSTANT);
    QString chevron_circle_left() const { return QString::fromUtf8("\uf137"); }
    Q_PROPERTY(QString chevron_circle_right READ chevron_circle_right CONSTANT);
    QString chevron_circle_right() const { return QString::fromUtf8("\uf138"); }
    Q_PROPERTY(QString chevron_circle_up READ chevron_circle_up CONSTANT);
    QString chevron_circle_up() const { return QString::fromUtf8("\uf139"); }
    Q_PROPERTY(QString chevron_circle_down READ chevron_circle_down CONSTANT);
    QString chevron_circle_down() const { return QString::fromUtf8("\uf13a"); }
    Q_PROPERTY(QString anchor READ anchor CONSTANT);
    QString anchor() const { return QString::fromUtf8("\uf13d"); }
    Q_PROPERTY(QString unlock_alt READ unlock_alt CONSTANT);
    QString unlock_alt() const { return QString::fromUtf8("\uf13e"); }
    Q_PROPERTY(QString bullseye READ bullseye CONSTANT);
    QString bullseye() const { return QString::fromUtf8("\uf140"); }
    Q_PROPERTY(QString ellipsis_h READ ellipsis_h CONSTANT);
    QString ellipsis_h() const { return QString::fromUtf8("\uf141"); }
    Q_PROPERTY(QString ellipsis_v READ ellipsis_v CONSTANT);
    QString ellipsis_v() const { return QString::fromUtf8("\uf142"); }
    Q_PROPERTY(QString rss_square READ rss_square CONSTANT);
    QString rss_square() const { return QString::fromUtf8("\uf143"); }
    Q_PROPERTY(QString pen_square READ pen_square CONSTANT);
    QString pen_square() const { return QString::fromUtf8("\uf14b"); }
    Q_PROPERTY(QString euro_sign READ euro_sign CONSTANT);
    QString euro_sign() const { return QString::fromUtf8("\uf153"); }
    Q_PROPERTY(QString pound_sign READ pound_sign CONSTANT);
    QString pound_sign() const { return QString::fromUtf8("\uf154"); }
    Q_PROPERTY(QString dollar_sign READ dollar_sign CONSTANT);
    QString dollar_sign() const { return QString::fromUtf8("\uf155"); }
    Q_PROPERTY(QString rupee_sign READ rupee_sign CONSTANT);
    QString rupee_sign() const { return QString::fromUtf8("\uf156"); }
    Q_PROPERTY(QString yen_sign READ yen_sign CONSTANT);
    QString yen_sign() const { return QString::fromUtf8("\uf157"); }
    Q_PROPERTY(QString ruble_sign READ ruble_sign CONSTANT);
    QString ruble_sign() const { return QString::fromUtf8("\uf158"); }
    Q_PROPERTY(QString won_sign READ won_sign CONSTANT);
    QString won_sign() const { return QString::fromUtf8("\uf159"); }
    Q_PROPERTY(QString sort_alpha_down READ sort_alpha_down CONSTANT);
    QString sort_alpha_down() const { return QString::fromUtf8("\uf15d"); }
    Q_PROPERTY(QString sort_alpha_up READ sort_alpha_up CONSTANT);
    QString sort_alpha_up() const { return QString::fromUtf8("\uf15e"); }
    Q_PROPERTY(QString sort_amount_down READ sort_amount_down CONSTANT);
    QString sort_amount_down() const { return QString::fromUtf8("\uf160"); }
    Q_PROPERTY(QString sort_amount_up READ sort_amount_up CONSTANT);
    QString sort_amount_up() const { return QString::fromUtf8("\uf161"); }
    Q_PROPERTY(QString sort_numeric_down READ sort_numeric_down CONSTANT);
    QString sort_numeric_down() const { return QString::fromUtf8("\uf162"); }
    Q_PROPERTY(QString sort_numeric_up READ sort_numeric_up CONSTANT);
    QString sort_numeric_up() const { return QString::fromUtf8("\uf163"); }
    Q_PROPERTY(QString female READ female CONSTANT);
    QString female() const { return QString::fromUtf8("\uf182"); }
    Q_PROPERTY(QString male READ male CONSTANT);
    QString male() const { return QString::fromUtf8("\uf183"); }
    Q_PROPERTY(QString archive READ archive CONSTANT);
    QString archive() const { return QString::fromUtf8("\uf187"); }
    Q_PROPERTY(QString bug READ bug CONSTANT);
    QString bug() const { return QString::fromUtf8("\uf188"); }
    Q_PROPERTY(QString wheelchair READ wheelchair CONSTANT);
    QString wheelchair() const { return QString::fromUtf8("\uf193"); }
    Q_PROPERTY(QString lira_sign READ lira_sign CONSTANT);
    QString lira_sign() const { return QString::fromUtf8("\uf195"); }
    Q_PROPERTY(QString space_shuttle READ space_shuttle CONSTANT);
    QString space_shuttle() const { return QString::fromUtf8("\uf197"); }
    Q_PROPERTY(QString envelope_square READ envelope_square CONSTANT);
    QString envelope_square() const { return QString::fromUtf8("\uf199"); }
    Q_PROPERTY(QString university READ university CONSTANT);
    QString university() const { return QString::fromUtf8("\uf19c"); }
    Q_PROPERTY(QString graduation_cap READ graduation_cap CONSTANT);
    QString graduation_cap() const { return QString::fromUtf8("\uf19d"); }
    Q_PROPERTY(QString language READ language CONSTANT);
    QString language() const { return QString::fromUtf8("\uf1ab"); }
    Q_PROPERTY(QString fax READ fax CONSTANT);
    QString fax() const { return QString::fromUtf8("\uf1ac"); }
    Q_PROPERTY(QString child READ child CONSTANT);
    QString child() const { return QString::fromUtf8("\uf1ae"); }
    Q_PROPERTY(QString paw READ paw CONSTANT);
    QString paw() const { return QString::fromUtf8("\uf1b0"); }
    Q_PROPERTY(QString cube READ cube CONSTANT);
    QString cube() const { return QString::fromUtf8("\uf1b2"); }
    Q_PROPERTY(QString cubes READ cubes CONSTANT);
    QString cubes() const { return QString::fromUtf8("\uf1b3"); }
    Q_PROPERTY(QString recycle READ recycle CONSTANT);
    QString recycle() const { return QString::fromUtf8("\uf1b8"); }
    Q_PROPERTY(QString car READ car CONSTANT);
    QString car() const { return QString::fromUtf8("\uf1b9"); }
    Q_PROPERTY(QString taxi READ taxi CONSTANT);
    QString taxi() const { return QString::fromUtf8("\uf1ba"); }
    Q_PROPERTY(QString tree READ tree CONSTANT);
    QString tree() const { return QString::fromUtf8("\uf1bb"); }
    Q_PROPERTY(QString database READ database CONSTANT);
    QString database() const { return QString::fromUtf8("\uf1c0"); }
    Q_PROPERTY(QString circle_notch READ circle_notch CONSTANT);
    QString circle_notch() const { return QString::fromUtf8("\uf1ce"); }
    Q_PROPERTY(QString history READ history CONSTANT);
    QString history() const { return QString::fromUtf8("\uf1da"); }
    Q_PROPERTY(QString heading READ heading CONSTANT);
    QString heading() const { return QString::fromUtf8("\uf1dc"); }
    Q_PROPERTY(QString paragraph READ paragraph CONSTANT);
    QString paragraph() const { return QString::fromUtf8("\uf1dd"); }
    Q_PROPERTY(QString sliders_h READ sliders_h CONSTANT);
    QString sliders_h() const { return QString::fromUtf8("\uf1de"); }
    Q_PROPERTY(QString share_alt READ share_alt CONSTANT);
    QString share_alt() const { return QString::fromUtf8("\uf1e0"); }
    Q_PROPERTY(QString share_alt_square READ share_alt_square CONSTANT);
    QString share_alt_square() const { return QString::fromUtf8("\uf1e1"); }
    Q_PROPERTY(QString bomb READ bomb CONSTANT);
    QString bomb() const { return QString::fromUtf8("\uf1e2"); }
    Q_PROPERTY(QString tty READ tty CONSTANT);
    QString tty() const { return QString::fromUtf8("\uf1e4"); }
    Q_PROPERTY(QString binoculars READ binoculars CONSTANT);
    QString binoculars() const { return QString::fromUtf8("\uf1e5"); }
    Q_PROPERTY(QString plug READ plug CONSTANT);
    QString plug() const { return QString::fromUtf8("\uf1e6"); }
    Q_PROPERTY(QString wifi READ wifi CONSTANT);
    QString wifi() const { return QString::fromUtf8("\uf1eb"); }
    Q_PROPERTY(QString calculator READ calculator CONSTANT);
    QString calculator() const { return QString::fromUtf8("\uf1ec"); }
    Q_PROPERTY(QString trash READ trash CONSTANT);
    QString trash() const { return QString::fromUtf8("\uf1f8"); }
    Q_PROPERTY(QString at READ at CONSTANT);
    QString at() const { return QString::fromUtf8("\uf1fa"); }
    Q_PROPERTY(QString eye_dropper READ eye_dropper CONSTANT);
    QString eye_dropper() const { return QString::fromUtf8("\uf1fb"); }
    Q_PROPERTY(QString paint_brush READ paint_brush CONSTANT);
    QString paint_brush() const { return QString::fromUtf8("\uf1fc"); }
    Q_PROPERTY(QString birthday_cake READ birthday_cake CONSTANT);
    QString birthday_cake() const { return QString::fromUtf8("\uf1fd"); }
    Q_PROPERTY(QString chart_area READ chart_area CONSTANT);
    QString chart_area() const { return QString::fromUtf8("\uf1fe"); }
    Q_PROPERTY(QString chart_pie READ chart_pie CONSTANT);
    QString chart_pie() const { return QString::fromUtf8("\uf200"); }
    Q_PROPERTY(QString chart_line READ chart_line CONSTANT);
    QString chart_line() const { return QString::fromUtf8("\uf201"); }
    Q_PROPERTY(QString toggle_off READ toggle_off CONSTANT);
    QString toggle_off() const { return QString::fromUtf8("\uf204"); }
    Q_PROPERTY(QString toggle_on READ toggle_on CONSTANT);
    QString toggle_on() const { return QString::fromUtf8("\uf205"); }
    Q_PROPERTY(QString bicycle READ bicycle CONSTANT);
    QString bicycle() const { return QString::fromUtf8("\uf206"); }
    Q_PROPERTY(QString bus READ bus CONSTANT);
    QString bus() const { return QString::fromUtf8("\uf207"); }
    Q_PROPERTY(QString shekel_sign READ shekel_sign CONSTANT);
    QString shekel_sign() const { return QString::fromUtf8("\uf20b"); }
    Q_PROPERTY(QString cart_plus READ cart_plus CONSTANT);
    QString cart_plus() const { return QString::fromUtf8("\uf217"); }
    Q_PROPERTY(QString cart_arrow_down READ cart_arrow_down CONSTANT);
    QString cart_arrow_down() const { return QString::fromUtf8("\uf218"); }
    Q_PROPERTY(QString ship READ ship CONSTANT);
    QString ship() const { return QString::fromUtf8("\uf21a"); }
    Q_PROPERTY(QString user_secret READ user_secret CONSTANT);
    QString user_secret() const { return QString::fromUtf8("\uf21b"); }
    Q_PROPERTY(QString motorcycle READ motorcycle CONSTANT);
    QString motorcycle() const { return QString::fromUtf8("\uf21c"); }
    Q_PROPERTY(QString street_view READ street_view CONSTANT);
    QString street_view() const { return QString::fromUtf8("\uf21d"); }
    Q_PROPERTY(QString heartbeat READ heartbeat CONSTANT);
    QString heartbeat() const { return QString::fromUtf8("\uf21e"); }
    Q_PROPERTY(QString venus READ venus CONSTANT);
    QString venus() const { return QString::fromUtf8("\uf221"); }
    Q_PROPERTY(QString mars READ mars CONSTANT);
    QString mars() const { return QString::fromUtf8("\uf222"); }
    Q_PROPERTY(QString mercury READ mercury CONSTANT);
    QString mercury() const { return QString::fromUtf8("\uf223"); }
    Q_PROPERTY(QString transgender READ transgender CONSTANT);
    QString transgender() const { return QString::fromUtf8("\uf224"); }
    Q_PROPERTY(QString transgender_alt READ transgender_alt CONSTANT);
    QString transgender_alt() const { return QString::fromUtf8("\uf225"); }
    Q_PROPERTY(QString venus_double READ venus_double CONSTANT);
    QString venus_double() const { return QString::fromUtf8("\uf226"); }
    Q_PROPERTY(QString mars_double READ mars_double CONSTANT);
    QString mars_double() const { return QString::fromUtf8("\uf227"); }
    Q_PROPERTY(QString venus_mars READ venus_mars CONSTANT);
    QString venus_mars() const { return QString::fromUtf8("\uf228"); }
    Q_PROPERTY(QString mars_stroke READ mars_stroke CONSTANT);
    QString mars_stroke() const { return QString::fromUtf8("\uf229"); }
    Q_PROPERTY(QString mars_stroke_v READ mars_stroke_v CONSTANT);
    QString mars_stroke_v() const { return QString::fromUtf8("\uf22a"); }
    Q_PROPERTY(QString mars_stroke_h READ mars_stroke_h CONSTANT);
    QString mars_stroke_h() const { return QString::fromUtf8("\uf22b"); }
    Q_PROPERTY(QString neuter READ neuter CONSTANT);
    QString neuter() const { return QString::fromUtf8("\uf22c"); }
    Q_PROPERTY(QString genderless READ genderless CONSTANT);
    QString genderless() const { return QString::fromUtf8("\uf22d"); }
    Q_PROPERTY(QString server READ server CONSTANT);
    QString server() const { return QString::fromUtf8("\uf233"); }
    Q_PROPERTY(QString user_plus READ user_plus CONSTANT);
    QString user_plus() const { return QString::fromUtf8("\uf234"); }
    Q_PROPERTY(QString user_times READ user_times CONSTANT);
    QString user_times() const { return QString::fromUtf8("\uf235"); }
    Q_PROPERTY(QString bed READ bed CONSTANT);
    QString bed() const { return QString::fromUtf8("\uf236"); }
    Q_PROPERTY(QString train READ train CONSTANT);
    QString train() const { return QString::fromUtf8("\uf238"); }
    Q_PROPERTY(QString subway READ subway CONSTANT);
    QString subway() const { return QString::fromUtf8("\uf239"); }
    Q_PROPERTY(QString battery_full READ battery_full CONSTANT);
    QString battery_full() const { return QString::fromUtf8("\uf240"); }
    Q_PROPERTY(QString battery_three_quarters READ battery_three_quarters CONSTANT);
    QString battery_three_quarters() const { return QString::fromUtf8("\uf241"); }
    Q_PROPERTY(QString battery_half READ battery_half CONSTANT);
    QString battery_half() const { return QString::fromUtf8("\uf242"); }
    Q_PROPERTY(QString battery_quarter READ battery_quarter CONSTANT);
    QString battery_quarter() const { return QString::fromUtf8("\uf243"); }
    Q_PROPERTY(QString battery_empty READ battery_empty CONSTANT);
    QString battery_empty() const { return QString::fromUtf8("\uf244"); }
    Q_PROPERTY(QString mouse_pointer READ mouse_pointer CONSTANT);
    QString mouse_pointer() const { return QString::fromUtf8("\uf245"); }
    Q_PROPERTY(QString i_cursor READ i_cursor CONSTANT);
    QString i_cursor() const { return QString::fromUtf8("\uf246"); }
    Q_PROPERTY(QString balance_scale READ balance_scale CONSTANT);
    QString balance_scale() const { return QString::fromUtf8("\uf24e"); }
    Q_PROPERTY(QString hourglass_start READ hourglass_start CONSTANT);
    QString hourglass_start() const { return QString::fromUtf8("\uf251"); }
    Q_PROPERTY(QString hourglass_half READ hourglass_half CONSTANT);
    QString hourglass_half() const { return QString::fromUtf8("\uf252"); }
    Q_PROPERTY(QString hourglass_end READ hourglass_end CONSTANT);
    QString hourglass_end() const { return QString::fromUtf8("\uf253"); }
    Q_PROPERTY(QString trademark READ trademark CONSTANT);
    QString trademark() const { return QString::fromUtf8("\uf25c"); }
    Q_PROPERTY(QString tv READ tv CONSTANT);
    QString tv() const { return QString::fromUtf8("\uf26c"); }
    Q_PROPERTY(QString industry READ industry CONSTANT);
    QString industry() const { return QString::fromUtf8("\uf275"); }
    Q_PROPERTY(QString map_pin READ map_pin CONSTANT);
    QString map_pin() const { return QString::fromUtf8("\uf276"); }
    Q_PROPERTY(QString map_signs READ map_signs CONSTANT);
    QString map_signs() const { return QString::fromUtf8("\uf277"); }
    Q_PROPERTY(QString shopping_bag READ shopping_bag CONSTANT);
    QString shopping_bag() const { return QString::fromUtf8("\uf290"); }
    Q_PROPERTY(QString shopping_basket READ shopping_basket CONSTANT);
    QString shopping_basket() const { return QString::fromUtf8("\uf291"); }
    Q_PROPERTY(QString hashtag READ hashtag CONSTANT);
    QString hashtag() const { return QString::fromUtf8("\uf292"); }
    Q_PROPERTY(QString percent READ percent CONSTANT);
    QString percent() const { return QString::fromUtf8("\uf295"); }
    Q_PROPERTY(QString universal_access READ universal_access CONSTANT);
    QString universal_access() const { return QString::fromUtf8("\uf29a"); }
    Q_PROPERTY(QString blind READ blind CONSTANT);
    QString blind() const { return QString::fromUtf8("\uf29d"); }
    Q_PROPERTY(QString audio_description READ audio_description CONSTANT);
    QString audio_description() const { return QString::fromUtf8("\uf29e"); }
    Q_PROPERTY(QString phone_volume READ phone_volume CONSTANT);
    QString phone_volume() const { return QString::fromUtf8("\uf2a0"); }
    Q_PROPERTY(QString braille READ braille CONSTANT);
    QString braille() const { return QString::fromUtf8("\uf2a1"); }
    Q_PROPERTY(QString assistive_listening_systems READ assistive_listening_systems CONSTANT);
    QString assistive_listening_systems() const { return QString::fromUtf8("\uf2a2"); }
    Q_PROPERTY(QString american_sign_language_interpreting READ american_sign_language_interpreting CONSTANT);
    QString american_sign_language_interpreting() const { return QString::fromUtf8("\uf2a3"); }
    Q_PROPERTY(QString deaf READ deaf CONSTANT);
    QString deaf() const { return QString::fromUtf8("\uf2a4"); }
    Q_PROPERTY(QString sign_language READ sign_language CONSTANT);
    QString sign_language() const { return QString::fromUtf8("\uf2a7"); }
    Q_PROPERTY(QString low_vision READ low_vision CONSTANT);
    QString low_vision() const { return QString::fromUtf8("\uf2a8"); }
    Q_PROPERTY(QString thermometer_full READ thermometer_full CONSTANT);
    QString thermometer_full() const { return QString::fromUtf8("\uf2c7"); }
    Q_PROPERTY(QString thermometer_three_quarters READ thermometer_three_quarters CONSTANT);
    QString thermometer_three_quarters() const { return QString::fromUtf8("\uf2c8"); }
    Q_PROPERTY(QString thermometer_half READ thermometer_half CONSTANT);
    QString thermometer_half() const { return QString::fromUtf8("\uf2c9"); }
    Q_PROPERTY(QString thermometer_quarter READ thermometer_quarter CONSTANT);
    QString thermometer_quarter() const { return QString::fromUtf8("\uf2ca"); }
    Q_PROPERTY(QString thermometer_empty READ thermometer_empty CONSTANT);
    QString thermometer_empty() const { return QString::fromUtf8("\uf2cb"); }
    Q_PROPERTY(QString shower READ shower CONSTANT);
    QString shower() const { return QString::fromUtf8("\uf2cc"); }
    Q_PROPERTY(QString bath READ bath CONSTANT);
    QString bath() const { return QString::fromUtf8("\uf2cd"); }
    Q_PROPERTY(QString podcast READ podcast CONSTANT);
    QString podcast() const { return QString::fromUtf8("\uf2ce"); }
    Q_PROPERTY(QString microchip READ microchip CONSTANT);
    QString microchip() const { return QString::fromUtf8("\uf2db"); }
    Q_PROPERTY(QString utensil_spoon READ utensil_spoon CONSTANT);
    QString utensil_spoon() const { return QString::fromUtf8("\uf2e5"); }
    Q_PROPERTY(QString utensils READ utensils CONSTANT);
    QString utensils() const { return QString::fromUtf8("\uf2e7"); }
    Q_PROPERTY(QString undo_alt READ undo_alt CONSTANT);
    QString undo_alt() const { return QString::fromUtf8("\uf2ea"); }
    Q_PROPERTY(QString sync_alt READ sync_alt CONSTANT);
    QString sync_alt() const { return QString::fromUtf8("\uf2f1"); }
    Q_PROPERTY(QString stopwatch READ stopwatch CONSTANT);
    QString stopwatch() const { return QString::fromUtf8("\uf2f2"); }
    Q_PROPERTY(QString sign_out_alt READ sign_out_alt CONSTANT);
    QString sign_out_alt() const { return QString::fromUtf8("\uf2f5"); }
    Q_PROPERTY(QString sign_in_alt READ sign_in_alt CONSTANT);
    QString sign_in_alt() const { return QString::fromUtf8("\uf2f6"); }
    Q_PROPERTY(QString redo_alt READ redo_alt CONSTANT);
    QString redo_alt() const { return QString::fromUtf8("\uf2f9"); }
    Q_PROPERTY(QString poo READ poo CONSTANT);
    QString poo() const { return QString::fromUtf8("\uf2fe"); }
    Q_PROPERTY(QString pencil_alt READ pencil_alt CONSTANT);
    QString pencil_alt() const { return QString::fromUtf8("\uf303"); }
    Q_PROPERTY(QString pen READ pen CONSTANT);
    QString pen() const { return QString::fromUtf8("\uf304"); }
    Q_PROPERTY(QString pen_alt READ pen_alt CONSTANT);
    QString pen_alt() const { return QString::fromUtf8("\uf305"); }
    Q_PROPERTY(QString long_arrow_alt_down READ long_arrow_alt_down CONSTANT);
    QString long_arrow_alt_down() const { return QString::fromUtf8("\uf309"); }
    Q_PROPERTY(QString long_arrow_alt_left READ long_arrow_alt_left CONSTANT);
    QString long_arrow_alt_left() const { return QString::fromUtf8("\uf30a"); }
    Q_PROPERTY(QString long_arrow_alt_right READ long_arrow_alt_right CONSTANT);
    QString long_arrow_alt_right() const { return QString::fromUtf8("\uf30b"); }
    Q_PROPERTY(QString long_arrow_alt_up READ long_arrow_alt_up CONSTANT);
    QString long_arrow_alt_up() const { return QString::fromUtf8("\uf30c"); }
    Q_PROPERTY(QString expand_arrows_alt READ expand_arrows_alt CONSTANT);
    QString expand_arrows_alt() const { return QString::fromUtf8("\uf31e"); }
    Q_PROPERTY(QString arrows_alt_h READ arrows_alt_h CONSTANT);
    QString arrows_alt_h() const { return QString::fromUtf8("\uf337"); }
    Q_PROPERTY(QString arrows_alt_v READ arrows_alt_v CONSTANT);
    QString arrows_alt_v() const { return QString::fromUtf8("\uf338"); }
    Q_PROPERTY(QString external_link_alt READ external_link_alt CONSTANT);
    QString external_link_alt() const { return QString::fromUtf8("\uf35d"); }
    Q_PROPERTY(QString external_link_square_alt READ external_link_square_alt CONSTANT);
    QString external_link_square_alt() const { return QString::fromUtf8("\uf360"); }
    Q_PROPERTY(QString exchange_alt READ exchange_alt CONSTANT);
    QString exchange_alt() const { return QString::fromUtf8("\uf362"); }
    Q_PROPERTY(QString cloud_download_alt READ cloud_download_alt CONSTANT);
    QString cloud_download_alt() const { return QString::fromUtf8("\uf381"); }
    Q_PROPERTY(QString cloud_upload_alt READ cloud_upload_alt CONSTANT);
    QString cloud_upload_alt() const { return QString::fromUtf8("\uf382"); }
    Q_PROPERTY(QString level_down_alt READ level_down_alt CONSTANT);
    QString level_down_alt() const { return QString::fromUtf8("\uf3be"); }
    Q_PROPERTY(QString level_up_alt READ level_up_alt CONSTANT);
    QString level_up_alt() const { return QString::fromUtf8("\uf3bf"); }
    Q_PROPERTY(QString lock_open READ lock_open CONSTANT);
    QString lock_open() const { return QString::fromUtf8("\uf3c1"); }
    Q_PROPERTY(QString map_marker_alt READ map_marker_alt CONSTANT);
    QString map_marker_alt() const { return QString::fromUtf8("\uf3c5"); }
    Q_PROPERTY(QString microphone_alt READ microphone_alt CONSTANT);
    QString microphone_alt() const { return QString::fromUtf8("\uf3c9"); }
    Q_PROPERTY(QString mobile_alt READ mobile_alt CONSTANT);
    QString mobile_alt() const { return QString::fromUtf8("\uf3cd"); }
    Q_PROPERTY(QString phone_slash READ phone_slash CONSTANT);
    QString phone_slash() const { return QString::fromUtf8("\uf3dd"); }
    Q_PROPERTY(QString portrait READ portrait CONSTANT);
    QString portrait() const { return QString::fromUtf8("\uf3e0"); }
    Q_PROPERTY(QString reply READ reply CONSTANT);
    QString reply() const { return QString::fromUtf8("\uf3e5"); }
    Q_PROPERTY(QString shield_alt READ shield_alt CONSTANT);
    QString shield_alt() const { return QString::fromUtf8("\uf3ed"); }
    Q_PROPERTY(QString tablet_alt READ tablet_alt CONSTANT);
    QString tablet_alt() const { return QString::fromUtf8("\uf3fa"); }
    Q_PROPERTY(QString tachometer_alt READ tachometer_alt CONSTANT);
    QString tachometer_alt() const { return QString::fromUtf8("\uf3fd"); }
    Q_PROPERTY(QString ticket_alt READ ticket_alt CONSTANT);
    QString ticket_alt() const { return QString::fromUtf8("\uf3ff"); }
    Q_PROPERTY(QString user_alt READ user_alt CONSTANT);
    QString user_alt() const { return QString::fromUtf8("\uf406"); }
    Q_PROPERTY(QString compress_alt READ compress_alt CONSTANT);
    QString compress_alt() const { return QString::fromUtf8("\uf422"); }
    Q_PROPERTY(QString expand_alt READ expand_alt CONSTANT);
    QString expand_alt() const { return QString::fromUtf8("\uf424"); }
    Q_PROPERTY(QString baseball_ball READ baseball_ball CONSTANT);
    QString baseball_ball() const { return QString::fromUtf8("\uf433"); }
    Q_PROPERTY(QString basketball_ball READ basketball_ball CONSTANT);
    QString basketball_ball() const { return QString::fromUtf8("\uf434"); }
    Q_PROPERTY(QString bowling_ball READ bowling_ball CONSTANT);
    QString bowling_ball() const { return QString::fromUtf8("\uf436"); }
    Q_PROPERTY(QString chess READ chess CONSTANT);
    QString chess() const { return QString::fromUtf8("\uf439"); }
    Q_PROPERTY(QString chess_bishop READ chess_bishop CONSTANT);
    QString chess_bishop() const { return QString::fromUtf8("\uf43a"); }
    Q_PROPERTY(QString chess_board READ chess_board CONSTANT);
    QString chess_board() const { return QString::fromUtf8("\uf43c"); }
    Q_PROPERTY(QString chess_king READ chess_king CONSTANT);
    QString chess_king() const { return QString::fromUtf8("\uf43f"); }
    Q_PROPERTY(QString chess_knight READ chess_knight CONSTANT);
    QString chess_knight() const { return QString::fromUtf8("\uf441"); }
    Q_PROPERTY(QString chess_pawn READ chess_pawn CONSTANT);
    QString chess_pawn() const { return QString::fromUtf8("\uf443"); }
    Q_PROPERTY(QString chess_queen READ chess_queen CONSTANT);
    QString chess_queen() const { return QString::fromUtf8("\uf445"); }
    Q_PROPERTY(QString chess_rook READ chess_rook CONSTANT);
    QString chess_rook() const { return QString::fromUtf8("\uf447"); }
    Q_PROPERTY(QString dumbbell READ dumbbell CONSTANT);
    QString dumbbell() const { return QString::fromUtf8("\uf44b"); }
    Q_PROPERTY(QString football_ball READ football_ball CONSTANT);
    QString football_ball() const { return QString::fromUtf8("\uf44e"); }
    Q_PROPERTY(QString golf_ball READ golf_ball CONSTANT);
    QString golf_ball() const { return QString::fromUtf8("\uf450"); }
    Q_PROPERTY(QString hockey_puck READ hockey_puck CONSTANT);
    QString hockey_puck() const { return QString::fromUtf8("\uf453"); }
    Q_PROPERTY(QString quidditch READ quidditch CONSTANT);
    QString quidditch() const { return QString::fromUtf8("\uf458"); }
    Q_PROPERTY(QString square_full READ square_full CONSTANT);
    QString square_full() const { return QString::fromUtf8("\uf45c"); }
    Q_PROPERTY(QString table_tennis READ table_tennis CONSTANT);
    QString table_tennis() const { return QString::fromUtf8("\uf45d"); }
    Q_PROPERTY(QString volleyball_ball READ volleyball_ball CONSTANT);
    QString volleyball_ball() const { return QString::fromUtf8("\uf45f"); }
    Q_PROPERTY(QString allergies READ allergies CONSTANT);
    QString allergies() const { return QString::fromUtf8("\uf461"); }
    Q_PROPERTY(QString band_aid READ band_aid CONSTANT);
    QString band_aid() const { return QString::fromUtf8("\uf462"); }
    Q_PROPERTY(QString box READ box CONSTANT);
    QString box() const { return QString::fromUtf8("\uf466"); }
    Q_PROPERTY(QString boxes READ boxes CONSTANT);
    QString boxes() const { return QString::fromUtf8("\uf468"); }
    Q_PROPERTY(QString briefcase_medical READ briefcase_medical CONSTANT);
    QString briefcase_medical() const { return QString::fromUtf8("\uf469"); }
    Q_PROPERTY(QString burn READ burn CONSTANT);
    QString burn() const { return QString::fromUtf8("\uf46a"); }
    Q_PROPERTY(QString capsules READ capsules CONSTANT);
    QString capsules() const { return QString::fromUtf8("\uf46b"); }
    Q_PROPERTY(QString clipboard_check READ clipboard_check CONSTANT);
    QString clipboard_check() const { return QString::fromUtf8("\uf46c"); }
    Q_PROPERTY(QString clipboard_list READ clipboard_list CONSTANT);
    QString clipboard_list() const { return QString::fromUtf8("\uf46d"); }
    Q_PROPERTY(QString diagnoses READ diagnoses CONSTANT);
    QString diagnoses() const { return QString::fromUtf8("\uf470"); }
    Q_PROPERTY(QString dna READ dna CONSTANT);
    QString dna() const { return QString::fromUtf8("\uf471"); }
    Q_PROPERTY(QString dolly READ dolly CONSTANT);
    QString dolly() const { return QString::fromUtf8("\uf472"); }
    Q_PROPERTY(QString dolly_flatbed READ dolly_flatbed CONSTANT);
    QString dolly_flatbed() const { return QString::fromUtf8("\uf474"); }
    Q_PROPERTY(QString file_medical READ file_medical CONSTANT);
    QString file_medical() const { return QString::fromUtf8("\uf477"); }
    Q_PROPERTY(QString file_medical_alt READ file_medical_alt CONSTANT);
    QString file_medical_alt() const { return QString::fromUtf8("\uf478"); }
    Q_PROPERTY(QString first_aid READ first_aid CONSTANT);
    QString first_aid() const { return QString::fromUtf8("\uf479"); }
    Q_PROPERTY(QString hospital_alt READ hospital_alt CONSTANT);
    QString hospital_alt() const { return QString::fromUtf8("\uf47d"); }
    Q_PROPERTY(QString hospital_symbol READ hospital_symbol CONSTANT);
    QString hospital_symbol() const { return QString::fromUtf8("\uf47e"); }
    Q_PROPERTY(QString id_card_alt READ id_card_alt CONSTANT);
    QString id_card_alt() const { return QString::fromUtf8("\uf47f"); }
    Q_PROPERTY(QString notes_medical READ notes_medical CONSTANT);
    QString notes_medical() const { return QString::fromUtf8("\uf481"); }
    Q_PROPERTY(QString pallet READ pallet CONSTANT);
    QString pallet() const { return QString::fromUtf8("\uf482"); }
    Q_PROPERTY(QString pills READ pills CONSTANT);
    QString pills() const { return QString::fromUtf8("\uf484"); }
    Q_PROPERTY(QString prescription_bottle READ prescription_bottle CONSTANT);
    QString prescription_bottle() const { return QString::fromUtf8("\uf485"); }
    Q_PROPERTY(QString prescription_bottle_alt READ prescription_bottle_alt CONSTANT);
    QString prescription_bottle_alt() const { return QString::fromUtf8("\uf486"); }
    Q_PROPERTY(QString procedures READ procedures CONSTANT);
    QString procedures() const { return QString::fromUtf8("\uf487"); }
    Q_PROPERTY(QString shipping_fast READ shipping_fast CONSTANT);
    QString shipping_fast() const { return QString::fromUtf8("\uf48b"); }
    Q_PROPERTY(QString smoking READ smoking CONSTANT);
    QString smoking() const { return QString::fromUtf8("\uf48d"); }
    Q_PROPERTY(QString syringe READ syringe CONSTANT);
    QString syringe() const { return QString::fromUtf8("\uf48e"); }
    Q_PROPERTY(QString tablets READ tablets CONSTANT);
    QString tablets() const { return QString::fromUtf8("\uf490"); }
    Q_PROPERTY(QString thermometer READ thermometer CONSTANT);
    QString thermometer() const { return QString::fromUtf8("\uf491"); }
    Q_PROPERTY(QString vial READ vial CONSTANT);
    QString vial() const { return QString::fromUtf8("\uf492"); }
    Q_PROPERTY(QString vials READ vials CONSTANT);
    QString vials() const { return QString::fromUtf8("\uf493"); }
    Q_PROPERTY(QString warehouse READ warehouse CONSTANT);
    QString warehouse() const { return QString::fromUtf8("\uf494"); }
    Q_PROPERTY(QString weight READ weight CONSTANT);
    QString weight() const { return QString::fromUtf8("\uf496"); }
    Q_PROPERTY(QString x_ray READ x_ray CONSTANT);
    QString x_ray() const { return QString::fromUtf8("\uf497"); }
    Q_PROPERTY(QString box_open READ box_open CONSTANT);
    QString box_open() const { return QString::fromUtf8("\uf49e"); }
    Q_PROPERTY(QString comment_slash READ comment_slash CONSTANT);
    QString comment_slash() const { return QString::fromUtf8("\uf4b3"); }
    Q_PROPERTY(QString couch READ couch CONSTANT);
    QString couch() const { return QString::fromUtf8("\uf4b8"); }
    Q_PROPERTY(QString donate READ donate CONSTANT);
    QString donate() const { return QString::fromUtf8("\uf4b9"); }
    Q_PROPERTY(QString dove READ dove CONSTANT);
    QString dove() const { return QString::fromUtf8("\uf4ba"); }
    Q_PROPERTY(QString hand_holding READ hand_holding CONSTANT);
    QString hand_holding() const { return QString::fromUtf8("\uf4bd"); }
    Q_PROPERTY(QString hand_holding_heart READ hand_holding_heart CONSTANT);
    QString hand_holding_heart() const { return QString::fromUtf8("\uf4be"); }
    Q_PROPERTY(QString hand_holding_usd READ hand_holding_usd CONSTANT);
    QString hand_holding_usd() const { return QString::fromUtf8("\uf4c0"); }
    Q_PROPERTY(QString hand_holding_water READ hand_holding_water CONSTANT);
    QString hand_holding_water() const { return QString::fromUtf8("\uf4c1"); }
    Q_PROPERTY(QString hands READ hands CONSTANT);
    QString hands() const { return QString::fromUtf8("\uf4c2"); }
    Q_PROPERTY(QString hands_helping READ hands_helping CONSTANT);
    QString hands_helping() const { return QString::fromUtf8("\uf4c4"); }
    Q_PROPERTY(QString parachute_box READ parachute_box CONSTANT);
    QString parachute_box() const { return QString::fromUtf8("\uf4cd"); }
    Q_PROPERTY(QString people_carry READ people_carry CONSTANT);
    QString people_carry() const { return QString::fromUtf8("\uf4ce"); }
    Q_PROPERTY(QString piggy_bank READ piggy_bank CONSTANT);
    QString piggy_bank() const { return QString::fromUtf8("\uf4d3"); }
    Q_PROPERTY(QString ribbon READ ribbon CONSTANT);
    QString ribbon() const { return QString::fromUtf8("\uf4d6"); }
    Q_PROPERTY(QString route READ route CONSTANT);
    QString route() const { return QString::fromUtf8("\uf4d7"); }
    Q_PROPERTY(QString seedling READ seedling CONSTANT);
    QString seedling() const { return QString::fromUtf8("\uf4d8"); }
    Q_PROPERTY(QString sign READ sign CONSTANT);
    QString sign() const { return QString::fromUtf8("\uf4d9"); }
    Q_PROPERTY(QString tape READ tape CONSTANT);
    QString tape() const { return QString::fromUtf8("\uf4db"); }
    Q_PROPERTY(QString truck_loading READ truck_loading CONSTANT);
    QString truck_loading() const { return QString::fromUtf8("\uf4de"); }
    Q_PROPERTY(QString truck_moving READ truck_moving CONSTANT);
    QString truck_moving() const { return QString::fromUtf8("\uf4df"); }
    Q_PROPERTY(QString video_slash READ video_slash CONSTANT);
    QString video_slash() const { return QString::fromUtf8("\uf4e2"); }
    Q_PROPERTY(QString wine_glass READ wine_glass CONSTANT);
    QString wine_glass() const { return QString::fromUtf8("\uf4e3"); }
    Q_PROPERTY(QString user_alt_slash READ user_alt_slash CONSTANT);
    QString user_alt_slash() const { return QString::fromUtf8("\uf4fa"); }
    Q_PROPERTY(QString user_astronaut READ user_astronaut CONSTANT);
    QString user_astronaut() const { return QString::fromUtf8("\uf4fb"); }
    Q_PROPERTY(QString user_check READ user_check CONSTANT);
    QString user_check() const { return QString::fromUtf8("\uf4fc"); }
    Q_PROPERTY(QString user_clock READ user_clock CONSTANT);
    QString user_clock() const { return QString::fromUtf8("\uf4fd"); }
    Q_PROPERTY(QString user_cog READ user_cog CONSTANT);
    QString user_cog() const { return QString::fromUtf8("\uf4fe"); }
    Q_PROPERTY(QString user_edit READ user_edit CONSTANT);
    QString user_edit() const { return QString::fromUtf8("\uf4ff"); }
    Q_PROPERTY(QString user_friends READ user_friends CONSTANT);
    QString user_friends() const { return QString::fromUtf8("\uf500"); }
    Q_PROPERTY(QString user_graduate READ user_graduate CONSTANT);
    QString user_graduate() const { return QString::fromUtf8("\uf501"); }
    Q_PROPERTY(QString user_lock READ user_lock CONSTANT);
    QString user_lock() const { return QString::fromUtf8("\uf502"); }
    Q_PROPERTY(QString user_minus READ user_minus CONSTANT);
    QString user_minus() const { return QString::fromUtf8("\uf503"); }
    Q_PROPERTY(QString user_ninja READ user_ninja CONSTANT);
    QString user_ninja() const { return QString::fromUtf8("\uf504"); }
    Q_PROPERTY(QString user_shield READ user_shield CONSTANT);
    QString user_shield() const { return QString::fromUtf8("\uf505"); }
    Q_PROPERTY(QString user_slash READ user_slash CONSTANT);
    QString user_slash() const { return QString::fromUtf8("\uf506"); }
    Q_PROPERTY(QString user_tag READ user_tag CONSTANT);
    QString user_tag() const { return QString::fromUtf8("\uf507"); }
    Q_PROPERTY(QString user_tie READ user_tie CONSTANT);
    QString user_tie() const { return QString::fromUtf8("\uf508"); }
    Q_PROPERTY(QString users_cog READ users_cog CONSTANT);
    QString users_cog() const { return QString::fromUtf8("\uf509"); }
    Q_PROPERTY(QString balance_scale_left READ balance_scale_left CONSTANT);
    QString balance_scale_left() const { return QString::fromUtf8("\uf515"); }
    Q_PROPERTY(QString balance_scale_right READ balance_scale_right CONSTANT);
    QString balance_scale_right() const { return QString::fromUtf8("\uf516"); }
    Q_PROPERTY(QString blender READ blender CONSTANT);
    QString blender() const { return QString::fromUtf8("\uf517"); }
    Q_PROPERTY(QString book_open READ book_open CONSTANT);
    QString book_open() const { return QString::fromUtf8("\uf518"); }
    Q_PROPERTY(QString broadcast_tower READ broadcast_tower CONSTANT);
    QString broadcast_tower() const { return QString::fromUtf8("\uf519"); }
    Q_PROPERTY(QString broom READ broom CONSTANT);
    QString broom() const { return QString::fromUtf8("\uf51a"); }
    Q_PROPERTY(QString chalkboard READ chalkboard CONSTANT);
    QString chalkboard() const { return QString::fromUtf8("\uf51b"); }
    Q_PROPERTY(QString chalkboard_teacher READ chalkboard_teacher CONSTANT);
    QString chalkboard_teacher() const { return QString::fromUtf8("\uf51c"); }
    Q_PROPERTY(QString church READ church CONSTANT);
    QString church() const { return QString::fromUtf8("\uf51d"); }
    Q_PROPERTY(QString coins READ coins CONSTANT);
    QString coins() const { return QString::fromUtf8("\uf51e"); }
    Q_PROPERTY(QString compact_disc READ compact_disc CONSTANT);
    QString compact_disc() const { return QString::fromUtf8("\uf51f"); }
    Q_PROPERTY(QString crow READ crow CONSTANT);
    QString crow() const { return QString::fromUtf8("\uf520"); }
    Q_PROPERTY(QString crown READ crown CONSTANT);
    QString crown() const { return QString::fromUtf8("\uf521"); }
    Q_PROPERTY(QString dice READ dice CONSTANT);
    QString dice() const { return QString::fromUtf8("\uf522"); }
    Q_PROPERTY(QString dice_five READ dice_five CONSTANT);
    QString dice_five() const { return QString::fromUtf8("\uf523"); }
    Q_PROPERTY(QString dice_four READ dice_four CONSTANT);
    QString dice_four() const { return QString::fromUtf8("\uf524"); }
    Q_PROPERTY(QString dice_one READ dice_one CONSTANT);
    QString dice_one() const { return QString::fromUtf8("\uf525"); }
    Q_PROPERTY(QString dice_six READ dice_six CONSTANT);
    QString dice_six() const { return QString::fromUtf8("\uf526"); }
    Q_PROPERTY(QString dice_three READ dice_three CONSTANT);
    QString dice_three() const { return QString::fromUtf8("\uf527"); }
    Q_PROPERTY(QString dice_two READ dice_two CONSTANT);
    QString dice_two() const { return QString::fromUtf8("\uf528"); }
    Q_PROPERTY(QString divide READ divide CONSTANT);
    QString divide() const { return QString::fromUtf8("\uf529"); }
    Q_PROPERTY(QString door_closed READ door_closed CONSTANT);
    QString door_closed() const { return QString::fromUtf8("\uf52a"); }
    Q_PROPERTY(QString door_open READ door_open CONSTANT);
    QString door_open() const { return QString::fromUtf8("\uf52b"); }
    Q_PROPERTY(QString equals READ equals CONSTANT);
    QString equals() const { return QString::fromUtf8("\uf52c"); }
    Q_PROPERTY(QString feather READ feather CONSTANT);
    QString feather() const { return QString::fromUtf8("\uf52d"); }
    Q_PROPERTY(QString frog READ frog CONSTANT);
    QString frog() const { return QString::fromUtf8("\uf52e"); }
    Q_PROPERTY(QString gas_pump READ gas_pump CONSTANT);
    QString gas_pump() const { return QString::fromUtf8("\uf52f"); }
    Q_PROPERTY(QString glasses READ glasses CONSTANT);
    QString glasses() const { return QString::fromUtf8("\uf530"); }
    Q_PROPERTY(QString greater_than READ greater_than CONSTANT);
    QString greater_than() const { return QString::fromUtf8("\uf531"); }
    Q_PROPERTY(QString greater_than_equal READ greater_than_equal CONSTANT);
    QString greater_than_equal() const { return QString::fromUtf8("\uf532"); }
    Q_PROPERTY(QString helicopter READ helicopter CONSTANT);
    QString helicopter() const { return QString::fromUtf8("\uf533"); }
    Q_PROPERTY(QString infinity READ infinity CONSTANT);
    QString infinity() const { return QString::fromUtf8("\uf534"); }
    Q_PROPERTY(QString kiwi_bird READ kiwi_bird CONSTANT);
    QString kiwi_bird() const { return QString::fromUtf8("\uf535"); }
    Q_PROPERTY(QString less_than READ less_than CONSTANT);
    QString less_than() const { return QString::fromUtf8("\uf536"); }
    Q_PROPERTY(QString less_than_equal READ less_than_equal CONSTANT);
    QString less_than_equal() const { return QString::fromUtf8("\uf537"); }
    Q_PROPERTY(QString memory READ memory CONSTANT);
    QString memory() const { return QString::fromUtf8("\uf538"); }
    Q_PROPERTY(QString microphone_alt_slash READ microphone_alt_slash CONSTANT);
    QString microphone_alt_slash() const { return QString::fromUtf8("\uf539"); }
    Q_PROPERTY(QString money_bill_wave READ money_bill_wave CONSTANT);
    QString money_bill_wave() const { return QString::fromUtf8("\uf53a"); }
    Q_PROPERTY(QString money_bill_wave_alt READ money_bill_wave_alt CONSTANT);
    QString money_bill_wave_alt() const { return QString::fromUtf8("\uf53b"); }
    Q_PROPERTY(QString money_check READ money_check CONSTANT);
    QString money_check() const { return QString::fromUtf8("\uf53c"); }
    Q_PROPERTY(QString money_check_alt READ money_check_alt CONSTANT);
    QString money_check_alt() const { return QString::fromUtf8("\uf53d"); }
    Q_PROPERTY(QString not_equal READ not_equal CONSTANT);
    QString not_equal() const { return QString::fromUtf8("\uf53e"); }
    Q_PROPERTY(QString palette READ palette CONSTANT);
    QString palette() const { return QString::fromUtf8("\uf53f"); }
    Q_PROPERTY(QString parking READ parking CONSTANT);
    QString parking() const { return QString::fromUtf8("\uf540"); }
    Q_PROPERTY(QString percentage READ percentage CONSTANT);
    QString percentage() const { return QString::fromUtf8("\uf541"); }
    Q_PROPERTY(QString project_diagram READ project_diagram CONSTANT);
    QString project_diagram() const { return QString::fromUtf8("\uf542"); }
    Q_PROPERTY(QString receipt READ receipt CONSTANT);
    QString receipt() const { return QString::fromUtf8("\uf543"); }
    Q_PROPERTY(QString robot READ robot CONSTANT);
    QString robot() const { return QString::fromUtf8("\uf544"); }
    Q_PROPERTY(QString ruler READ ruler CONSTANT);
    QString ruler() const { return QString::fromUtf8("\uf545"); }
    Q_PROPERTY(QString ruler_combined READ ruler_combined CONSTANT);
    QString ruler_combined() const { return QString::fromUtf8("\uf546"); }
    Q_PROPERTY(QString ruler_horizontal READ ruler_horizontal CONSTANT);
    QString ruler_horizontal() const { return QString::fromUtf8("\uf547"); }
    Q_PROPERTY(QString ruler_vertical READ ruler_vertical CONSTANT);
    QString ruler_vertical() const { return QString::fromUtf8("\uf548"); }
    Q_PROPERTY(QString school READ school CONSTANT);
    QString school() const { return QString::fromUtf8("\uf549"); }
    Q_PROPERTY(QString screwdriver READ screwdriver CONSTANT);
    QString screwdriver() const { return QString::fromUtf8("\uf54a"); }
    Q_PROPERTY(QString shoe_prints READ shoe_prints CONSTANT);
    QString shoe_prints() const { return QString::fromUtf8("\uf54b"); }
    Q_PROPERTY(QString skull READ skull CONSTANT);
    QString skull() const { return QString::fromUtf8("\uf54c"); }
    Q_PROPERTY(QString smoking_ban READ smoking_ban CONSTANT);
    QString smoking_ban() const { return QString::fromUtf8("\uf54d"); }
    Q_PROPERTY(QString store READ store CONSTANT);
    QString store() const { return QString::fromUtf8("\uf54e"); }
    Q_PROPERTY(QString store_alt READ store_alt CONSTANT);
    QString store_alt() const { return QString::fromUtf8("\uf54f"); }
    Q_PROPERTY(QString stream READ stream CONSTANT);
    QString stream() const { return QString::fromUtf8("\uf550"); }
    Q_PROPERTY(QString stroopwafel READ stroopwafel CONSTANT);
    QString stroopwafel() const { return QString::fromUtf8("\uf551"); }
    Q_PROPERTY(QString toolbox READ toolbox CONSTANT);
    QString toolbox() const { return QString::fromUtf8("\uf552"); }
    Q_PROPERTY(QString tshirt READ tshirt CONSTANT);
    QString tshirt() const { return QString::fromUtf8("\uf553"); }
    Q_PROPERTY(QString walking READ walking CONSTANT);
    QString walking() const { return QString::fromUtf8("\uf554"); }
    Q_PROPERTY(QString wallet READ wallet CONSTANT);
    QString wallet() const { return QString::fromUtf8("\uf555"); }
    Q_PROPERTY(QString archway READ archway CONSTANT);
    QString archway() const { return QString::fromUtf8("\uf557"); }
    Q_PROPERTY(QString atlas READ atlas CONSTANT);
    QString atlas() const { return QString::fromUtf8("\uf558"); }
    Q_PROPERTY(QString award READ award CONSTANT);
    QString award() const { return QString::fromUtf8("\uf559"); }
    Q_PROPERTY(QString backspace READ backspace CONSTANT);
    QString backspace() const { return QString::fromUtf8("\uf55a"); }
    Q_PROPERTY(QString bezier_curve READ bezier_curve CONSTANT);
    QString bezier_curve() const { return QString::fromUtf8("\uf55b"); }
    Q_PROPERTY(QString bong READ bong CONSTANT);
    QString bong() const { return QString::fromUtf8("\uf55c"); }
    Q_PROPERTY(QString brush READ brush CONSTANT);
    QString brush() const { return QString::fromUtf8("\uf55d"); }
    Q_PROPERTY(QString bus_alt READ bus_alt CONSTANT);
    QString bus_alt() const { return QString::fromUtf8("\uf55e"); }
    Q_PROPERTY(QString cannabis READ cannabis CONSTANT);
    QString cannabis() const { return QString::fromUtf8("\uf55f"); }
    Q_PROPERTY(QString check_double READ check_double CONSTANT);
    QString check_double() const { return QString::fromUtf8("\uf560"); }
    Q_PROPERTY(QString cocktail READ cocktail CONSTANT);
    QString cocktail() const { return QString::fromUtf8("\uf561"); }
    Q_PROPERTY(QString concierge_bell READ concierge_bell CONSTANT);
    QString concierge_bell() const { return QString::fromUtf8("\uf562"); }
    Q_PROPERTY(QString cookie READ cookie CONSTANT);
    QString cookie() const { return QString::fromUtf8("\uf563"); }
    Q_PROPERTY(QString cookie_bite READ cookie_bite CONSTANT);
    QString cookie_bite() const { return QString::fromUtf8("\uf564"); }
    Q_PROPERTY(QString crop_alt READ crop_alt CONSTANT);
    QString crop_alt() const { return QString::fromUtf8("\uf565"); }
    Q_PROPERTY(QString digital_tachograph READ digital_tachograph CONSTANT);
    QString digital_tachograph() const { return QString::fromUtf8("\uf566"); }
    Q_PROPERTY(QString drafting_compass READ drafting_compass CONSTANT);
    QString drafting_compass() const { return QString::fromUtf8("\uf568"); }
    Q_PROPERTY(QString drum READ drum CONSTANT);
    QString drum() const { return QString::fromUtf8("\uf569"); }
    Q_PROPERTY(QString drum_steelpan READ drum_steelpan CONSTANT);
    QString drum_steelpan() const { return QString::fromUtf8("\uf56a"); }
    Q_PROPERTY(QString feather_alt READ feather_alt CONSTANT);
    QString feather_alt() const { return QString::fromUtf8("\uf56b"); }
    Q_PROPERTY(QString file_contract READ file_contract CONSTANT);
    QString file_contract() const { return QString::fromUtf8("\uf56c"); }
    Q_PROPERTY(QString file_download READ file_download CONSTANT);
    QString file_download() const { return QString::fromUtf8("\uf56d"); }
    Q_PROPERTY(QString file_export READ file_export CONSTANT);
    QString file_export() const { return QString::fromUtf8("\uf56e"); }
    Q_PROPERTY(QString file_import READ file_import CONSTANT);
    QString file_import() const { return QString::fromUtf8("\uf56f"); }
    Q_PROPERTY(QString file_invoice READ file_invoice CONSTANT);
    QString file_invoice() const { return QString::fromUtf8("\uf570"); }
    Q_PROPERTY(QString file_invoice_dollar READ file_invoice_dollar CONSTANT);
    QString file_invoice_dollar() const { return QString::fromUtf8("\uf571"); }
    Q_PROPERTY(QString file_prescription READ file_prescription CONSTANT);
    QString file_prescription() const { return QString::fromUtf8("\uf572"); }
    Q_PROPERTY(QString file_signature READ file_signature CONSTANT);
    QString file_signature() const { return QString::fromUtf8("\uf573"); }
    Q_PROPERTY(QString file_upload READ file_upload CONSTANT);
    QString file_upload() const { return QString::fromUtf8("\uf574"); }
    Q_PROPERTY(QString fill READ fill CONSTANT);
    QString fill() const { return QString::fromUtf8("\uf575"); }
    Q_PROPERTY(QString fill_drip READ fill_drip CONSTANT);
    QString fill_drip() const { return QString::fromUtf8("\uf576"); }
    Q_PROPERTY(QString fingerprint READ fingerprint CONSTANT);
    QString fingerprint() const { return QString::fromUtf8("\uf577"); }
    Q_PROPERTY(QString fish READ fish CONSTANT);
    QString fish() const { return QString::fromUtf8("\uf578"); }
    Q_PROPERTY(QString glass_martini_alt READ glass_martini_alt CONSTANT);
    QString glass_martini_alt() const { return QString::fromUtf8("\uf57b"); }
    Q_PROPERTY(QString globe_africa READ globe_africa CONSTANT);
    QString globe_africa() const { return QString::fromUtf8("\uf57c"); }
    Q_PROPERTY(QString globe_americas READ globe_americas CONSTANT);
    QString globe_americas() const { return QString::fromUtf8("\uf57d"); }
    Q_PROPERTY(QString globe_asia READ globe_asia CONSTANT);
    QString globe_asia() const { return QString::fromUtf8("\uf57e"); }
    Q_PROPERTY(QString grip_horizontal READ grip_horizontal CONSTANT);
    QString grip_horizontal() const { return QString::fromUtf8("\uf58d"); }
    Q_PROPERTY(QString grip_vertical READ grip_vertical CONSTANT);
    QString grip_vertical() const { return QString::fromUtf8("\uf58e"); }
    Q_PROPERTY(QString headphones_alt READ headphones_alt CONSTANT);
    QString headphones_alt() const { return QString::fromUtf8("\uf58f"); }
    Q_PROPERTY(QString headset READ headset CONSTANT);
    QString headset() const { return QString::fromUtf8("\uf590"); }
    Q_PROPERTY(QString highlighter READ highlighter CONSTANT);
    QString highlighter() const { return QString::fromUtf8("\uf591"); }
    Q_PROPERTY(QString hot_tub READ hot_tub CONSTANT);
    QString hot_tub() const { return QString::fromUtf8("\uf593"); }
    Q_PROPERTY(QString hotel READ hotel CONSTANT);
    QString hotel() const { return QString::fromUtf8("\uf594"); }
    Q_PROPERTY(QString joint READ joint CONSTANT);
    QString joint() const { return QString::fromUtf8("\uf595"); }
    Q_PROPERTY(QString luggage_cart READ luggage_cart CONSTANT);
    QString luggage_cart() const { return QString::fromUtf8("\uf59d"); }
    Q_PROPERTY(QString map_marked READ map_marked CONSTANT);
    QString map_marked() const { return QString::fromUtf8("\uf59f"); }
    Q_PROPERTY(QString map_marked_alt READ map_marked_alt CONSTANT);
    QString map_marked_alt() const { return QString::fromUtf8("\uf5a0"); }
    Q_PROPERTY(QString marker READ marker CONSTANT);
    QString marker() const { return QString::fromUtf8("\uf5a1"); }
    Q_PROPERTY(QString medal READ medal CONSTANT);
    QString medal() const { return QString::fromUtf8("\uf5a2"); }
    Q_PROPERTY(QString monument READ monument CONSTANT);
    QString monument() const { return QString::fromUtf8("\uf5a6"); }
    Q_PROPERTY(QString mortar_pestle READ mortar_pestle CONSTANT);
    QString mortar_pestle() const { return QString::fromUtf8("\uf5a7"); }
    Q_PROPERTY(QString paint_roller READ paint_roller CONSTANT);
    QString paint_roller() const { return QString::fromUtf8("\uf5aa"); }
    Q_PROPERTY(QString passport READ passport CONSTANT);
    QString passport() const { return QString::fromUtf8("\uf5ab"); }
    Q_PROPERTY(QString pen_fancy READ pen_fancy CONSTANT);
    QString pen_fancy() const { return QString::fromUtf8("\uf5ac"); }
    Q_PROPERTY(QString pen_nib READ pen_nib CONSTANT);
    QString pen_nib() const { return QString::fromUtf8("\uf5ad"); }
    Q_PROPERTY(QString pencil_ruler READ pencil_ruler CONSTANT);
    QString pencil_ruler() const { return QString::fromUtf8("\uf5ae"); }
    Q_PROPERTY(QString plane_arrival READ plane_arrival CONSTANT);
    QString plane_arrival() const { return QString::fromUtf8("\uf5af"); }
    Q_PROPERTY(QString plane_departure READ plane_departure CONSTANT);
    QString plane_departure() const { return QString::fromUtf8("\uf5b0"); }
    Q_PROPERTY(QString prescription READ prescription CONSTANT);
    QString prescription() const { return QString::fromUtf8("\uf5b1"); }
    Q_PROPERTY(QString shuttle_van READ shuttle_van CONSTANT);
    QString shuttle_van() const { return QString::fromUtf8("\uf5b6"); }
    Q_PROPERTY(QString signature READ signature CONSTANT);
    QString signature() const { return QString::fromUtf8("\uf5b7"); }
    Q_PROPERTY(QString solar_panel READ solar_panel CONSTANT);
    QString solar_panel() const { return QString::fromUtf8("\uf5ba"); }
    Q_PROPERTY(QString spa READ spa CONSTANT);
    QString spa() const { return QString::fromUtf8("\uf5bb"); }
    Q_PROPERTY(QString splotch READ splotch CONSTANT);
    QString splotch() const { return QString::fromUtf8("\uf5bc"); }
    Q_PROPERTY(QString spray_can READ spray_can CONSTANT);
    QString spray_can() const { return QString::fromUtf8("\uf5bd"); }
    Q_PROPERTY(QString stamp READ stamp CONSTANT);
    QString stamp() const { return QString::fromUtf8("\uf5bf"); }
    Q_PROPERTY(QString star_half_alt READ star_half_alt CONSTANT);
    QString star_half_alt() const { return QString::fromUtf8("\uf5c0"); }
    Q_PROPERTY(QString suitcase_rolling READ suitcase_rolling CONSTANT);
    QString suitcase_rolling() const { return QString::fromUtf8("\uf5c1"); }
    Q_PROPERTY(QString swatchbook READ swatchbook CONSTANT);
    QString swatchbook() const { return QString::fromUtf8("\uf5c3"); }
    Q_PROPERTY(QString swimmer READ swimmer CONSTANT);
    QString swimmer() const { return QString::fromUtf8("\uf5c4"); }
    Q_PROPERTY(QString swimming_pool READ swimming_pool CONSTANT);
    QString swimming_pool() const { return QString::fromUtf8("\uf5c5"); }
    Q_PROPERTY(QString tint_slash READ tint_slash CONSTANT);
    QString tint_slash() const { return QString::fromUtf8("\uf5c7"); }
    Q_PROPERTY(QString tooth READ tooth CONSTANT);
    QString tooth() const { return QString::fromUtf8("\uf5c9"); }
    Q_PROPERTY(QString umbrella_beach READ umbrella_beach CONSTANT);
    QString umbrella_beach() const { return QString::fromUtf8("\uf5ca"); }
    Q_PROPERTY(QString vector_square READ vector_square CONSTANT);
    QString vector_square() const { return QString::fromUtf8("\uf5cb"); }
    Q_PROPERTY(QString weight_hanging READ weight_hanging CONSTANT);
    QString weight_hanging() const { return QString::fromUtf8("\uf5cd"); }
    Q_PROPERTY(QString wine_glass_alt READ wine_glass_alt CONSTANT);
    QString wine_glass_alt() const { return QString::fromUtf8("\uf5ce"); }
    Q_PROPERTY(QString air_freshener READ air_freshener CONSTANT);
    QString air_freshener() const { return QString::fromUtf8("\uf5d0"); }
    Q_PROPERTY(QString apple_alt READ apple_alt CONSTANT);
    QString apple_alt() const { return QString::fromUtf8("\uf5d1"); }
    Q_PROPERTY(QString atom READ atom CONSTANT);
    QString atom() const { return QString::fromUtf8("\uf5d2"); }
    Q_PROPERTY(QString bone READ bone CONSTANT);
    QString bone() const { return QString::fromUtf8("\uf5d7"); }
    Q_PROPERTY(QString book_reader READ book_reader CONSTANT);
    QString book_reader() const { return QString::fromUtf8("\uf5da"); }
    Q_PROPERTY(QString brain READ brain CONSTANT);
    QString brain() const { return QString::fromUtf8("\uf5dc"); }
    Q_PROPERTY(QString car_alt READ car_alt CONSTANT);
    QString car_alt() const { return QString::fromUtf8("\uf5de"); }
    Q_PROPERTY(QString car_battery READ car_battery CONSTANT);
    QString car_battery() const { return QString::fromUtf8("\uf5df"); }
    Q_PROPERTY(QString car_crash READ car_crash CONSTANT);
    QString car_crash() const { return QString::fromUtf8("\uf5e1"); }
    Q_PROPERTY(QString car_side READ car_side CONSTANT);
    QString car_side() const { return QString::fromUtf8("\uf5e4"); }
    Q_PROPERTY(QString charging_station READ charging_station CONSTANT);
    QString charging_station() const { return QString::fromUtf8("\uf5e7"); }
    Q_PROPERTY(QString directions READ directions CONSTANT);
    QString directions() const { return QString::fromUtf8("\uf5eb"); }
    Q_PROPERTY(QString draw_polygon READ draw_polygon CONSTANT);
    QString draw_polygon() const { return QString::fromUtf8("\uf5ee"); }
    Q_PROPERTY(QString laptop_code READ laptop_code CONSTANT);
    QString laptop_code() const { return QString::fromUtf8("\uf5fc"); }
    Q_PROPERTY(QString layer_group READ layer_group CONSTANT);
    QString layer_group() const { return QString::fromUtf8("\uf5fd"); }
    Q_PROPERTY(QString lungs READ lungs CONSTANT);
    QString lungs() const { return QString::fromUtf8("\uf604"); }
    Q_PROPERTY(QString microscope READ microscope CONSTANT);
    QString microscope() const { return QString::fromUtf8("\uf610"); }
    Q_PROPERTY(QString oil_can READ oil_can CONSTANT);
    QString oil_can() const { return QString::fromUtf8("\uf613"); }
    Q_PROPERTY(QString poop READ poop CONSTANT);
    QString poop() const { return QString::fromUtf8("\uf619"); }
    Q_PROPERTY(QString shapes READ shapes CONSTANT);
    QString shapes() const { return QString::fromUtf8("\uf61f"); }
    Q_PROPERTY(QString star_of_life READ star_of_life CONSTANT);
    QString star_of_life() const { return QString::fromUtf8("\uf621"); }
    Q_PROPERTY(QString teeth READ teeth CONSTANT);
    QString teeth() const { return QString::fromUtf8("\uf62e"); }
    Q_PROPERTY(QString teeth_open READ teeth_open CONSTANT);
    QString teeth_open() const { return QString::fromUtf8("\uf62f"); }
    Q_PROPERTY(QString theater_masks READ theater_masks CONSTANT);
    QString theater_masks() const { return QString::fromUtf8("\uf630"); }
    Q_PROPERTY(QString traffic_light READ traffic_light CONSTANT);
    QString traffic_light() const { return QString::fromUtf8("\uf637"); }
    Q_PROPERTY(QString truck_monster READ truck_monster CONSTANT);
    QString truck_monster() const { return QString::fromUtf8("\uf63b"); }
    Q_PROPERTY(QString truck_pickup READ truck_pickup CONSTANT);
    QString truck_pickup() const { return QString::fromUtf8("\uf63c"); }
    Q_PROPERTY(QString ad READ ad CONSTANT);
    QString ad() const { return QString::fromUtf8("\uf641"); }
    Q_PROPERTY(QString ankh READ ankh CONSTANT);
    QString ankh() const { return QString::fromUtf8("\uf644"); }
    Q_PROPERTY(QString bible READ bible CONSTANT);
    QString bible() const { return QString::fromUtf8("\uf647"); }
    Q_PROPERTY(QString business_time READ business_time CONSTANT);
    QString business_time() const { return QString::fromUtf8("\uf64a"); }
    Q_PROPERTY(QString city READ city CONSTANT);
    QString city() const { return QString::fromUtf8("\uf64f"); }
    Q_PROPERTY(QString comment_dollar READ comment_dollar CONSTANT);
    QString comment_dollar() const { return QString::fromUtf8("\uf651"); }
    Q_PROPERTY(QString comments_dollar READ comments_dollar CONSTANT);
    QString comments_dollar() const { return QString::fromUtf8("\uf653"); }
    Q_PROPERTY(QString cross READ cross CONSTANT);
    QString cross() const { return QString::fromUtf8("\uf654"); }
    Q_PROPERTY(QString dharmachakra READ dharmachakra CONSTANT);
    QString dharmachakra() const { return QString::fromUtf8("\uf655"); }
    Q_PROPERTY(QString envelope_open_text READ envelope_open_text CONSTANT);
    QString envelope_open_text() const { return QString::fromUtf8("\uf658"); }
    Q_PROPERTY(QString folder_minus READ folder_minus CONSTANT);
    QString folder_minus() const { return QString::fromUtf8("\uf65d"); }
    Q_PROPERTY(QString folder_plus READ folder_plus CONSTANT);
    QString folder_plus() const { return QString::fromUtf8("\uf65e"); }
    Q_PROPERTY(QString funnel_dollar READ funnel_dollar CONSTANT);
    QString funnel_dollar() const { return QString::fromUtf8("\uf662"); }
    Q_PROPERTY(QString gopuram READ gopuram CONSTANT);
    QString gopuram() const { return QString::fromUtf8("\uf664"); }
    Q_PROPERTY(QString hamsa READ hamsa CONSTANT);
    QString hamsa() const { return QString::fromUtf8("\uf665"); }
    Q_PROPERTY(QString bahai READ bahai CONSTANT);
    QString bahai() const { return QString::fromUtf8("\uf666"); }
    Q_PROPERTY(QString jedi READ jedi CONSTANT);
    QString jedi() const { return QString::fromUtf8("\uf669"); }
    Q_PROPERTY(QString journal_whills READ journal_whills CONSTANT);
    QString journal_whills() const { return QString::fromUtf8("\uf66a"); }
    Q_PROPERTY(QString kaaba READ kaaba CONSTANT);
    QString kaaba() const { return QString::fromUtf8("\uf66b"); }
    Q_PROPERTY(QString khanda READ khanda CONSTANT);
    QString khanda() const { return QString::fromUtf8("\uf66d"); }
    Q_PROPERTY(QString landmark READ landmark CONSTANT);
    QString landmark() const { return QString::fromUtf8("\uf66f"); }
    Q_PROPERTY(QString mail_bulk READ mail_bulk CONSTANT);
    QString mail_bulk() const { return QString::fromUtf8("\uf674"); }
    Q_PROPERTY(QString menorah READ menorah CONSTANT);
    QString menorah() const { return QString::fromUtf8("\uf676"); }
    Q_PROPERTY(QString mosque READ mosque CONSTANT);
    QString mosque() const { return QString::fromUtf8("\uf678"); }
    Q_PROPERTY(QString om READ om CONSTANT);
    QString om() const { return QString::fromUtf8("\uf679"); }
    Q_PROPERTY(QString pastafarianism READ pastafarianism CONSTANT);
    QString pastafarianism() const { return QString::fromUtf8("\uf67b"); }
    Q_PROPERTY(QString peace READ peace CONSTANT);
    QString peace() const { return QString::fromUtf8("\uf67c"); }
    Q_PROPERTY(QString place_of_worship READ place_of_worship CONSTANT);
    QString place_of_worship() const { return QString::fromUtf8("\uf67f"); }
    Q_PROPERTY(QString poll READ poll CONSTANT);
    QString poll() const { return QString::fromUtf8("\uf681"); }
    Q_PROPERTY(QString poll_h READ poll_h CONSTANT);
    QString poll_h() const { return QString::fromUtf8("\uf682"); }
    Q_PROPERTY(QString pray READ pray CONSTANT);
    QString pray() const { return QString::fromUtf8("\uf683"); }
    Q_PROPERTY(QString praying_hands READ praying_hands CONSTANT);
    QString praying_hands() const { return QString::fromUtf8("\uf684"); }
    Q_PROPERTY(QString quran READ quran CONSTANT);
    QString quran() const { return QString::fromUtf8("\uf687"); }
    Q_PROPERTY(QString search_dollar READ search_dollar CONSTANT);
    QString search_dollar() const { return QString::fromUtf8("\uf688"); }
    Q_PROPERTY(QString search_location READ search_location CONSTANT);
    QString search_location() const { return QString::fromUtf8("\uf689"); }
    Q_PROPERTY(QString socks READ socks CONSTANT);
    QString socks() const { return QString::fromUtf8("\uf696"); }
    Q_PROPERTY(QString square_root_alt READ square_root_alt CONSTANT);
    QString square_root_alt() const { return QString::fromUtf8("\uf698"); }
    Q_PROPERTY(QString star_and_crescent READ star_and_crescent CONSTANT);
    QString star_and_crescent() const { return QString::fromUtf8("\uf699"); }
    Q_PROPERTY(QString star_of_david READ star_of_david CONSTANT);
    QString star_of_david() const { return QString::fromUtf8("\uf69a"); }
    Q_PROPERTY(QString synagogue READ synagogue CONSTANT);
    QString synagogue() const { return QString::fromUtf8("\uf69b"); }
    Q_PROPERTY(QString torah READ torah CONSTANT);
    QString torah() const { return QString::fromUtf8("\uf6a0"); }
    Q_PROPERTY(QString torii_gate READ torii_gate CONSTANT);
    QString torii_gate() const { return QString::fromUtf8("\uf6a1"); }
    Q_PROPERTY(QString vihara READ vihara CONSTANT);
    QString vihara() const { return QString::fromUtf8("\uf6a7"); }
    Q_PROPERTY(QString volume_mute READ volume_mute CONSTANT);
    QString volume_mute() const { return QString::fromUtf8("\uf6a9"); }
    Q_PROPERTY(QString yin_yang READ yin_yang CONSTANT);
    QString yin_yang() const { return QString::fromUtf8("\uf6ad"); }
    Q_PROPERTY(QString blender_phone READ blender_phone CONSTANT);
    QString blender_phone() const { return QString::fromUtf8("\uf6b6"); }
    Q_PROPERTY(QString book_dead READ book_dead CONSTANT);
    QString book_dead() const { return QString::fromUtf8("\uf6b7"); }
    Q_PROPERTY(QString campground READ campground CONSTANT);
    QString campground() const { return QString::fromUtf8("\uf6bb"); }
    Q_PROPERTY(QString cat READ cat CONSTANT);
    QString cat() const { return QString::fromUtf8("\uf6be"); }
    Q_PROPERTY(QString chair READ chair CONSTANT);
    QString chair() const { return QString::fromUtf8("\uf6c0"); }
    Q_PROPERTY(QString cloud_moon READ cloud_moon CONSTANT);
    QString cloud_moon() const { return QString::fromUtf8("\uf6c3"); }
    Q_PROPERTY(QString cloud_sun READ cloud_sun CONSTANT);
    QString cloud_sun() const { return QString::fromUtf8("\uf6c4"); }
    Q_PROPERTY(QString dice_d20 READ dice_d20 CONSTANT);
    QString dice_d20() const { return QString::fromUtf8("\uf6cf"); }
    Q_PROPERTY(QString dice_d6 READ dice_d6 CONSTANT);
    QString dice_d6() const { return QString::fromUtf8("\uf6d1"); }
    Q_PROPERTY(QString dog READ dog CONSTANT);
    QString dog() const { return QString::fromUtf8("\uf6d3"); }
    Q_PROPERTY(QString dragon READ dragon CONSTANT);
    QString dragon() const { return QString::fromUtf8("\uf6d5"); }
    Q_PROPERTY(QString drumstick_bite READ drumstick_bite CONSTANT);
    QString drumstick_bite() const { return QString::fromUtf8("\uf6d7"); }
    Q_PROPERTY(QString dungeon READ dungeon CONSTANT);
    QString dungeon() const { return QString::fromUtf8("\uf6d9"); }
    Q_PROPERTY(QString file_csv READ file_csv CONSTANT);
    QString file_csv() const { return QString::fromUtf8("\uf6dd"); }
    Q_PROPERTY(QString fist_raised READ fist_raised CONSTANT);
    QString fist_raised() const { return QString::fromUtf8("\uf6de"); }
    Q_PROPERTY(QString ghost READ ghost CONSTANT);
    QString ghost() const { return QString::fromUtf8("\uf6e2"); }
    Q_PROPERTY(QString hammer READ hammer CONSTANT);
    QString hammer() const { return QString::fromUtf8("\uf6e3"); }
    Q_PROPERTY(QString hanukiah READ hanukiah CONSTANT);
    QString hanukiah() const { return QString::fromUtf8("\uf6e6"); }
    Q_PROPERTY(QString hat_wizard READ hat_wizard CONSTANT);
    QString hat_wizard() const { return QString::fromUtf8("\uf6e8"); }
    Q_PROPERTY(QString hiking READ hiking CONSTANT);
    QString hiking() const { return QString::fromUtf8("\uf6ec"); }
    Q_PROPERTY(QString hippo READ hippo CONSTANT);
    QString hippo() const { return QString::fromUtf8("\uf6ed"); }
    Q_PROPERTY(QString horse READ horse CONSTANT);
    QString horse() const { return QString::fromUtf8("\uf6f0"); }
    Q_PROPERTY(QString house_damage READ house_damage CONSTANT);
    QString house_damage() const { return QString::fromUtf8("\uf6f1"); }
    Q_PROPERTY(QString hryvnia READ hryvnia CONSTANT);
    QString hryvnia() const { return QString::fromUtf8("\uf6f2"); }
    Q_PROPERTY(QString mask READ mask CONSTANT);
    QString mask() const { return QString::fromUtf8("\uf6fa"); }
    Q_PROPERTY(QString mountain READ mountain CONSTANT);
    QString mountain() const { return QString::fromUtf8("\uf6fc"); }
    Q_PROPERTY(QString network_wired READ network_wired CONSTANT);
    QString network_wired() const { return QString::fromUtf8("\uf6ff"); }
    Q_PROPERTY(QString otter READ otter CONSTANT);
    QString otter() const { return QString::fromUtf8("\uf700"); }
    Q_PROPERTY(QString ring READ ring CONSTANT);
    QString ring() const { return QString::fromUtf8("\uf70b"); }
    Q_PROPERTY(QString running READ running CONSTANT);
    QString running() const { return QString::fromUtf8("\uf70c"); }
    Q_PROPERTY(QString scroll READ scroll CONSTANT);
    QString scroll() const { return QString::fromUtf8("\uf70e"); }
    Q_PROPERTY(QString skull_crossbones READ skull_crossbones CONSTANT);
    QString skull_crossbones() const { return QString::fromUtf8("\uf714"); }
    Q_PROPERTY(QString slash READ slash CONSTANT);
    QString slash() const { return QString::fromUtf8("\uf715"); }
    Q_PROPERTY(QString spider READ spider CONSTANT);
    QString spider() const { return QString::fromUtf8("\uf717"); }
    Q_PROPERTY(QString toilet_paper READ toilet_paper CONSTANT);
    QString toilet_paper() const { return QString::fromUtf8("\uf71e"); }
    Q_PROPERTY(QString tractor READ tractor CONSTANT);
    QString tractor() const { return QString::fromUtf8("\uf722"); }
    Q_PROPERTY(QString user_injured READ user_injured CONSTANT);
    QString user_injured() const { return QString::fromUtf8("\uf728"); }
    Q_PROPERTY(QString vr_cardboard READ vr_cardboard CONSTANT);
    QString vr_cardboard() const { return QString::fromUtf8("\uf729"); }
    Q_PROPERTY(QString wind READ wind CONSTANT);
    QString wind() const { return QString::fromUtf8("\uf72e"); }
    Q_PROPERTY(QString wine_bottle READ wine_bottle CONSTANT);
    QString wine_bottle() const { return QString::fromUtf8("\uf72f"); }
    Q_PROPERTY(QString cloud_meatball READ cloud_meatball CONSTANT);
    QString cloud_meatball() const { return QString::fromUtf8("\uf73b"); }
    Q_PROPERTY(QString cloud_moon_rain READ cloud_moon_rain CONSTANT);
    QString cloud_moon_rain() const { return QString::fromUtf8("\uf73c"); }
    Q_PROPERTY(QString cloud_rain READ cloud_rain CONSTANT);
    QString cloud_rain() const { return QString::fromUtf8("\uf73d"); }
    Q_PROPERTY(QString cloud_showers_heavy READ cloud_showers_heavy CONSTANT);
    QString cloud_showers_heavy() const { return QString::fromUtf8("\uf740"); }
    Q_PROPERTY(QString cloud_sun_rain READ cloud_sun_rain CONSTANT);
    QString cloud_sun_rain() const { return QString::fromUtf8("\uf743"); }
    Q_PROPERTY(QString democrat READ democrat CONSTANT);
    QString democrat() const { return QString::fromUtf8("\uf747"); }
    Q_PROPERTY(QString flag_usa READ flag_usa CONSTANT);
    QString flag_usa() const { return QString::fromUtf8("\uf74d"); }
    Q_PROPERTY(QString meteor READ meteor CONSTANT);
    QString meteor() const { return QString::fromUtf8("\uf753"); }
    Q_PROPERTY(QString person_booth READ person_booth CONSTANT);
    QString person_booth() const { return QString::fromUtf8("\uf756"); }
    Q_PROPERTY(QString poo_storm READ poo_storm CONSTANT);
    QString poo_storm() const { return QString::fromUtf8("\uf75a"); }
    Q_PROPERTY(QString rainbow READ rainbow CONSTANT);
    QString rainbow() const { return QString::fromUtf8("\uf75b"); }
    Q_PROPERTY(QString republican READ republican CONSTANT);
    QString republican() const { return QString::fromUtf8("\uf75e"); }
    Q_PROPERTY(QString smog READ smog CONSTANT);
    QString smog() const { return QString::fromUtf8("\uf75f"); }
    Q_PROPERTY(QString temperature_high READ temperature_high CONSTANT);
    QString temperature_high() const { return QString::fromUtf8("\uf769"); }
    Q_PROPERTY(QString temperature_low READ temperature_low CONSTANT);
    QString temperature_low() const { return QString::fromUtf8("\uf76b"); }
    Q_PROPERTY(QString vote_yea READ vote_yea CONSTANT);
    QString vote_yea() const { return QString::fromUtf8("\uf772"); }
    Q_PROPERTY(QString water READ water CONSTANT);
    QString water() const { return QString::fromUtf8("\uf773"); }
    Q_PROPERTY(QString baby READ baby CONSTANT);
    QString baby() const { return QString::fromUtf8("\uf77c"); }
    Q_PROPERTY(QString baby_carriage READ baby_carriage CONSTANT);
    QString baby_carriage() const { return QString::fromUtf8("\uf77d"); }
    Q_PROPERTY(QString biohazard READ biohazard CONSTANT);
    QString biohazard() const { return QString::fromUtf8("\uf780"); }
    Q_PROPERTY(QString blog READ blog CONSTANT);
    QString blog() const { return QString::fromUtf8("\uf781"); }
    Q_PROPERTY(QString calendar_day READ calendar_day CONSTANT);
    QString calendar_day() const { return QString::fromUtf8("\uf783"); }
    Q_PROPERTY(QString calendar_week READ calendar_week CONSTANT);
    QString calendar_week() const { return QString::fromUtf8("\uf784"); }
    Q_PROPERTY(QString candy_cane READ candy_cane CONSTANT);
    QString candy_cane() const { return QString::fromUtf8("\uf786"); }
    Q_PROPERTY(QString carrot READ carrot CONSTANT);
    QString carrot() const { return QString::fromUtf8("\uf787"); }
    Q_PROPERTY(QString cash_register READ cash_register CONSTANT);
    QString cash_register() const { return QString::fromUtf8("\uf788"); }
    Q_PROPERTY(QString compress_arrows_alt READ compress_arrows_alt CONSTANT);
    QString compress_arrows_alt() const { return QString::fromUtf8("\uf78c"); }
    Q_PROPERTY(QString dumpster READ dumpster CONSTANT);
    QString dumpster() const { return QString::fromUtf8("\uf793"); }
    Q_PROPERTY(QString dumpster_fire READ dumpster_fire CONSTANT);
    QString dumpster_fire() const { return QString::fromUtf8("\uf794"); }
    Q_PROPERTY(QString ethernet READ ethernet CONSTANT);
    QString ethernet() const { return QString::fromUtf8("\uf796"); }
    Q_PROPERTY(QString gifts READ gifts CONSTANT);
    QString gifts() const { return QString::fromUtf8("\uf79c"); }
    Q_PROPERTY(QString glass_cheers READ glass_cheers CONSTANT);
    QString glass_cheers() const { return QString::fromUtf8("\uf79f"); }
    Q_PROPERTY(QString glass_whiskey READ glass_whiskey CONSTANT);
    QString glass_whiskey() const { return QString::fromUtf8("\uf7a0"); }
    Q_PROPERTY(QString globe_europe READ globe_europe CONSTANT);
    QString globe_europe() const { return QString::fromUtf8("\uf7a2"); }
    Q_PROPERTY(QString grip_lines READ grip_lines CONSTANT);
    QString grip_lines() const { return QString::fromUtf8("\uf7a4"); }
    Q_PROPERTY(QString grip_lines_vertical READ grip_lines_vertical CONSTANT);
    QString grip_lines_vertical() const { return QString::fromUtf8("\uf7a5"); }
    Q_PROPERTY(QString guitar READ guitar CONSTANT);
    QString guitar() const { return QString::fromUtf8("\uf7a6"); }
    Q_PROPERTY(QString heart_broken READ heart_broken CONSTANT);
    QString heart_broken() const { return QString::fromUtf8("\uf7a9"); }
    Q_PROPERTY(QString holly_berry READ holly_berry CONSTANT);
    QString holly_berry() const { return QString::fromUtf8("\uf7aa"); }
    Q_PROPERTY(QString horse_head READ horse_head CONSTANT);
    QString horse_head() const { return QString::fromUtf8("\uf7ab"); }
    Q_PROPERTY(QString icicles READ icicles CONSTANT);
    QString icicles() const { return QString::fromUtf8("\uf7ad"); }
    Q_PROPERTY(QString igloo READ igloo CONSTANT);
    QString igloo() const { return QString::fromUtf8("\uf7ae"); }
    Q_PROPERTY(QString mitten READ mitten CONSTANT);
    QString mitten() const { return QString::fromUtf8("\uf7b5"); }
    Q_PROPERTY(QString mug_hot READ mug_hot CONSTANT);
    QString mug_hot() const { return QString::fromUtf8("\uf7b6"); }
    Q_PROPERTY(QString radiation READ radiation CONSTANT);
    QString radiation() const { return QString::fromUtf8("\uf7b9"); }
    Q_PROPERTY(QString radiation_alt READ radiation_alt CONSTANT);
    QString radiation_alt() const { return QString::fromUtf8("\uf7ba"); }
    Q_PROPERTY(QString restroom READ restroom CONSTANT);
    QString restroom() const { return QString::fromUtf8("\uf7bd"); }
    Q_PROPERTY(QString satellite READ satellite CONSTANT);
    QString satellite() const { return QString::fromUtf8("\uf7bf"); }
    Q_PROPERTY(QString satellite_dish READ satellite_dish CONSTANT);
    QString satellite_dish() const { return QString::fromUtf8("\uf7c0"); }
    Q_PROPERTY(QString sd_card READ sd_card CONSTANT);
    QString sd_card() const { return QString::fromUtf8("\uf7c2"); }
    Q_PROPERTY(QString sim_card READ sim_card CONSTANT);
    QString sim_card() const { return QString::fromUtf8("\uf7c4"); }
    Q_PROPERTY(QString skating READ skating CONSTANT);
    QString skating() const { return QString::fromUtf8("\uf7c5"); }
    Q_PROPERTY(QString skiing READ skiing CONSTANT);
    QString skiing() const { return QString::fromUtf8("\uf7c9"); }
    Q_PROPERTY(QString skiing_nordic READ skiing_nordic CONSTANT);
    QString skiing_nordic() const { return QString::fromUtf8("\uf7ca"); }
    Q_PROPERTY(QString sleigh READ sleigh CONSTANT);
    QString sleigh() const { return QString::fromUtf8("\uf7cc"); }
    Q_PROPERTY(QString sms READ sms CONSTANT);
    QString sms() const { return QString::fromUtf8("\uf7cd"); }
    Q_PROPERTY(QString snowboarding READ snowboarding CONSTANT);
    QString snowboarding() const { return QString::fromUtf8("\uf7ce"); }
    Q_PROPERTY(QString snowman READ snowman CONSTANT);
    QString snowman() const { return QString::fromUtf8("\uf7d0"); }
    Q_PROPERTY(QString snowplow READ snowplow CONSTANT);
    QString snowplow() const { return QString::fromUtf8("\uf7d2"); }
    Q_PROPERTY(QString tenge READ tenge CONSTANT);
    QString tenge() const { return QString::fromUtf8("\uf7d7"); }
    Q_PROPERTY(QString toilet READ toilet CONSTANT);
    QString toilet() const { return QString::fromUtf8("\uf7d8"); }
    Q_PROPERTY(QString tools READ tools CONSTANT);
    QString tools() const { return QString::fromUtf8("\uf7d9"); }
    Q_PROPERTY(QString tram READ tram CONSTANT);
    QString tram() const { return QString::fromUtf8("\uf7da"); }
    Q_PROPERTY(QString fire_alt READ fire_alt CONSTANT);
    QString fire_alt() const { return QString::fromUtf8("\uf7e4"); }
    Q_PROPERTY(QString bacon READ bacon CONSTANT);
    QString bacon() const { return QString::fromUtf8("\uf7e5"); }
    Q_PROPERTY(QString book_medical READ book_medical CONSTANT);
    QString book_medical() const { return QString::fromUtf8("\uf7e6"); }
    Q_PROPERTY(QString bread_slice READ bread_slice CONSTANT);
    QString bread_slice() const { return QString::fromUtf8("\uf7ec"); }
    Q_PROPERTY(QString cheese READ cheese CONSTANT);
    QString cheese() const { return QString::fromUtf8("\uf7ef"); }
    Q_PROPERTY(QString clinic_medical READ clinic_medical CONSTANT);
    QString clinic_medical() const { return QString::fromUtf8("\uf7f2"); }
    Q_PROPERTY(QString comment_medical READ comment_medical CONSTANT);
    QString comment_medical() const { return QString::fromUtf8("\uf7f5"); }
    Q_PROPERTY(QString crutch READ crutch CONSTANT);
    QString crutch() const { return QString::fromUtf8("\uf7f7"); }
    Q_PROPERTY(QString disease READ disease CONSTANT);
    QString disease() const { return QString::fromUtf8("\uf7fa"); }
    Q_PROPERTY(QString egg READ egg CONSTANT);
    QString egg() const { return QString::fromUtf8("\uf7fb"); }
    Q_PROPERTY(QString hamburger READ hamburger CONSTANT);
    QString hamburger() const { return QString::fromUtf8("\uf805"); }
    Q_PROPERTY(QString hand_middle_finger READ hand_middle_finger CONSTANT);
    QString hand_middle_finger() const { return QString::fromUtf8("\uf806"); }
    Q_PROPERTY(QString hard_hat READ hard_hat CONSTANT);
    QString hard_hat() const { return QString::fromUtf8("\uf807"); }
    Q_PROPERTY(QString hospital_user READ hospital_user CONSTANT);
    QString hospital_user() const { return QString::fromUtf8("\uf80d"); }
    Q_PROPERTY(QString hotdog READ hotdog CONSTANT);
    QString hotdog() const { return QString::fromUtf8("\uf80f"); }
    Q_PROPERTY(QString ice_cream READ ice_cream CONSTANT);
    QString ice_cream() const { return QString::fromUtf8("\uf810"); }
    Q_PROPERTY(QString laptop_medical READ laptop_medical CONSTANT);
    QString laptop_medical() const { return QString::fromUtf8("\uf812"); }
    Q_PROPERTY(QString pager READ pager CONSTANT);
    QString pager() const { return QString::fromUtf8("\uf815"); }
    Q_PROPERTY(QString pepper_hot READ pepper_hot CONSTANT);
    QString pepper_hot() const { return QString::fromUtf8("\uf816"); }
    Q_PROPERTY(QString pizza_slice READ pizza_slice CONSTANT);
    QString pizza_slice() const { return QString::fromUtf8("\uf818"); }
    Q_PROPERTY(QString trash_restore READ trash_restore CONSTANT);
    QString trash_restore() const { return QString::fromUtf8("\uf829"); }
    Q_PROPERTY(QString trash_restore_alt READ trash_restore_alt CONSTANT);
    QString trash_restore_alt() const { return QString::fromUtf8("\uf82a"); }
    Q_PROPERTY(QString user_nurse READ user_nurse CONSTANT);
    QString user_nurse() const { return QString::fromUtf8("\uf82f"); }
    Q_PROPERTY(QString wave_square READ wave_square CONSTANT);
    QString wave_square() const { return QString::fromUtf8("\uf83e"); }
    Q_PROPERTY(QString biking READ biking CONSTANT);
    QString biking() const { return QString::fromUtf8("\uf84a"); }
    Q_PROPERTY(QString border_all READ border_all CONSTANT);
    QString border_all() const { return QString::fromUtf8("\uf84c"); }
    Q_PROPERTY(QString border_none READ border_none CONSTANT);
    QString border_none() const { return QString::fromUtf8("\uf850"); }
    Q_PROPERTY(QString border_style READ border_style CONSTANT);
    QString border_style() const { return QString::fromUtf8("\uf853"); }
    Q_PROPERTY(QString fan READ fan CONSTANT);
    QString fan() const { return QString::fromUtf8("\uf863"); }
    Q_PROPERTY(QString icons READ icons CONSTANT);
    QString icons() const { return QString::fromUtf8("\uf86d"); }
    Q_PROPERTY(QString phone_alt READ phone_alt CONSTANT);
    QString phone_alt() const { return QString::fromUtf8("\uf879"); }
    Q_PROPERTY(QString phone_square_alt READ phone_square_alt CONSTANT);
    QString phone_square_alt() const { return QString::fromUtf8("\uf87b"); }
    Q_PROPERTY(QString photo_video READ photo_video CONSTANT);
    QString photo_video() const { return QString::fromUtf8("\uf87c"); }
    Q_PROPERTY(QString remove_format READ remove_format CONSTANT);
    QString remove_format() const { return QString::fromUtf8("\uf87d"); }
    Q_PROPERTY(QString sort_alpha_down_alt READ sort_alpha_down_alt CONSTANT);
    QString sort_alpha_down_alt() const { return QString::fromUtf8("\uf881"); }
    Q_PROPERTY(QString sort_alpha_up_alt READ sort_alpha_up_alt CONSTANT);
    QString sort_alpha_up_alt() const { return QString::fromUtf8("\uf882"); }
    Q_PROPERTY(QString sort_amount_down_alt READ sort_amount_down_alt CONSTANT);
    QString sort_amount_down_alt() const { return QString::fromUtf8("\uf884"); }
    Q_PROPERTY(QString sort_amount_up_alt READ sort_amount_up_alt CONSTANT);
    QString sort_amount_up_alt() const { return QString::fromUtf8("\uf885"); }
    Q_PROPERTY(QString sort_numeric_down_alt READ sort_numeric_down_alt CONSTANT);
    QString sort_numeric_down_alt() const { return QString::fromUtf8("\uf886"); }
    Q_PROPERTY(QString sort_numeric_up_alt READ sort_numeric_up_alt CONSTANT);
    QString sort_numeric_up_alt() const { return QString::fromUtf8("\uf887"); }
    Q_PROPERTY(QString spell_check READ spell_check CONSTANT);
    QString spell_check() const { return QString::fromUtf8("\uf891"); }
    Q_PROPERTY(QString voicemail READ voicemail CONSTANT);
    QString voicemail() const { return QString::fromUtf8("\uf897"); }
    Q_PROPERTY(QString hat_cowboy READ hat_cowboy CONSTANT);
    QString hat_cowboy() const { return QString::fromUtf8("\uf8c0"); }
    Q_PROPERTY(QString hat_cowboy_side READ hat_cowboy_side CONSTANT);
    QString hat_cowboy_side() const { return QString::fromUtf8("\uf8c1"); }
    Q_PROPERTY(QString mouse READ mouse CONSTANT);
    QString mouse() const { return QString::fromUtf8("\uf8cc"); }
    Q_PROPERTY(QString record_vinyl READ record_vinyl CONSTANT);
    QString record_vinyl() const { return QString::fromUtf8("\uf8d9"); }
    Q_PROPERTY(QString caravan READ caravan CONSTANT);
    QString caravan() const { return QString::fromUtf8("\uf8ff"); }
    // END AUTO-GENERATED
private:
    explicit FontAwesomeQml(QObject *parent = nullptr);
    static QObject *getQMLInstance(QQmlEngine *t_engine, QJSEngine *t_scriptEngine);

    static FontAwesomeQml* theInstance;
};

#endif // FONTAWESOME_QML_H
