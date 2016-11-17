/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWCameraInfoMetadataNode : BWNode {
    struct opaqueCMFormatDescription { } * _boxedMetadataFormatDescription;
    BWNodeOutput * _boxedMetadataOutput;
    struct OpaqueCMBlockBuffer { } * _emptyMetadataSampleData;
    bool  _generateDebugMetadata;
    unsigned int  _localIDForDebugData_BE;
    BWNodeOutput * _passthruOutput;
    bool  _previousGeneratedMetadataBufferWasEmpty;
}

@property (nonatomic, readonly) BWNodeOutput *boxedMetadataOutput;
@property (nonatomic, readonly) BWNodeOutput *passthruOutput;

+ (void)initialize;

- (void)_emitDebugBoxedMetadataForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 metadata:(struct __CFDictionary { }*)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (struct OpaqueCMBlockBuffer { }*)_emptyMetadataBlockBuffer;
- (id)_initForMotionMetadataSource:(int)arg1 generateDebugMetadata:(bool)arg2;
- (id)boxedMetadataOutput;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;
- (id)initForDebugMetadata;
- (id)nodeSubType;
- (id)nodeType;
- (id)passthruOutput;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
