//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class IManagerPageValue, OrchFormFieldReference, OrchRequestContext;

@interface IManagerRefreshPageRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchRequestContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasPageValue; // @dynamic hasPageValue;
@property(nonatomic) _Bool hasRefreshTriggerField; // @dynamic hasRefreshTriggerField;
@property(retain, nonatomic) IManagerPageValue *pageValue; // @dynamic pageValue;
@property(retain, nonatomic) OrchFormFieldReference *refreshTriggerField; // @dynamic refreshTriggerField;

@end

