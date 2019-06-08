//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class NSData, NSMutableArray;

@interface GCKPBAuthResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *clientAuthCertificate; // @dynamic clientAuthCertificate;
@property(copy, nonatomic) NSData *crl; // @dynamic crl;
@property(nonatomic) _Bool hasClientAuthCertificate; // @dynamic hasClientAuthCertificate;
@property(nonatomic) _Bool hasCrl; // @dynamic hasCrl;
@property(nonatomic) _Bool hasHashAlgorithm; // @dynamic hasHashAlgorithm;
@property(nonatomic) _Bool hasSenderNonce; // @dynamic hasSenderNonce;
@property(nonatomic) _Bool hasSignature; // @dynamic hasSignature;
@property(nonatomic) int hashAlgorithm; // @dynamic hashAlgorithm;
@property(retain, nonatomic) NSMutableArray *intermediateCertificateArray; // @dynamic intermediateCertificateArray;
@property(readonly, nonatomic) unsigned long long intermediateCertificateArray_Count; // @dynamic intermediateCertificateArray_Count;
@property(copy, nonatomic) NSData *senderNonce; // @dynamic senderNonce;
@property(copy, nonatomic) NSData *signature; // @dynamic signature;

@end

