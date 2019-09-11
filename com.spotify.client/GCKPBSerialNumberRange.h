//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface GCKPBSerialNumberRange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long firstSerialNumber; // @dynamic firstSerialNumber;
@property(nonatomic) _Bool hasFirstSerialNumber; // @dynamic hasFirstSerialNumber;
@property(nonatomic) _Bool hasIssuerPublicKeyHash; // @dynamic hasIssuerPublicKeyHash;
@property(nonatomic) _Bool hasLastSerialNumber; // @dynamic hasLastSerialNumber;
@property(copy, nonatomic) NSData *issuerPublicKeyHash; // @dynamic issuerPublicKeyHash;
@property(nonatomic) unsigned long long lastSerialNumber; // @dynamic lastSerialNumber;

@end

