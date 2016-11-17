/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AUParameterGroup : AUParameterNode <NSSecureCoding> {
    NSMutableDictionary * _childIndicesByIdentifier;
    NSArray * _children;
}

@property (nonatomic, readonly) NSArray *allParameters;
@property (nonatomic, retain) NSMutableDictionary *childIndicesByIdentifier;
@property (nonatomic, readonly) NSArray *children;

+ (bool)supportsSecureCoding;

- (void)_deserialize:(struct CADeserializer { struct __CFData {} *x1; char *x2; char *x3; char *x4; bool x5; }*)arg1;
- (void)_indexChildren;
- (void)_observersChanged:(bool)arg1 deltaCount:(int)arg2;
- (void)_serialize:(struct CASerializer { struct __CFData {} *x1; }*)arg1;
- (id)allParameters;
- (id)childIndicesByIdentifier;
- (id)children;
- (id)copyNodeWithOffset:(unsigned long long)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChildren:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 name:(id)arg2 children:(id)arg3;
- (id)initWithTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4;
- (bool)isGroup;
- (void)setChildIndicesByIdentifier:(id)arg1;
- (id)valueForKey:(id)arg1;

@end
