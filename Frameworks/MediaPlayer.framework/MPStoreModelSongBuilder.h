/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelSongBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int title : 1; 
        unsigned int duration : 1; 
        unsigned int trackNumber : 1; 
        unsigned int discNumber : 1; 
        unsigned int grouping : 1; 
        unsigned int explicit : 1; 
        unsigned int artistUploadedContent : 1; 
        unsigned int hasVideo : 1; 
        unsigned int artwork : 1; 
        unsigned int copyrightText : 1; 
        unsigned int keepLocalEnableState : 1; 
        unsigned int keepLocalManagedStatus : 1; 
        unsigned int localNetworkFileURL : 1; 
        unsigned int hasCloudSyncSource : 1; 
        unsigned int homeSharingAssetAvailable : 1; 
        unsigned int localFileAsset : 1; 
        unsigned int libraryAdded : 1; 
        unsigned int libraryAddEligible : 1; 
        unsigned int playbackEndpointType : 1; 
        unsigned int protectedContentSupportStorageFilePath : 1; 
        unsigned int storeRedownloadParameters : 1; 
        unsigned int storeAccountIdentifier : 1; 
        unsigned int shouldRememberBookmarkTime : 1; 
        unsigned int shouldReportPlayEventsToStore : 1; 
        unsigned int shouldShowComposer : 1; 
        unsigned int storeRedownloadable : 1; 
        unsigned int volumeNormalization : 1; 
        unsigned int classicalWork : 1; 
        unsigned int classicalMovement : 1; 
        unsigned int classicalMovementCount : 1; 
        unsigned int classicalMovementNumber : 1; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int title : 1; 
            unsigned int releaseDate : 1; 
            unsigned int year : 1; 
            unsigned int artist : 1; 
        } album; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int name : 1; 
        } artist; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int name : 1; 
        } composer; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int name : 1; 
        } genre; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int text : 1; 
            unsigned int hasStoreLyrics : 1; 
        } lyrics; 
    }  _requestedSongProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1;

@end
