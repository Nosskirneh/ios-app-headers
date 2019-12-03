//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AFHTTPSessionManager, FXKeychain, NSArray, NSMutableDictionary, NSString, NSURLSessionDataTask, RMStoreKeychainPersistence, VOXRadioCountryModel;

@interface RadioDatabaseProvider : NSObject
{
    long long _radioPurchaseStatus;
    NSMutableDictionary *_cachedObjects;
    NSString *_cachedAccessToken;
    NSString *_localizedRadioPrice;
    VOXRadioCountryModel *_localCountry;
    FXKeychain *_keychain;
    AFHTTPSessionManager *_requestManager;
    RMStoreKeychainPersistence *_inappPersistence;
    NSArray *_countries;
    NSArray *_genres;
    NSArray *_topStations;
    NSArray *_defaultStations;
    NSURLSessionDataTask *_currentSearchTask;
}

+ (id)shared;
@property(retain) NSURLSessionDataTask *currentSearchTask; // @synthesize currentSearchTask=_currentSearchTask;
@property(retain) NSArray *defaultStations; // @synthesize defaultStations=_defaultStations;
@property(retain) NSArray *topStations; // @synthesize topStations=_topStations;
@property(retain) NSArray *genres; // @synthesize genres=_genres;
@property(retain) NSArray *countries; // @synthesize countries=_countries;
@property(retain) RMStoreKeychainPersistence *inappPersistence; // @synthesize inappPersistence=_inappPersistence;
@property(retain) AFHTTPSessionManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) FXKeychain *keychain; // @synthesize keychain=_keychain;
@property(retain) VOXRadioCountryModel *localCountry; // @synthesize localCountry=_localCountry;
@property(retain) NSString *localizedRadioPrice; // @synthesize localizedRadioPrice=_localizedRadioPrice;
- (void).cxx_destruct;
- (void)_radioDidPurchased;
- (id)stationForDict:(id)arg1;
- (void)_cacheStation:(id)arg1 forId:(id)arg2;
- (id)_cachedStationForId:(id)arg1;
- (id)playbackUrlForRestStationUrl:(id)arg1;
- (_Bool)isRadioPurchased;
- (void)cleanAuthAndRedeemData;
- (void)activateRadioFromUrl:(id)arg1 withComplitionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isRadioActivationUrl:(id)arg1;
- (void)checkRadioPurchaseAfterRestoringTransactions;
- (void)buyRadioWithComplitionHandler:(CDUnknownBlockType)arg1;
- (void)testBuyRadioForSimulatorWithComplitionHandler:(CDUnknownBlockType)arg1;
- (void)defineLocalCountryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelSearching;
- (void)searchStationsWithQuery:(id)arg1 skip:(unsigned long long)arg2 limit:(unsigned long long)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;
- (void)fetchDefaultStationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchTopStationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchStationsWithIds:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_fetchStationsWithParameters:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchStationsWithParameters:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchGenresWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchCountriesWithParameters:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (void)authorizeWithComplitionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isAuthorized;
@property(retain, nonatomic) NSString *accessToken;
- (id)stationForId:(id)arg1;
- (void)dealloc;
- (id)init;

@end
