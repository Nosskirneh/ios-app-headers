//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIAssociatedGameSupportedRenderers, YTIGamingSubscribeButtonSupportedRenderers;

@interface YTIBoxGameRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIAssociatedGameSupportedRenderers *game; // @dynamic game;
@property(nonatomic) _Bool hasGame; // @dynamic hasGame;
@property(nonatomic) _Bool hasSubscribeButton; // @dynamic hasSubscribeButton;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIGamingSubscribeButtonSupportedRenderers *subscribeButton; // @dynamic subscribeButton;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

