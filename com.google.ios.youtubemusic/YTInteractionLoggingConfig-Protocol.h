//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol YTInteractionLoggingConfig <NSObject>
- (NSArray *)layersScreenConfigs;
- (_Bool)isSeparatePlaybackAssociationPayloadEnabled;
- (_Bool)isAttachChildOnGelEnabled;
- (_Bool)isLayersEnabled;
- (unsigned long long)interactionLoggingMaxAgeHours;
- (_Bool)interactionLoggingEnableClicksForNavEndpoints;
- (_Bool)interactionLoggingEnabled;
@end

