//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIDropdownSupportedRenderers, YTIFormattedString;

@interface YTIDropdownFormFieldRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool disabled; // @dynamic disabled;
@property(retain, nonatomic) YTIDropdownSupportedRenderers *dropdown; // @dynamic dropdown;
@property(nonatomic) _Bool hasDisabled; // @dynamic hasDisabled;
@property(nonatomic) _Bool hasDropdown; // @dynamic hasDropdown;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;

@end

