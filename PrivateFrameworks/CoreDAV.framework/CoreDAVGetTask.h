/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVGetTask : CoreDAVTask {
    id  _appSpecificDataItemResult;
    bool  _forceNoCache;
}

@property (nonatomic, retain) id appSpecificDataItemResult;
@property (nonatomic) <CoreDAVTaskDelegate> *delegate;
@property (nonatomic) bool forceNoCache;

- (id)appSpecificDataItemResult;
- (unsigned long long)cachePolicy;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (bool)forceNoCache;
- (id)httpMethod;
- (id)requestBody;
- (void)setAppSpecificDataItemResult:(id)arg1;
- (void)setForceNoCache:(bool)arg1;

@end
