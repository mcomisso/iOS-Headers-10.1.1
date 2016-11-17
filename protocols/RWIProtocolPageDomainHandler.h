/* Generated by RuntimeBrowser.
 */

@protocol RWIProtocolPageDomainHandler <NSObject>

@required

- (void)addScriptToEvaluateOnLoadWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 scriptSource:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSString *, void*, NSString *
- (void)archiveWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSString *, void*
- (void)deleteCookieWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 cookieName:(void *)arg3 url:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, NSString *, NSString *
- (void)disableWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*
- (void)enableWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*
- (void)getCompositingBordersVisibleWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)getCookiesWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*
- (void)getResourceContentWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 frameId:(void *)arg3 url:(void *)arg4; // needs 4 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSString *, bool, void*, NSString *, NSString *
- (void)getResourceTreeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, RWIProtocolPageFrameResourceTree *, void*
- (void)getScriptExecutionStatusWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, long long, void*
- (void)handleJavaScriptDialogWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 accept:(void *)arg3 promptText:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, bool, id*
- (void)navigateWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 url:(void *)arg3; // needs 3 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, NSString *
- (void)reloadWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 ignoreCache:(void *)arg3 scriptToEvaluateOnLoad:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, bool*, id*
- (void)removeScriptToEvaluateOnLoadWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 identifier:(void *)arg3; // needs 3 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, NSString *
- (void)searchInResourceWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 frameId:(void *)arg3 url:(void *)arg4 query:(void *)arg5 caseSensitive:(void *)arg6 isRegex:(void *)arg7 requestId:(void *)arg8; // needs 8 arg types, found 18: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*, NSString *, NSString *, NSString *, bool*, bool*, id*
- (void)searchInResourcesWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 text:(void *)arg3 caseSensitive:(void *)arg4 isRegex:(void *)arg5; // needs 5 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*, NSString *, bool*, bool*
- (void)setCompositingBordersVisibleWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 visible:(void *)arg3; // needs 3 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, bool
- (void)setDocumentContentWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 frameId:(void *)arg3 html:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, NSString *, NSString *
- (void)setEmulatedMediaWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 media:(void *)arg3; // needs 3 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, NSString *
- (void)setScriptExecutionDisabledWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 value:(void *)arg3; // needs 3 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, bool
- (void)setShowPaintRectsWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 result:(void *)arg3; // needs 3 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, bool
- (void)setTouchEmulationEnabledWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 enabled:(void *)arg3; // needs 3 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, bool
- (void)snapshotNodeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSString *, void*, int
- (void)snapshotRectWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 x:(void *)arg3 y:(void *)arg4 width:(void *)arg5 height:(void *)arg6 coordinateSystem:(void *)arg7; // needs 7 arg types, found 17: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSString *, void*, int, int, int, int, long long

@end
