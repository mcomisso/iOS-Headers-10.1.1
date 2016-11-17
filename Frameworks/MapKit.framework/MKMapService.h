/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapService : NSObject

+ (id)sharedService;

- (void)_mapItemsForResponseData:(id)arg1 handler:(id /* block */)arg2;
- (id)_mk_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 traits:(id)arg3;
- (id)_ticketForReverseGeocodeCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 includeETA:(bool)arg3 preserveOriginalLocation:(bool)arg4 traits:(id)arg5;
- (void)captureMapLaunchEventWithLaunchUrl:(id)arg1 sourceAppId:(id)arg2 ttlEventTime:(id)arg3 traits:(id)arg4;
- (void)captureMapSettingsWithAvoidHighways:(bool)arg1;
- (void)captureMapSettingsWithAvoidTolls:(bool)arg1;
- (void)captureMapSettingsWithFindMyCarEnabled:(bool)arg1;
- (void)captureMapSettingsWithLabelEnabled:(bool)arg1;
- (void)captureMapSettingsWithNavVoiceVolume:(int)arg1;
- (void)captureMapSettingsWithPauseSpokenAudioEnabled:(bool)arg1;
- (void)captureMapSettingsWithPreferredTransportMode:(int)arg1;
- (void)captureMapSettingsWithTrafficEnabled:(bool)arg1;
- (void)captureMapUIStateWithIsAirQualityShown:(bool)arg1;
- (void)captureMapUIStateWithLayoutInfo:(int)arg1 layoutStyle:(int)arg2;
- (void)captureMapUIStateWithLayoutInfo:(int)arg1 layoutStyle:(int)arg2 numberOfTabs:(unsigned int)arg3 currentTabIndex:(unsigned int)arg4;
- (void)captureMapsSettingsWithPreferredTransportMode:(int)arg1 avoidTolls:(bool)arg2 avoidHighways:(bool)arg3 navVoiceVolume:(int)arg4 pauseSpokenAudioEnabled:(bool)arg5 findMyCarEnabled:(bool)arg6 trafficEnabled:(bool)arg7 labelEnabled:(bool)arg8;
- (void)capturePairedDeviceStateWithDeviceType:(int)arg1 isConnected:(bool)arg2 deviceOSVersion:(id)arg3 deviceHwIdentifier:(id)arg4;
- (void)capturePlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 actionURL:(id)arg10 photoID:(id)arg11 traits:(id)arg12 placeCardType:(int)arg13 localizedMapItemCategory:(id)arg14 availableActions:(id)arg15 unactionableUIElements:(id)arg16;
- (void)captureTransitPlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 transitCardCategory:(int)arg10 transitSystem:(id)arg11 transitDepartureSequence:(id)arg12 transitIncident:(id)arg13 traits:(id)arg14;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 categoriesDisplayed:(id)arg4 categorySelected:(id)arg5 traits:(id)arg6;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapRegion:(id)arg4 zoomLevel:(double)arg5 traits:(id)arg6;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 placeActionDetails:(id)arg4 traits:(id)arg5;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 routeDetails:(id)arg4 traits:(id)arg5;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 traits:(id)arg4;
- (id)defaultTraits;
- (id)defaultTraitsForAnalyticsWithTraits:(id)arg1;
- (id)defaultTraitsWithTraits:(id)arg1;
- (id)defaultTraitsWithTransportType:(unsigned long long)arg1;
- (void)incrementAGGDInteractedWithPlaceCardKeyWithType:(unsigned long long)arg1 incrementValue:(long long)arg2;
- (void)incrementAGGDOpenPlaceCardKeyWithType:(unsigned long long)arg1 incrementValue:(long long)arg2;
- (id)mapItemsForPlacesInDetails:(id)arg1;
- (void)submitUsageForTraits:(id)arg1;
- (void)submitUsageForTraits:(id)arg1 actionDetails:(id)arg2 routeDetails:(id)arg3;
- (void)submitUsageForTraits:(id)arg1 eventValue:(id)arg2;
- (void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5;
- (void)submitUsageForTraitsWithAction:(int)arg1;
- (void)submitUsageForTraitsWithAction:(int)arg1 actionDetails:(id)arg2 uiTarget:(int)arg3;
- (void)submitUsageForTraitsWithAction:(int)arg1 actionDetails:(id)arg2 uiTarget:(int)arg3 eventValue:(id)arg4;
- (void)submitUsageForTraitsWithAction:(int)arg1 categoriesDisplayed:(id)arg2 categorySelected:(id)arg3;
- (void)submitUsageForTraitsWithAction:(int)arg1 flyoverAnimationID:(unsigned long long)arg2;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitIncident:(id)arg8;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 targetID:(unsigned long long)arg4;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 targetID:(unsigned long long)arg3;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapRegion:(id)arg2 zoomLevel:(double)arg3;
- (void)submitUsageForTraitsWithAction:(int)arg1 regionName:(id)arg2;
- (void)submitUsageForTraitsWithAction:(int)arg1 uiTarget:(int)arg2;
- (void)submitUserAction:(id)arg1 eventKey:(int)arg2;
- (void)submitUserAction:(id)arg1 eventKey:(int)arg2 eventValue:(id)arg3;
- (void)submitUserAction:(id)arg1 eventKey:(int)arg2 selectedIndex:(unsigned long long)arg3 uniqueID:(id)arg4;
- (void)submitUserAction:(id)arg1 eventKey:(int)arg2 uniqueURL:(id)arg3;
- (void)submitUserAction:(id)arg1 sharingType:(id)arg2;
- (id)ticketForBatchPopularNearbyForSearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)ticketForCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForCategoryListWithTraits:(id)arg1;
- (id)ticketForExternalBusinessID:(id)arg1 contentProvider:(id)arg2 includeETA:(bool)arg3 traits:(id)arg4;
- (id)ticketForExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)ticketForForwardGeocodeAddress:(id)arg1 traits:(id)arg2;
- (id)ticketForForwardGeocodeAddressDictionary:(id)arg1 traits:(id)arg2;
- (id)ticketForForwardGeocodeString:(id)arg1 traits:(id)arg2;
- (id)ticketForFreshBusinessClaimComponentWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 traits:(id)arg3;
- (id)ticketForFreshMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 includeETA:(bool)arg4 traits:(id)arg5;
- (id)ticketForMUIDs:(id)arg1 includeETA:(bool)arg2 traits:(id)arg3;
- (id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 includeETA:(bool)arg4 traits:(id)arg5;
- (id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6;
- (id)ticketForNearestTransitStation:(unsigned long long)arg1 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 includeETA:(bool)arg3 traits:(id)arg4;
- (id)ticketForNonExpiredMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 includeETA:(bool)arg4 traits:(id)arg5;
- (id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3;
- (id)ticketForPlaceRefinementRequestWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 addressLine:(id)arg2 placeName:(id)arg3 traits:(id)arg4;
- (id)ticketForPopularNearbyForSearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForProblem:(id)arg1 mapItemForProblemContext:(id)arg2 mapItemForStartDirectionsSearchInput:(id)arg3 mapitemForEndDirectionsSearchInput:(id)arg4 pushToken:(id)arg5 allowContactBackAtEmailAddress:(id)arg6 traits:(id)arg7;
- (id)ticketForProblemResubmission:(id)arg1 traits:(id)arg2;
- (id)ticketForReverseGeocodeCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 includeETA:(bool)arg2 traits:(id)arg3;
- (id)ticketForReverseGeocodeDroppedPinCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 traits:(id)arg2;
- (id)ticketForSearchAlongRouteWithCategory:(id)arg1 zilchData:(id)arg2 sessionState:(id)arg3 routeId:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)ticketForSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 includeETA:(bool)arg4 traits:(id)arg5;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 relatedSearchSuggestion:(id)arg3 maxResults:(unsigned int)arg4 includeETA:(bool)arg5 traits:(id)arg6;
- (id)ticketForTransitLines:(id)arg1 traits:(id)arg2;
- (id)ticketForURLQuery:(id)arg1 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 maxResults:(unsigned int)arg6 traits:(id)arg7;

@end
