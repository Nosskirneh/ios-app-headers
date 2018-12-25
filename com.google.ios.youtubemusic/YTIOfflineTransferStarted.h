//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIYtSystemHealthMetric;

@interface YTIOfflineTransferStarted : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long contentBytes; // @dynamic contentBytes;
@property(nonatomic) int detailedNetworkType; // @dynamic detailedNetworkType;
@property(copy, nonatomic) NSString *encryptedVideoId; // @dynamic encryptedVideoId;
@property(nonatomic) _Bool hasContentBytes; // @dynamic hasContentBytes;
@property(nonatomic) _Bool hasDetailedNetworkType; // @dynamic hasDetailedNetworkType;
@property(nonatomic) _Bool hasEncryptedVideoId; // @dynamic hasEncryptedVideoId;
@property(nonatomic) _Bool hasIsAd; // @dynamic hasIsAd;
@property(nonatomic) _Bool hasItag; // @dynamic hasItag;
@property(nonatomic) _Bool hasSelectedVideoQuality; // @dynamic hasSelectedVideoQuality;
@property(nonatomic) _Bool hasStorageFormat; // @dynamic hasStorageFormat;
@property(nonatomic) _Bool hasSystemHealth; // @dynamic hasSystemHealth;
@property(nonatomic) _Bool hasTimeSinceLastAuthUsec; // @dynamic hasTimeSinceLastAuthUsec;
@property(nonatomic) _Bool isAd; // @dynamic isAd;
@property(nonatomic) long long itag; // @dynamic itag;
@property(nonatomic) int selectedVideoQuality; // @dynamic selectedVideoQuality;
@property(nonatomic) int storageFormat; // @dynamic storageFormat;
@property(retain, nonatomic) YTIYtSystemHealthMetric *systemHealth; // @dynamic systemHealth;
@property(nonatomic) long long timeSinceLastAuthUsec; // @dynamic timeSinceLastAuthUsec;

@end
