/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTCircularBitBuffer : NSObject {
    unsigned long long  _beginIndex;
    NSMutableData * _bitVector;
    unsigned long long  _capacity;
}

@property (nonatomic, readonly) unsigned long long beginIndex;
@property (nonatomic, readonly) unsigned long long capacity;

+ (unsigned long long)actualCapacity:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_setBit:(bool)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)beginIndex;
- (unsigned char)bitAtIndex:(unsigned long long)arg1;
- (id)bitVector;
- (unsigned long long)capacity;
- (void)clear;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithData:(id)arg1 andIndex:(unsigned long long)arg2;
- (void)setBit:(bool)arg1 atIndex:(unsigned long long)arg2;

@end
