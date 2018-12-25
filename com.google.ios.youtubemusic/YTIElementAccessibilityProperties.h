//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTPropertyMapper-Protocol.h"

@class GPBEnumArray, NSString;

@interface YTIElementAccessibilityProperties : GPBMessage <YTPropertyMapper>
{
}

+ (id)descriptor;
- (_Bool)requiresNodeLoaded;
- (void)applyPropertiesTo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasIsAccessibilityContainer; // @dynamic hasIsAccessibilityContainer;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *hint; // @dynamic hint;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) _Bool isAccessibilityContainer; // @dynamic isAccessibilityContainer;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(readonly) Class superclass;
@property(retain, nonatomic) GPBEnumArray *traitsArray; // @dynamic traitsArray;
@property(readonly, nonatomic) unsigned long long traitsArray_Count; // @dynamic traitsArray_Count;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end
