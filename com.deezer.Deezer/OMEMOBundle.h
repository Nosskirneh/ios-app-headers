//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, OMEMOSignedPreKey;

@interface OMEMOBundle : NSObject
{
    unsigned int _deviceId;
    NSData *_identityKey;
    OMEMOSignedPreKey *_signedPreKey;
    NSArray *_preKeys;
}

@property(readonly, copy, nonatomic) NSArray *preKeys; // @synthesize preKeys=_preKeys;
@property(readonly, nonatomic) OMEMOSignedPreKey *signedPreKey; // @synthesize signedPreKey=_signedPreKey;
@property(readonly, copy, nonatomic) NSData *identityKey; // @synthesize identityKey=_identityKey;
@property(readonly, nonatomic) unsigned int deviceId; // @synthesize deviceId=_deviceId;
- (void).cxx_destruct;
- (id)initWithDeviceId:(unsigned int)arg1 identityKey:(id)arg2 signedPreKey:(id)arg3 preKeys:(id)arg4;
- (id)init;

@end

