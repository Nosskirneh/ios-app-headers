//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, POEMEmail_Certificate_CertificateStatus, POEMPersonFieldMetadata;

@interface POEMEmail_Certificate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *configurationName; // @dynamic configurationName;
@property(nonatomic) _Bool hasConfigurationName; // @dynamic hasConfigurationName;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(retain, nonatomic) POEMPersonFieldMetadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) POEMEmail_Certificate_CertificateStatus *status; // @dynamic status;

@end

