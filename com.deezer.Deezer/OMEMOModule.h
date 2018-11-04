//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPModule.h"

#import "XMPPCapabilitiesDelegate-Protocol.h"
#import "XMPPStreamDelegate-Protocol.h"

@class XMPPIDTracker;
@protocol OMEMOStorageDelegate;

@interface OMEMOModule : XMPPModule <XMPPStreamDelegate, XMPPCapabilitiesDelegate>
{
    unsigned long long _xmlNamespace;
    id <OMEMOStorageDelegate> _omemoStorage;
    XMPPIDTracker *_tracker;
}

+ (id)xmlnsOMEMOBundles:(unsigned long long)arg1 deviceId:(unsigned int)arg2;
+ (id)xmlnsOMEMOBundles:(unsigned long long)arg1;
+ (id)xmlnsOMEMODeviceListNotify:(unsigned long long)arg1;
+ (id)xmlnsOMEMODeviceList:(unsigned long long)arg1;
+ (id)xmlnsOMEMO:(unsigned long long)arg1;
@property(readonly, nonatomic) XMPPIDTracker *tracker; // @synthesize tracker=_tracker;
@property(readonly, nonatomic) id <OMEMOStorageDelegate> omemoStorage; // @synthesize omemoStorage=_omemoStorage;
@property(readonly, nonatomic) unsigned long long xmlNamespace; // @synthesize xmlNamespace=_xmlNamespace;
- (void).cxx_destruct;
- (void)processIncomingDeviceIds:(id)arg1 fromJID:(id)arg2;
- (id)fixElementId:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)myFeaturesForXMPPCapabilities:(id)arg1;
- (_Bool)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)xmppStream:(id)arg1 didReceiveMessage:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (void)sendKeyData:(id)arg1 iv:(id)arg2 toJID:(id)arg3 payload:(id)arg4 elementId:(id)arg5;
- (void)removeDeviceIds:(id)arg1 elementId:(id)arg2;
- (void)fetchBundleForDeviceId:(unsigned int)arg1 jid:(id)arg2 elementId:(id)arg3;
- (void)publishBundle:(id)arg1 elementId:(id)arg2;
- (void)fetchDeviceIdsForJID:(id)arg1 elementId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeviceIdsForJID:(id)arg1 elementId:(id)arg2;
- (void)publishDeviceIds:(id)arg1 elementId:(id)arg2;
- (void)deactivate;
- (_Bool)activate:(id)arg1;
- (id)initWithOMEMOStorage:(id)arg1 xmlNamespace:(unsigned long long)arg2 dispatchQueue:(id)arg3;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initWithOMEMOStorage:(id)arg1 xmlNamespace:(unsigned long long)arg2;
- (id)init;

@end

