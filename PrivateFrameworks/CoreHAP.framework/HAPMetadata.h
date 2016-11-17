/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadata : NSObject {
    NSString * _hapBaseUUIDSuffix;
    NSArray * _hapCharacteristics;
    NSArray * _hapProperties;
    NSArray * _hapServices;
    NSArray * _hapSupportsAuthDataTuples;
    NSArray * _hapValueUnits;
    NSMutableArray * _parsedUUIDs;
    NSNumber * _schemaVersion;
    NSNumber * _version;
}

@property (nonatomic, retain) NSString *hapBaseUUIDSuffix;
@property (nonatomic, retain) NSArray *hapCharacteristics;
@property (nonatomic, retain) NSArray *hapProperties;
@property (nonatomic, retain) NSArray *hapServices;
@property (nonatomic, retain) NSArray *hapSupportsAuthDataTuples;
@property (nonatomic, retain) NSArray *hapValueUnits;
@property (nonatomic, retain) NSMutableArray *parsedUUIDs;
@property (nonatomic, retain) NSNumber *schemaVersion;
@property (nonatomic, retain) NSNumber *version;

+ (id)getBuiltinInstance;
+ (id)getSharedInstance;
+ (bool)setSharedInstance:(id)arg1 version:(id)arg2 schemaVersion:(id)arg3;
+ (id)shortenHAPType:(id)arg1 baseUUIDSuffix:(id)arg2;

- (void).cxx_destruct;
- (bool)allowAssociatedService:(id)arg1;
- (id)btleToServiceType:(id)arg1;
- (id)characteristicTypeFromUTI:(id)arg1;
- (id)characteristicUTIFromType:(id)arg1;
- (id)descriptionFromCharacteristicType:(id)arg1;
- (id)descriptionFromServiceType:(id)arg1;
- (id)generateDictionary;
- (id)generateHAPMetadataTuplesDictionary:(id)arg1;
- (id)getDefaultCharacteristicMetadata:(id)arg1;
- (id)getDefaultCharacteristicProperties:(id)arg1;
- (id)getDefaultServiceProperties:(id)arg1;
- (id)hapBaseUUIDSuffix;
- (id)hapCharacteristics;
- (id)hapProperties;
- (id)hapServices;
- (id)hapSupportsAuthDataTuples;
- (id)hapValueUnits;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithServices:(id)arg1 characteristics:(id)arg2 units:(id)arg3 properties:(id)arg4 addAuthDataTuples:(id)arg5 hapBaseUUIDSuffix:(id)arg6;
- (bool)isMandatoryCharacteristic:(id)arg1 forService:(id)arg2;
- (bool)isStandardHAPCharacteristic:(id)arg1;
- (bool)isStandardHAPCharacteristicName:(id)arg1;
- (bool)isStandardHAPService:(id)arg1;
- (bool)isStandardHAPServiceName:(id)arg1;
- (bool)isStandardHAPUnitName:(id)arg1;
- (id)parseCharacteristicServiceTuples:(id)arg1;
- (id)parseCharacteristicValue:(id)arg1;
- (id)parseCharacteristics:(id)arg1;
- (bool)parseMetadata:(id)arg1;
- (id)parseProperties:(id)arg1;
- (id)parseServiceCharacteristics:(id)arg1;
- (id)parseServices:(id)arg1;
- (id)parseUnits:(id)arg1;
- (bool)parseVersion:(id)arg1;
- (id)parsedUUIDs;
- (id)schemaVersion;
- (id)serviceTypeToBTLE:(id)arg1;
- (id)serviceUTIFromType:(id)arg1;
- (void)setHapBaseUUIDSuffix:(id)arg1;
- (void)setHapCharacteristics:(id)arg1;
- (void)setHapProperties:(id)arg1;
- (void)setHapServices:(id)arg1;
- (void)setHapSupportsAuthDataTuples:(id)arg1;
- (void)setHapValueUnits:(id)arg1;
- (void)setParsedUUIDs:(id)arg1;
- (void)setSchemaVersion:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)shouldFilterServiceOfType:(id)arg1;
- (bool)supportsAdditionalAuthorizationData:(id)arg1 forService:(id)arg2;
- (bool)validateMandatoryCharacteristics:(id)arg1 forService:(id)arg2;
- (id)version;

@end
