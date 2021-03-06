//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface ANGDNSCacheManager : NSObject
{
    _Bool _hasCache;
    _Bool _apiIsUp;
    _Bool _artIsUp;
    _Bool _isFetching;
    _Bool _missedFetch;
    NSArray *_dynamicAddressesForApi;
    NSArray *_dynamicAddressesForArt;
    NSArray *_staticAddressesForApi;
    NSArray *_staticAddressesForArt;
    NSString *_apiErrorMessage;
    NSString *_currentApiAddress;
    NSString *_currentArtAddress;
    NSDate *_lastCacheDate;
    NSDate *_lastFetchDate;
    NSArray *_apiAddressChain;
    unsigned long long _addressChainIndex;
}

+ (void)startDNSCacher;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long addressChainIndex; // @synthesize addressChainIndex=_addressChainIndex;
@property(retain, nonatomic) NSArray *apiAddressChain; // @synthesize apiAddressChain=_apiAddressChain;
@property(nonatomic) _Bool missedFetch; // @synthesize missedFetch=_missedFetch;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) NSDate *lastFetchDate; // @synthesize lastFetchDate=_lastFetchDate;
@property(retain, nonatomic) NSDate *lastCacheDate; // @synthesize lastCacheDate=_lastCacheDate;
@property(retain, nonatomic) NSString *currentArtAddress; // @synthesize currentArtAddress=_currentArtAddress;
@property(retain, nonatomic) NSString *currentApiAddress; // @synthesize currentApiAddress=_currentApiAddress;
@property(retain, nonatomic) NSString *apiErrorMessage; // @synthesize apiErrorMessage=_apiErrorMessage;
@property(nonatomic) _Bool artIsUp; // @synthesize artIsUp=_artIsUp;
@property(nonatomic) _Bool apiIsUp; // @synthesize apiIsUp=_apiIsUp;
@property(nonatomic) _Bool hasCache; // @synthesize hasCache=_hasCache;
@property(retain, nonatomic) NSArray *staticAddressesForArt; // @synthesize staticAddressesForArt=_staticAddressesForArt;
@property(retain, nonatomic) NSArray *staticAddressesForApi; // @synthesize staticAddressesForApi=_staticAddressesForApi;
@property(retain, nonatomic) NSArray *dynamicAddressesForArt; // @synthesize dynamicAddressesForArt=_dynamicAddressesForArt;
@property(retain, nonatomic) NSArray *dynamicAddressesForApi; // @synthesize dynamicAddressesForApi=_dynamicAddressesForApi;
- (void).cxx_destruct;
- (void)endUsingCache;
@property(readonly, nonatomic) _Bool cacheIsInUse;
- (_Bool)cycleToNextApiAddress;
- (void)beginUsingCache;
- (void)parseResult:(id)arg1;
@property(readonly, nonatomic) double cacheAge;
- (void)endFetch;
- (void)fetchRecords;
- (void)runDelayedFetchIn:(double)arg1;
- (void)runDelayedFetch;
- (void)start;

@end

