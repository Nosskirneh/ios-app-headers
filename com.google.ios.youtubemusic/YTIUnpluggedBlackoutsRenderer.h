//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIThumbnailDetails;

@interface YTIUnpluggedBlackoutsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool allowPlayerControls; // @dynamic allowPlayerControls;
@property(retain, nonatomic) YTIThumbnailDetails *background; // @dynamic background;
@property(retain, nonatomic) NSMutableArray *blackoutsArray; // @dynamic blackoutsArray;
@property(readonly, nonatomic) unsigned long long blackoutsArray_Count; // @dynamic blackoutsArray_Count;
@property(nonatomic) _Bool hasAllowPlayerControls; // @dynamic hasAllowPlayerControls;
@property(nonatomic) _Bool hasBackground; // @dynamic hasBackground;

@end

