/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKFormFeatureBox : AKFormFeature {
    unsigned long long  _alignment;
    AKFormFeatureLine * _baseline;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _enclosingRegionRect;
    unsigned long long  _flags;
    bool  _multiline;
    bool  _widthExpands;
}

@property (nonatomic) unsigned long long alignment;
@property (nonatomic, retain) AKFormFeatureLine *baseline;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } enclosingRegionRect;
@property (nonatomic) unsigned long long flags;
@property (getter=isMultiline, nonatomic) bool multiline;
@property (nonatomic) bool widthExpands;

+ (id)boxWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onPage:(id)arg2 flags:(unsigned long long)arg3 baseline:(id)arg4;

- (void).cxx_destruct;
- (unsigned long long)alignment;
- (id)baseline;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })enclosingRegionRect;
- (unsigned long long)flags;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onPage:(id)arg2 flags:(unsigned long long)arg3 baseline:(id)arg4;
- (bool)isMultiline;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setBaseline:(id)arg1;
- (void)setEnclosingRegionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setMultiline:(bool)arg1;
- (void)setWidthExpands:(bool)arg1;
- (bool)widthExpands;

@end
