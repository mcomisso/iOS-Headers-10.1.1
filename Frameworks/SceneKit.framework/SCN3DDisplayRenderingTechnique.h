/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCN3DDisplayRenderingTechnique : SCNTechnique <SCNStereoscopicRenderingTechnique> {
    long long  _displayLayout;
}

@property (nonatomic, readonly) long long displayLayout;
@property (nonatomic) double interaxialDistance;

- (long long)displayLayout;
- (id)initWithDisplayLayout:(long long)arg1;
- (double)interaxialDistance;
- (void)setInteraxialDistance:(double)arg1;

@end
