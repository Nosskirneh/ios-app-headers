//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, OrchImageWithCaption;

@interface OrchAccountOption : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) OrchImageWithCaption *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end
