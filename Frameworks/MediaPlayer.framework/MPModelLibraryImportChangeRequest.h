/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryImportChangeRequest : NSObject <NSCopying> {
    MPSectionedCollection * _modelObjects;
    bool  _shouldLibraryAdd;
}

@property (nonatomic, copy) MPSectionedCollection *modelObjects;
@property (nonatomic) bool shouldLibraryAdd;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)modelObjects;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setModelObjects:(id)arg1;
- (void)setShouldLibraryAdd:(bool)arg1;
- (bool)shouldLibraryAdd;

@end
