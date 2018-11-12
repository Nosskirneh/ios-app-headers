//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EAAccessory, NSData, NSString;

@interface SPTAccessory : NSObject
{
    NSString *_sessionId;
    NSString *_category;
    NSString *_identifier;
    NSString *_clientID;
    NSString *_name;
    NSString *_company;
    NSString *_model;
    NSString *_version;
    NSString *_integrationType;
    NSString *_transportType;
    EAAccessory *_externalAccessory;
}

@property(readonly, nonatomic) EAAccessory *externalAccessory; // @synthesize externalAccessory=_externalAccessory;
@property(readonly, copy, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) NSString *integrationType; // @synthesize integrationType=_integrationType;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSString *company; // @synthesize company=_company;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)generateRandomSessionId;
- (id)initWithCategory:(id)arg1 identifier:(id)arg2 clientID:(id)arg3 name:(id)arg4 company:(id)arg5 model:(id)arg6 version:(id)arg7 integrationType:(id)arg8 transportType:(id)arg9 externalAccessory:(id)arg10;
@property(readonly, copy, nonatomic) NSString *spt_crashReporterDisconnectedValue;
@property(readonly, copy, nonatomic) NSString *spt_crashReporterConnectedValue;
@property(readonly, copy, nonatomic) NSString *spt_crashReporterKey;
@property(retain, nonatomic) NSData *spt_currentPlaybackID;

@end

