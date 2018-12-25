//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTIFormattedString, YTIGamingInventorySupportedRenderers, YTIIcon;

@interface YTIGamingInventoryRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *addChannelsButton; // @dynamic addChannelsButton;
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(retain, nonatomic) YTIGamingInventorySupportedRenderers *emptyListMessage; // @dynamic emptyListMessage;
@property(nonatomic) int gamingInventoryType; // @dynamic gamingInventoryType;
@property(nonatomic) _Bool hasAddChannelsButton; // @dynamic hasAddChannelsButton;
@property(nonatomic) _Bool hasEmptyListMessage; // @dynamic hasEmptyListMessage;
@property(nonatomic) _Bool hasGamingInventoryType; // @dynamic hasGamingInventoryType;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasImportChannelsButton; // @dynamic hasImportChannelsButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) YTIButtonSupportedRenderers *importChannelsButton; // @dynamic importChannelsButton;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
