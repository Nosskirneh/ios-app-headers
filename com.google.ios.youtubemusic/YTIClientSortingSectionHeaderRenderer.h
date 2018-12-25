//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTInnerTubeSectionHeaderRenderer-Protocol.h"
#import "YTItemSectionHeaderMenu-Protocol.h"

@class NSData, NSMutableArray, NSString, YTIFormattedString;

@interface YTIClientSortingSectionHeaderRenderer : GPBMessage <YTInnerTubeSectionHeaderRenderer, YTItemSectionHeaderMenu>
{
}

+ (id)descriptor;
- (id)buttons;
- (id)serviceEndpoints;
- (id)menuHeaderTitle;
- (id)menuOptions;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *buttonsArray; // @dynamic buttonsArray;
@property(readonly, nonatomic) unsigned long long buttonsArray_Count; // @dynamic buttonsArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *subMenuItemsArray; // @dynamic subMenuItemsArray;
@property(readonly, nonatomic) unsigned long long subMenuItemsArray_Count; // @dynamic subMenuItemsArray_Count;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

