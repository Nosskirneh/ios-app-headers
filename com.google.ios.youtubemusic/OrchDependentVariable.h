//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class OrchVariable;

@interface OrchDependentVariable : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInitialValue; // @dynamic hasInitialValue;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) OrchVariable *initialValue; // @dynamic initialValue;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end
