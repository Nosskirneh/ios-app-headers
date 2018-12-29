//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OfflineSyncFeatureObserving-Protocol.h"

@class FeatureNotificationFactory, NSString;
@protocol _TtP8Features25OfflineSyncStatusProvider_;

@interface OfflineSyncFeatureObserver : NSObject <OfflineSyncFeatureObserving>
{
    FeatureNotificationFactory *_featureNotificationFactory;
    id <_TtP8Features25OfflineSyncStatusProvider_> _offlineSyncStatus;
}

@property(readonly, nonatomic) id <_TtP8Features25OfflineSyncStatusProvider_> offlineSyncStatus; // @synthesize offlineSyncStatus=_offlineSyncStatus;
@property(readonly, nonatomic) FeatureNotificationFactory *featureNotificationFactory; // @synthesize featureNotificationFactory=_featureNotificationFactory;
- (void).cxx_destruct;
- (id)offlineSyncFeatureValueChangedSignal;
- (id)initialOfflineSyncFeatureValue;
- (id)offlineSyncFeatureChanges;
- (id)shouldEnableOfflineSyncing;
- (id)initWithFeatureNotificationFactory:(id)arg1 offlineSyncStatusProvider:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
