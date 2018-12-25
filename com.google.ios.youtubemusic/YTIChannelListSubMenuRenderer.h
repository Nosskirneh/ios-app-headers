//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTIChannelListSubMenuContentSize, YTICommand;

@interface YTIChannelListSubMenuRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *channelsButton; // @dynamic channelsButton;
@property(retain, nonatomic) YTICommand *channelsEndpoint; // @dynamic channelsEndpoint;
@property(retain, nonatomic) YTIChannelListSubMenuContentSize *contentSize; // @dynamic contentSize;
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(nonatomic) _Bool hasChannelsButton; // @dynamic hasChannelsButton;
@property(nonatomic) _Bool hasChannelsEndpoint; // @dynamic hasChannelsEndpoint;
@property(nonatomic) _Bool hasContentSize; // @dynamic hasContentSize;
@property(nonatomic) _Bool hasResetFilter; // @dynamic hasResetFilter;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *resetFilter; // @dynamic resetFilter;
@property(nonatomic) int style; // @dynamic style;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

