//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTAbbaDataSourceDelegate-Protocol.h"
#import "SPTAbbaFeatureFlags-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"

@class NSDate, NSDictionary, NSMapTable, NSMutableArray, NSString, NSTimer, SPTAbbaLogger;
@protocol SPTAbbaDataSource, SPTLocalSettings, SPTOfflineModeState, SPTProductState;

@interface SPTAbbaFeatureFlags : NSObject <SPTAbbaDataSourceDelegate, SPTProductStateObserver, SPTOfflineModeStateObserver, SPTAbbaFeatureFlags>
{
    _Bool _loading;
    _Bool _loaded;
    id <SPTAbbaDataSource> _dataSource;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    id <SPTOfflineModeState> _offlineModeState;
    NSMapTable *_observers;
    NSDictionary *_flags;
    NSTimer *_refreshTimer;
    double _refreshInterval;
    NSDate *_lastLookupTimestamp;
    NSDate *_lastRefreshTimestamp;
    NSMutableArray *_lookedUpKeys;
    SPTAbbaLogger *_abbaLogger;
}

@property(retain, nonatomic) SPTAbbaLogger *abbaLogger; // @synthesize abbaLogger=_abbaLogger;
@property(retain) NSMutableArray *lookedUpKeys; // @synthesize lookedUpKeys=_lookedUpKeys;
@property(retain) NSDate *lastRefreshTimestamp; // @synthesize lastRefreshTimestamp=_lastRefreshTimestamp;
@property(retain) NSDate *lastLookupTimestamp; // @synthesize lastLookupTimestamp=_lastLookupTimestamp;
@property double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(nonatomic) __weak NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain) NSDictionary *flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTAbbaDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)dealloc;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)invalidate;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)abbaDataSourceDidCancelRequest:(id)arg1;
- (void)abbaDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)abbaDataSource:(id)arg1 didLoadFeatureFlags:(id)arg2;
- (void)executeBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)createRefreshTimer;
- (void)refresh;
- (void)scheduledRefresh;
@property(readonly, nonatomic, getter=isCacheAvailable) _Bool cacheAvailable;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)variantForFlagName:(id)arg1;
- (void)logAccessForFlagName:(id)arg1 variant:(id)arg2;
- (void)logAccessForFlagName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
- (id)initWithDataSource:(id)arg1 productState:(id)arg2 abbaLogger:(id)arg3 localSettings:(id)arg4 offlineModeState:(id)arg5 refreshInterval:(double)arg6;
- (id)debugValues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

