/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreFollowRecommendationsOperation : MPAsyncOperation {
    MPStoreModelArtistBuilder * _artistBuilder;
    NSOperationQueue * _operationQueue;
    MPStoreFollowRecommendationsRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) MPStoreFollowRecommendationsRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

+ (id)activeDSID;

- (void).cxx_destruct;
- (void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (id)_followRecommendationsFromPlatformValue:(id)arg1;
- (id)_reccomendedArtistsURLFromBag:(id)arg1 accountDSID:(id)arg2;
- (id)_resultsDictionaryFromURLValue:(id)arg1;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
