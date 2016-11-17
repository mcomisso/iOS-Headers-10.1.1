/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISVariableChangeTracker : NSObject {
    NSISEngine * _engine;
    NSMutableSet * _variableDelegates;
    struct __CFDictionary { } * _variableMap;
}

- (long long)count;
- (void)dealloc;
- (id)initWithEngine:(id)arg1;
- (void)noteVariable:(id)arg1 changedFrom:(double)arg2;
- (void)performPendingChangeNotifications;
- (void)performPendingChangeNotificationsForVariable:(id)arg1;

@end
