//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, OrchFixInfoFormValue, OrchInstrumentFormValue, OrchUiFieldValue;

@interface OrchInstrumentOptionValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchFixInfoFormValue *fixInfoFormValue; // @dynamic fixInfoFormValue;
@property(nonatomic) _Bool hasFixInfoFormValue; // @dynamic hasFixInfoFormValue;
@property(nonatomic) _Bool hasInstrumentFormValue; // @dynamic hasInstrumentFormValue;
@property(nonatomic) _Bool hasInstrumentId; // @dynamic hasInstrumentId;
@property(nonatomic) _Bool hasInstrumentRankValue; // @dynamic hasInstrumentRankValue;
@property(nonatomic) _Bool hasInstrumentToken; // @dynamic hasInstrumentToken;
@property(retain, nonatomic) OrchInstrumentFormValue *instrumentFormValue; // @dynamic instrumentFormValue;
@property(copy, nonatomic) NSString *instrumentId; // @dynamic instrumentId;
@property(retain, nonatomic) OrchUiFieldValue *instrumentRankValue; // @dynamic instrumentRankValue;
@property(copy, nonatomic) NSData *instrumentToken; // @dynamic instrumentToken;

@end
