//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIElementCommandContainer;

@interface YTIOldSwitchType : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasOffStateOnTap; // @dynamic hasOffStateOnTap;
@property(nonatomic) _Bool hasOn; // @dynamic hasOn;
@property(nonatomic) _Bool hasOnStateOnTap; // @dynamic hasOnStateOnTap;
@property(retain, nonatomic) YTIElementCommandContainer *offStateOnTap; // @dynamic offStateOnTap;
@property(nonatomic) _Bool on; // @dynamic on;
@property(retain, nonatomic) YTIElementCommandContainer *onStateOnTap; // @dynamic onStateOnTap;

@end

