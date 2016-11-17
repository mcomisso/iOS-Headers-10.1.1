/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTimelapseStabilizationMovieWriter : NSObject <AVOfflineVideoStabilizerDataProvider, CMKTimelapseMovieWriterProtocol> {
    id /* block */  __completion;
    struct __CVBuffer { } * __firstSourceFrame;
    NSArray * __frameFilePaths;
    long long  __framesPerSecond;
    long long  __framesWrittenCount;
    NSObject<OS_dispatch_queue> * __movieWritingQueue;
    AVAssetWriterInputPixelBufferAdaptor * __pixelBufferAdaptor;
    long long  __sourceFramesReadCount;
    AVOfflineVideoStabilizer * __stabilizer;
    struct opaqueCMFormatDescription { } * __videoFormatDescription;
    AVAssetWriterInput * __videoInput;
    NSArray * __visMetadataFilePaths;
    AVAssetWriter * __writer;
}

@property (nonatomic, readonly, copy) id /* block */ _completion;
@property (nonatomic, readonly) struct __CVBuffer { }*_firstSourceFrame;
@property (nonatomic, readonly) NSArray *_frameFilePaths;
@property (nonatomic, readonly) long long _framesPerSecond;
@property (nonatomic, readonly) long long _framesWrittenCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_movieWritingQueue;
@property (nonatomic, readonly) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
@property (nonatomic, readonly) long long _sourceFramesReadCount;
@property (nonatomic, readonly) AVOfflineVideoStabilizer *_stabilizer;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*_videoFormatDescription;
@property (nonatomic, readonly) AVAssetWriterInput *_videoInput;
@property (nonatomic, readonly) NSArray *_visMetadataFilePaths;
@property (nonatomic, readonly) AVAssetWriter *_writer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id /* block */)_completion;
- (struct opaqueCMSampleBuffer { }*)_copyNextSampleBufferForAssetWriter;
- (struct __CVBuffer { }*)_copySourcePixelBufferForFrameNumber:(long long)arg1;
- (struct CGSize { double x1; double x2; })_desiredOutputSizeForFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_finishMovieWithCompletionHandler:(id /* block */)arg1;
- (struct __CVBuffer { }*)_firstSourceFrame;
- (id)_frameFilePaths;
- (long long)_framesPerSecond;
- (long long)_framesWrittenCount;
- (id)_movieWritingQueue;
- (id)_pixelBufferAdaptor;
- (void)_reset;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1;
- (long long)_sourceFramesReadCount;
- (id)_stabilizer;
- (bool)_startWritingWithOutputPath:(id)arg1 width:(long long)arg2 height:(long long)arg3 videoFormatDescription:(struct opaqueCMFormatDescription { }*)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 framesPerSecond:(long long)arg6 frameCount:(long long)arg7 visMetadataCount:(long long)arg8 videoMetadata:(id)arg9;
- (struct opaqueCMFormatDescription { }*)_videoFormatDescription;
- (id)_videoInput;
- (id)_visMetadataFilePaths;
- (void)_writeMovieAsynchronously;
- (id)_writer;
- (struct __CVBuffer { }*)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 stabilizer:(id)arg3;
- (id)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 stabilizer:(id)arg3;
- (id)init;
- (void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg6 framesPerSecond:(long long)arg7 completionHandler:(id /* block */)arg8;

@end
