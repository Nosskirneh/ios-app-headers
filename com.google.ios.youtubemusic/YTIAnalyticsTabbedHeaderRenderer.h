//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIFormattedString, YTIThumbnailDetails;

@interface YTIAnalyticsTabbedHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool forceBlank; // @dynamic forceBlank;
@property(nonatomic) _Bool hasForceBlank; // @dynamic hasForceBlank;
@property(nonatomic) _Bool hasHeaderColorType; // @dynamic hasHeaderColorType;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasToggleState; // @dynamic hasToggleState;
@property(nonatomic) _Bool hasVideoThumbnail; // @dynamic hasVideoThumbnail;
@property(nonatomic) int headerColorType; // @dynamic headerColorType;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) NSMutableArray *tabGroupsArray; // @dynamic tabGroupsArray;
@property(readonly, nonatomic) unsigned long long tabGroupsArray_Count; // @dynamic tabGroupsArray_Count;
@property(retain, nonatomic) NSMutableArray *tabsArray; // @dynamic tabsArray;
@property(readonly, nonatomic) unsigned long long tabsArray_Count; // @dynamic tabsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(nonatomic) int toggleState; // @dynamic toggleState;
@property(retain, nonatomic) YTIThumbnailDetails *videoThumbnail; // @dynamic videoThumbnail;

@end

