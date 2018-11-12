//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DDXMLElement, NSObject, NSString, XMPPCapabilities, XMPPJID, XMPPStream;
@protocol OS_dispatch_queue;

@protocol XMPPCapabilitiesStorage <NSObject>
- (void)clearNonPersistentCapabilitiesForJID:(XMPPJID *)arg1 xmppStream:(XMPPStream *)arg2;
- (void)clearAllNonPersistentCapabilitiesForXMPPStream:(XMPPStream *)arg1;
- (void)setCapabilitiesFetchFailedForJID:(XMPPJID *)arg1 xmppStream:(XMPPStream *)arg2;
- (void)setCapabilities:(DDXMLElement *)arg1 forJID:(XMPPJID *)arg2 xmppStream:(XMPPStream *)arg3;
- (void)setCapabilities:(DDXMLElement *)arg1 forHash:(NSString *)arg2 algorithm:(NSString *)arg3;
- (void)getCapabilitiesKnown:(_Bool *)arg1 failed:(_Bool *)arg2 node:(id *)arg3 ver:(id *)arg4 ext:(id *)arg5 hash:(id *)arg6 algorithm:(id *)arg7 forJID:(XMPPJID *)arg8 xmppStream:(XMPPStream *)arg9;
- (void)clearCapabilitiesHashAndAlgorithmForJID:(XMPPJID *)arg1 xmppStream:(XMPPStream *)arg2;
- (_Bool)getCapabilitiesHash:(id *)arg1 algorithm:(id *)arg2 forJID:(XMPPJID *)arg3 xmppStream:(XMPPStream *)arg4;
- (_Bool)setCapabilitiesNode:(NSString *)arg1 ver:(NSString *)arg2 ext:(NSString *)arg3 hash:(NSString *)arg4 algorithm:(NSString *)arg5 forJID:(XMPPJID *)arg6 xmppStream:(XMPPStream *)arg7 andGetNewCapabilities:(id *)arg8;
- (_Bool)configureWithParent:(XMPPCapabilities *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (DDXMLElement *)capabilitiesForJID:(XMPPJID *)arg1 ext:(id *)arg2 xmppStream:(XMPPStream *)arg3;
- (DDXMLElement *)capabilitiesForJID:(XMPPJID *)arg1 xmppStream:(XMPPStream *)arg2;
- (_Bool)areCapabilitiesKnownForJID:(XMPPJID *)arg1 xmppStream:(XMPPStream *)arg2;
@end
