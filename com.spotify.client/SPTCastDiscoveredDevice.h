//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTCastDiscoveredDevice : NSObject
{
    _Bool _isAudioGroup;
    long long _status;
    NSString *_version;
    NSString *_deviceId;
    NSString *_publicKey;
    NSString *_remoteName;
    NSString *_accountReq;
    NSString *_deviceType;
    NSString *_brandDisplayName;
    NSString *_modelDisplayName;
    NSString *_libraryVersion;
    NSString *_ipAddress;
}

@property(nonatomic) _Bool isAudioGroup; // @synthesize isAudioGroup=_isAudioGroup;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(retain, nonatomic) NSString *libraryVersion; // @synthesize libraryVersion=_libraryVersion;
@property(retain, nonatomic) NSString *modelDisplayName; // @synthesize modelDisplayName=_modelDisplayName;
@property(retain, nonatomic) NSString *brandDisplayName; // @synthesize brandDisplayName=_brandDisplayName;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) NSString *accountReq; // @synthesize accountReq=_accountReq;
@property(retain, nonatomic) NSString *remoteName; // @synthesize remoteName=_remoteName;
@property(retain, nonatomic) NSString *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)payloadDictionary;
- (id)dictionaryRepresentation:(id)arg1;
- (id)initWithDeviceId:(id)arg1 name:(id)arg2 isAudioOnly:(_Bool)arg3 isAudioGroup:(_Bool)arg4 ipAddress:(id)arg5;

@end

