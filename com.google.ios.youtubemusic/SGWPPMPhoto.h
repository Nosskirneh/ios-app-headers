//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SGWPPMPersonFieldMetadata;

@interface SGWPPMPhoto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(nonatomic) _Bool hasIsDefault; // @dynamic hasIsDefault;
@property(nonatomic) _Bool hasIsMonogram; // @dynamic hasIsMonogram;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasMonogramBackground; // @dynamic hasMonogramBackground;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool isDefault; // @dynamic isDefault;
@property(nonatomic) _Bool isMonogram; // @dynamic isMonogram;
@property(retain, nonatomic) SGWPPMPersonFieldMetadata *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *monogramBackground; // @dynamic monogramBackground;

@end

