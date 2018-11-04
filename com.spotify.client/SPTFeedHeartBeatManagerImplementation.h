//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeedHeartBeatManager.h"

@class NSString, SPTFeedHeartBeatRefreshStore, SPTFeedNetworkService;

@interface SPTFeedHeartBeatManagerImplementation : NSObject <SPTFeedHeartBeatManager>
{
    id <SPTLocalSettings> _localSettings;
    id <SPTFeedFeatureFlags> _feedFeatureFlags;
    SPTFeedNetworkService *_feedNetworkService;
    SPTFeedHeartBeatRefreshStore *_heartBeatRefreshStore;
    long long _newContentFeedIcon;
}

@property(nonatomic) long long newContentFeedIcon; // @synthesize newContentFeedIcon=_newContentFeedIcon;
@property(retain, nonatomic) SPTFeedHeartBeatRefreshStore *heartBeatRefreshStore; // @synthesize heartBeatRefreshStore=_heartBeatRefreshStore;
@property(retain, nonatomic) SPTFeedNetworkService *feedNetworkService; // @synthesize feedNetworkService=_feedNetworkService;
@property(retain, nonatomic) id <SPTFeedFeatureFlags> feedFeatureFlags; // @synthesize feedFeatureFlags=_feedFeatureFlags;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)saveMostRecentFeedEntity:(id)arg1;
- (void)saveLastUpdatedTimestamp:(double)arg1;
- (_Bool)isFeedEntityMoreRecent:(id)arg1;
- (void)fetchMostRecentEntityForColdStart:(CDUnknownBlockType)arg1;
- (void)feedHasNewUpdate:(CDUnknownBlockType)arg1;
- (id)initWithLocalSettings:(id)arg1 feedNetworkService:(id)arg2 heartBeatRefreshStore:(id)arg3 feedFeatureFlags:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

