//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, OrchInstrumentFormValue;

@interface OrchActionValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *actionToken; // @dynamic actionToken;
@property(nonatomic) int actionType; // @dynamic actionType;
@property(nonatomic) _Bool hasActionToken; // @dynamic hasActionToken;
@property(nonatomic) _Bool hasActionType; // @dynamic hasActionType;
@property(nonatomic) _Bool hasInstrumentFormValue; // @dynamic hasInstrumentFormValue;
@property(retain, nonatomic) OrchInstrumentFormValue *instrumentFormValue; // @dynamic instrumentFormValue;

@end

