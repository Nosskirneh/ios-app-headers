//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTPropertyMapper-Protocol.h"

@class NSMutableArray, NSString;

@interface YTIElementIdentifierProperties : GPBMessage <YTPropertyMapper>
{
}

+ (id)descriptor;
- (_Bool)requiresNodeLoaded;
- (void)applyPropertiesTo:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *classNamesArray; // @dynamic classNamesArray;
@property(readonly, nonatomic) unsigned long long classNamesArray_Count; // @dynamic classNamesArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(readonly) Class superclass;

@end

