//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GenericSelectorPageValue, OrchRequestContext;

@interface GenericSelectorSubmitRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchRequestContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasPageValue; // @dynamic hasPageValue;
@property(retain, nonatomic) GenericSelectorPageValue *pageValue; // @dynamic pageValue;

@end

