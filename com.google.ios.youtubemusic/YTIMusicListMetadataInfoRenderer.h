//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTMMusicDataBoundApplyContainerEntityProtocol-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface YTIMusicListMetadataInfoRenderer : GPBMessage <YTMMusicDataBoundApplyContainerEntityProtocol>
{
}

+ (id)descriptor;
+ (id)ytm_infoRendererForOfflinePlaylistData:(id)arg1;
- (void)ytm_applyContainerEntityReference:(id)arg1 index:(unsigned long long)arg2 cache:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *briefMessagesArray; // @dynamic briefMessagesArray;
@property(readonly, nonatomic) unsigned long long briefMessagesArray_Count; // @dynamic briefMessagesArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasListItemType; // @dynamic hasListItemType;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *iconsArray; // @dynamic iconsArray;
@property(readonly, nonatomic) unsigned long long iconsArray_Count; // @dynamic iconsArray_Count;
@property(nonatomic) int listItemType; // @dynamic listItemType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

