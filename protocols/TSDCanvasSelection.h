/* Generated by RuntimeBrowser.
 */

@protocol TSDCanvasSelection <NSObject, NSCopying>

@required

+ (id)emptySelection;

- (bool)containsKindOfClass:(Class)arg1;
- (bool)containsUnlockedKindOfClass:(Class)arg1;
- (id)copyExcludingInfo:(NSObject<TSDInfo> *)arg1;
- (id)copyIncludingInfo:(NSObject<TSDInfo> *)arg1;
- (unsigned long long)infoCount;
- (NSSet *)infos;
- (NSSet *)infosOfClass:(Class)arg1;
- (bool)isEmpty;
- (unsigned long long)unlockedInfoCount;
- (NSSet *)unlockedInfos;

@end
