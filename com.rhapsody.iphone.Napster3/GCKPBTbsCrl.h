//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class NSMutableArray;

@interface GCKPBTbsCrl : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNotAfterSeconds; // @dynamic hasNotAfterSeconds;
@property(nonatomic) _Bool hasNotBeforeSeconds; // @dynamic hasNotBeforeSeconds;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(nonatomic) unsigned long long notAfterSeconds; // @dynamic notAfterSeconds;
@property(nonatomic) unsigned long long notBeforeSeconds; // @dynamic notBeforeSeconds;
@property(retain, nonatomic) NSMutableArray *revokedPublicKeyHashesArray; // @dynamic revokedPublicKeyHashesArray;
@property(readonly, nonatomic) unsigned long long revokedPublicKeyHashesArray_Count; // @dynamic revokedPublicKeyHashesArray_Count;
@property(retain, nonatomic) NSMutableArray *revokedSerialNumberRangesArray; // @dynamic revokedSerialNumberRangesArray;
@property(readonly, nonatomic) unsigned long long revokedSerialNumberRangesArray_Count; // @dynamic revokedSerialNumberRangesArray_Count;
@property(nonatomic) unsigned long long version; // @dynamic version;

@end

