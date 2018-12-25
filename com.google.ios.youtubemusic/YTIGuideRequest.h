//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIGuideNotificationsParams, YTIInnerTubeContext;

@interface YTIGuideRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool androidExtendedPermissions; // @dynamic androidExtendedPermissions;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool criticalRead; // @dynamic criticalRead;
@property(nonatomic) _Bool fetchLiveState; // @dynamic fetchLiveState;
@property(nonatomic) _Bool hasAndroidExtendedPermissions; // @dynamic hasAndroidExtendedPermissions;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasCriticalRead; // @dynamic hasCriticalRead;
@property(nonatomic) _Bool hasFetchLiveState; // @dynamic hasFetchLiveState;
@property(nonatomic) _Bool hasNotificationsParams; // @dynamic hasNotificationsParams;
@property(retain, nonatomic) YTIGuideNotificationsParams *notificationsParams; // @dynamic notificationsParams;
@property(retain, nonatomic) NSMutableArray *supportedTokensArray; // @dynamic supportedTokensArray;
@property(readonly, nonatomic) unsigned long long supportedTokensArray_Count; // @dynamic supportedTokensArray_Count;

@end
