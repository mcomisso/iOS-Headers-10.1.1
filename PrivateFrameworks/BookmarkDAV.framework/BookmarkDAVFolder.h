/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVFolder : CoreDAVContainer <CoreDAVAddedContainer, CoreDAVLeafDataPayload, CoreDAVModifiedContainer> {
    NSDictionary * _appleAttributes;
    NSString * _bulkParsedCTag;
    NSString * _bulkParsedPTag;
    CoreDAVErrorItem * _bulkUploadErrorItem;
    NSMutableArray * _childrenOrder;
}

@property (nonatomic, readonly) NSDictionary *appleAttributes;
@property (nonatomic, retain) NSString *bulkParsedCTag;
@property (nonatomic, retain) NSString *bulkParsedPTag;
@property (nonatomic, retain) CoreDAVErrorItem *bulkUploadErrorItem;
@property (nonatomic, readonly) NSArray *childrenOrder;
@property (nonatomic, readonly) NSData *dataPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBookmarkBarFolder;
@property (nonatomic) bool isBookmarkFolder;
@property (nonatomic) bool isBookmarkMenuFolder;
@property (nonatomic, retain) NSURL *serverID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *syncKey;

+ (id)copyPropertyMappingsForParser;

- (id)_appleAttributesString;
- (void)_faultResourceType;
- (id)appleAttributes;
- (void)applyParsedProperties:(id)arg1;
- (id)bulkParsedCTag;
- (id)bulkParsedPTag;
- (id)bulkUploadErrorItem;
- (id)childrenOrder;
- (id)copyMkcolTask;
- (id)copyPropPatchTask;
- (id)dataPayload;
- (void)dealloc;
- (id)initWithServerID:(id)arg1 containerName:(id)arg2 appleAttributes:(id)arg3;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (bool)isBookmarkBarFolder;
- (bool)isBookmarkFolder;
- (bool)isBookmarkMenuFolder;
- (id)serverID;
- (void)setBulkParsedCTag:(id)arg1;
- (void)setBulkParsedPTag:(id)arg1;
- (void)setBulkUploadErrorItem:(id)arg1;
- (void)setIsBookmarkBarFolder:(bool)arg1;
- (void)setIsBookmarkFolder:(bool)arg1;
- (void)setIsBookmarkMenuFolder:(bool)arg1;
- (void)setServerID:(id)arg1;
- (id)syncKey;

@end
