//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GCKPB_DeviceFeature_DeviceFeatureInfo : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *featureName; // @dynamic featureName;
@property(nonatomic) _Bool hasFeatureName; // @dynamic hasFeatureName;
@property(nonatomic) _Bool hasLastConnectionTimeMs; // @dynamic hasLastConnectionTimeMs;
@property(nonatomic) long long lastConnectionTimeMs; // @dynamic lastConnectionTimeMs;

@end

