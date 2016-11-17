/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCardActionItem : NSObject {
    _MKMapItemAttribution * _attribution;
    NSAttributedString * _displayString;
    bool  _enabled;
    unsigned long long  _type;
    NSArray * _urlStrings;
}

@property (nonatomic, retain) _MKMapItemAttribution *attribution;
@property (nonatomic, readonly, copy) NSAttributedString *displayString;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) UIColor *tintColorOverride;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSArray *urlStrings;

- (void).cxx_destruct;
- (void)_setDisplayStringByType;
- (id)attribution;
- (id)displayString;
- (bool)enabled;
- (id)icon;
- (id)initForAttributionURLsDisplayString:(id)arg1 enabled:(bool)arg2 urlStrings:(id)arg3 attribution:(id)arg4 type:(unsigned long long)arg5;
- (id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(bool)arg3;
- (void)setAttribution:(id)arg1;
- (id)tintColorOverride;
- (unsigned long long)type;
- (id)urlStrings;

@end
