//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, POEMPersonFieldMetadata, POEMPhoneExtendedData;

@interface POEMPhone : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *canonicalizedForm; // @dynamic canonicalizedForm;
@property(retain, nonatomic) POEMPhoneExtendedData *extendedData; // @dynamic extendedData;
@property(copy, nonatomic) NSString *formattedType; // @dynamic formattedType;
@property(nonatomic) _Bool hasCanonicalizedForm; // @dynamic hasCanonicalizedForm;
@property(nonatomic) _Bool hasExtendedData; // @dynamic hasExtendedData;
@property(nonatomic) _Bool hasFormattedType; // @dynamic hasFormattedType;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasUri; // @dynamic hasUri;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) POEMPersonFieldMetadata *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end

