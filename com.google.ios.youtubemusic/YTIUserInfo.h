//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIUserInfo_DelegatePurchases, YTIUserInfo_KidsParent;

@interface YTIUserInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUserInfo_DelegatePurchases *delegatePurchases; // @dynamic delegatePurchases;
@property(nonatomic) _Bool enableSafetyMode; // @dynamic enableSafetyMode;
@property(nonatomic) _Bool hasDelegatePurchases; // @dynamic hasDelegatePurchases;
@property(nonatomic) _Bool hasEnableSafetyMode; // @dynamic hasEnableSafetyMode;
@property(nonatomic) _Bool hasIsIncognito; // @dynamic hasIsIncognito;
@property(nonatomic) _Bool hasKidsParent; // @dynamic hasKidsParent;
@property(nonatomic) _Bool hasLockedSafetyMode; // @dynamic hasLockedSafetyMode;
@property(nonatomic) _Bool hasOnBehalfOfUser; // @dynamic hasOnBehalfOfUser;
@property(nonatomic) _Bool hasSafetyMode; // @dynamic hasSafetyMode;
@property(nonatomic) _Bool isIncognito; // @dynamic isIncognito;
@property(retain, nonatomic) YTIUserInfo_KidsParent *kidsParent; // @dynamic kidsParent;
@property(nonatomic) _Bool lockedSafetyMode; // @dynamic lockedSafetyMode;
@property(copy, nonatomic) NSString *onBehalfOfUser; // @dynamic onBehalfOfUser;
@property(nonatomic) int safetyMode; // @dynamic safetyMode;

@end

