//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SGWPPAffinityMetadata_ClientInteractionInfo, SGWPPAffinityMetadata_CloudDeviceDataInfo;

@interface SGWPPAffinityMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SGWPPAffinityMetadata_ClientInteractionInfo *clientInteractionInfo; // @dynamic clientInteractionInfo;
@property(retain, nonatomic) SGWPPAffinityMetadata_CloudDeviceDataInfo *cloudDeviceDataInfo; // @dynamic cloudDeviceDataInfo;
@property(nonatomic) double cloudScore; // @dynamic cloudScore;
@property(nonatomic) _Bool hasClientInteractionInfo; // @dynamic hasClientInteractionInfo;
@property(nonatomic) _Bool hasCloudDeviceDataInfo; // @dynamic hasCloudDeviceDataInfo;
@property(nonatomic) _Bool hasCloudScore; // @dynamic hasCloudScore;

@end

