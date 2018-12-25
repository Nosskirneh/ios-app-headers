//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIOfflineRefreshMessageSupportedRenderers;

@interface YTIOfflineState : GPBMessage
{
}

+ (id)descriptor;
- (_Bool)isNextActionRefreshStream;
- (_Bool)isNextActionRefreshMetadata;
- (_Bool)isNextActionDeleteAd;
- (_Bool)hasOfflineRefreshActions;
@property(retain, nonatomic) NSMutableArray *offlineRefreshActionsArray;
- (_Bool)isPlayableOffline;
- (id)offlineUpsell;
- (_Bool)hasOfflineUpsell;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(nonatomic) unsigned int expiresInSeconds; // @dynamic expiresInSeconds;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasExpiresInSeconds; // @dynamic hasExpiresInSeconds;
@property(nonatomic) _Bool hasIsOfflineSharingAllowed; // @dynamic hasIsOfflineSharingAllowed;
@property(nonatomic) _Bool hasOfflineRefreshMessage; // @dynamic hasOfflineRefreshMessage;
@property(nonatomic) _Bool hasOfflineSharingDecryptionKey; // @dynamic hasOfflineSharingDecryptionKey;
@property(nonatomic) _Bool hasRefreshInSeconds; // @dynamic hasRefreshInSeconds;
@property(nonatomic) _Bool hasShortMessage; // @dynamic hasShortMessage;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(nonatomic) _Bool isOfflineSharingAllowed; // @dynamic isOfflineSharingAllowed;
@property(retain, nonatomic) YTIOfflineRefreshMessageSupportedRenderers *offlineRefreshMessage; // @dynamic offlineRefreshMessage;
@property(copy, nonatomic) NSData *offlineSharingDecryptionKey; // @dynamic offlineSharingDecryptionKey;
@property(nonatomic) unsigned int refreshInSeconds; // @dynamic refreshInSeconds;
@property(copy, nonatomic) NSString *shortMessage; // @dynamic shortMessage;
@property(copy, nonatomic) NSString *token; // @dynamic token;

@end

