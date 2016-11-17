/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKUserIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSData * _encryptedPersonalInfo;
    NSString * _firstName;
    bool  _hasiCloudAccount;
    bool  _isCached;
    NSString * _lastName;
    CKUserIdentityLookupInfo * _lookupInfo;
    NSPersonNameComponents * _nameComponents;
    NSData * _outOfNetworkPrivateKey;
    unsigned long long  _publicKeyVersion;
    NSData * _publicSharingKey;
    CKRecordID * _userRecordID;
}

@property (nonatomic, retain) NSData *encryptedPersonalInfo;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic) bool hasiCloudAccount;
@property (nonatomic) bool isCached;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, copy) CKUserIdentityLookupInfo *lookupInfo;
@property (nonatomic, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, retain) NSData *outOfNetworkPrivateKey;
@property (nonatomic) unsigned long long publicKeyVersion;
@property (nonatomic, retain) NSData *publicSharingKey;
@property (nonatomic, copy) CKRecordID *userRecordID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesToDescribe:(bool)arg1;
- (id)_init;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPersonalInfo;
- (id)firstName;
- (unsigned long long)hash;
- (bool)hasiCloudAccount;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (bool)isCached;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToUserIdentity:(id)arg1;
- (bool)isEquivalentToUserIdentityOrPublicKey:(id)arg1;
- (bool)isOutOfNetwork;
- (id)lastName;
- (id)lookupInfo;
- (id)nameComponents;
- (id)outOfNetworkPrivateKey;
- (unsigned long long)publicKeyVersion;
- (id)publicSharingKey;
- (void)setEncryptedPersonalInfo:(id)arg1;
- (void)setHasiCloudAccount:(bool)arg1;
- (void)setIsCached:(bool)arg1;
- (void)setLookupInfo:(id)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setOutOfNetworkPrivateKey:(id)arg1;
- (void)setPublicKeyVersion:(unsigned long long)arg1;
- (void)setPublicSharingKey:(id)arg1;
- (void)setUserRecordID:(id)arg1;
- (id)userRecordID;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2 participantID:(id)arg3;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2 participantID:(id)arg3;
- (bool)hasEncryptedPersonalInfo;

@end
