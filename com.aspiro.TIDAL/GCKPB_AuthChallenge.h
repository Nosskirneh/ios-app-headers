//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class NSData;

@interface GCKPB_AuthChallenge : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHashAlgorithm; // @dynamic hasHashAlgorithm;
@property(nonatomic) _Bool hasSenderNonce; // @dynamic hasSenderNonce;
@property(nonatomic) _Bool hasSignatureAlgorithm; // @dynamic hasSignatureAlgorithm;
@property(nonatomic) int hashAlgorithm; // @dynamic hashAlgorithm;
@property(retain, nonatomic) NSData *senderNonce; // @dynamic senderNonce;
@property(nonatomic) int signatureAlgorithm; // @dynamic signatureAlgorithm;

@end

