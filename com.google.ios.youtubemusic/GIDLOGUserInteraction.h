//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIDLOGCustom, GIDLOGUserEvent;

@interface GIDLOGUserInteraction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIDLOGCustom *custom; // @dynamic custom;
@property(retain, nonatomic) GIDLOGUserEvent *event; // @dynamic event;
@property(nonatomic) _Bool hasCustom; // @dynamic hasCustom;
@property(nonatomic) _Bool hasEvent; // @dynamic hasEvent;

@end

