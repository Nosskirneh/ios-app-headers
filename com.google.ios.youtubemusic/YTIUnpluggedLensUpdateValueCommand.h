//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTINamedValue, YTIUnpluggedLensClip;

@interface YTIUnpluggedLensUpdateValueCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUnpluggedLensClip *clip; // @dynamic clip;
@property(nonatomic) _Bool hasClip; // @dynamic hasClip;
@property(nonatomic) _Bool hasUpdatedValue; // @dynamic hasUpdatedValue;
@property(retain, nonatomic) YTINamedValue *updatedValue; // @dynamic updatedValue;

@end
