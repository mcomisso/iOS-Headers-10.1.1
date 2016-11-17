/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings {
    AVCapturePhotoBracketSettingsInternal * _bracketSettingsInternal;
}

@property (nonatomic, readonly) NSArray *bracketedSettings;
@property (getter=isLensStabilizationEnabled, nonatomic) bool lensStabilizationEnabled;

+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)arg1 processedFormat:(id)arg2 bracketedSettings:(id)arg3;

- (id)_initWithFormat:(id)arg1 rawPixelFormatType:(unsigned int)arg2 bracketedSettings:(id)arg3 uniqueID:(long long)arg4;
- (id)bracketedSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)isLensStabilizationEnabled;
- (void)setAutoBravoImageFusionEnabled:(bool)arg1;
- (void)setAutoStillImageStabilizationEnabled:(bool)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setLensStabilizationEnabled:(bool)arg1;
- (void)setLivePhotoMovieFileURL:(id)arg1;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieMetadata:(id)arg1;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;
- (void)setOriginalPhotoDeliveryEnabled:(bool)arg1;

@end
