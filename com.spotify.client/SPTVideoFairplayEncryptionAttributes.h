//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface SPTVideoFairplayEncryptionAttributes : NSObject
{
    NSData *_assetId;
    NSString *_keyFormat;
    NSString *_keyFormatVersion;
    NSString *_keyMethod;
    long long _encryptionIndex;
}

@property(readonly, nonatomic) long long encryptionIndex; // @synthesize encryptionIndex=_encryptionIndex;
@property(readonly, nonatomic) NSString *keyMethod; // @synthesize keyMethod=_keyMethod;
@property(readonly, nonatomic) NSString *keyFormatVersion; // @synthesize keyFormatVersion=_keyFormatVersion;
@property(readonly, nonatomic) NSString *keyFormat; // @synthesize keyFormat=_keyFormat;
@property(readonly, nonatomic) NSData *assetId; // @synthesize assetId=_assetId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 index:(long long)arg2;

@end

