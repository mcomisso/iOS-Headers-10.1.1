/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSCNRenderer : NSObject {
    double  _backingScaleFactor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    bool  _disableInput;
    float  _fps;
    int  _frames;
    bool  _hasRenderedForCurrentUpdate;
    bool  _hasRenderedOnce;
    bool  _isInTransition;
    float  _prevBackingScaleFactor;
    unsigned int  _prevSpritesRendered;
    unsigned int  _prevSpritesRenderedSubmitted;
    double  _prevViewAspect;
    SKScene * _scene;
    struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; } * _skcRenderer;
    unsigned int  _spritesRendered;
    unsigned int  _spritesSubmitted;
    SKLabelNode * _statsLabel;
    double  _timeBeginFrameCount;
    double  _timePreviousUpdate;
    NSMutableDictionary * _viewRenderOptions;
    bool  showsFPS;
    bool  showsNodeCount;
}

@property (nonatomic) double backingScaleFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) bool ignoresSiblingOrder;
@property (nonatomic, retain) SKScene *scene;
@property (nonatomic) bool showsDrawCount;
@property (nonatomic) bool showsFPS;
@property (nonatomic) bool showsFields;
@property (nonatomic) bool showsNodeCount;
@property (nonatomic) bool showsPhysics;

+ (int)getOpenGLFramebuffer:(id)arg1;
+ (id)rendererWithContext:(id)arg1 options:(id)arg2;
+ (id)rendererWithDevice:(id)arg1 options:(id)arg2;
+ (void)restoreDefaultOpenGLState:(id)arg1 frameBuffer:(int)arg2;
+ (void)setPrefersOpenGL:(bool)arg1;

- (void).cxx_destruct;
- (double)_fps;
- (void)_getDestBounds;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_getMatrix;
- (id)_getOptions;
- (void)_getViewport;
- (void)_initialize;
- (id)_scene;
- (bool)_shouldCenterStats;
- (void)_showAllStats;
- (bool)_showsCPUStats;
- (bool)_showsCoreAnimationFPS;
- (bool)_showsCulledNodesInNodeCount;
- (bool)_showsGPUStats;
- (bool)_showsOutlineInterior;
- (bool)_showsSpriteBounds;
- (bool)_showsTotalAreaRendered;
- (int)_spriteRenderCount;
- (int)_spriteSubmitCount;
- (void)_update:(double)arg1;
- (double)backingScaleFactor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (bool)ignoresSiblingOrder;
- (id)init;
- (id)initWithSKCRenderer:(struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; }*)arg1;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)render:(bool)arg1;
- (void)renderToFramebuffer:(int)arg1 shouldClear:(bool)arg2;
- (void)renderToTexture:(id)arg1 commandQueue:(id)arg2;
- (void)renderTransition:(id)arg1 toFramebuffer:(int)arg2 withInputTexture:(unsigned int)arg3 outputTexture:(unsigned int)arg4 inputTextureSize:(struct CGSize { double x1; double x2; })arg5 outputTextureSize:(struct CGSize { double x1; double x2; })arg6 time:(float)arg7;
- (void)renderTransition:(id)arg1 withInputTexture:(unsigned int)arg2 outputTexture:(unsigned int)arg3 inputTextureSize:(struct CGSize { double x1; double x2; })arg4 outputTextureSize:(struct CGSize { double x1; double x2; })arg5 time:(float)arg6;
- (void)renderTransition:(id)arg1 withInputTexture:(id)arg2 outputTexture:(id)arg3 time:(float)arg4 encoder:(id)arg5 pass:(id)arg6 commandQueue:(id)arg7;
- (void)renderWithEncoder:(id)arg1 pass:(id)arg2 commandQueue:(id)arg3;
- (id)scene;
- (void)setBackingScaleFactor:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIgnoresSiblingOrder:(bool)arg1;
- (void)setScene:(id)arg1;
- (void)setShowsDrawCount:(bool)arg1;
- (void)setShowsFPS:(bool)arg1;
- (void)setShowsFields:(bool)arg1;
- (void)setShowsNodeCount:(bool)arg1;
- (void)setShowsPhysics:(bool)arg1;
- (void)setShowsQuadCount:(bool)arg1;
- (void)setShowsSpriteBounds:(bool)arg1;
- (void)set_shouldCenterStats:(bool)arg1;
- (void)set_showsCPUStats:(bool)arg1;
- (void)set_showsCoreAnimationFPS:(bool)arg1;
- (void)set_showsCulledNodesInNodeCount:(bool)arg1;
- (void)set_showsGPUStats:(bool)arg1;
- (void)set_showsOutlineInterior:(bool)arg1;
- (void)set_showsSpriteBounds:(bool)arg1;
- (void)set_showsTotalAreaRendered:(bool)arg1;
- (void)settingsForTransition:(id)arg1 atTime:(double)arg2 renderIncomingToTexture:(bool*)arg3 renderOutgoingToTexture:(bool*)arg4 renderIncomingToScreen:(bool*)arg5 renderOutgoingToScreen:(bool*)arg6;
- (void)setupContext;
- (bool)showsDrawCount;
- (bool)showsFPS;
- (bool)showsFields;
- (bool)showsNodeCount;
- (bool)showsPhysics;
- (bool)showsQuadCount;
- (bool)showsSpriteBounds;
- (void)updateAtTime:(double)arg1;

@end
