//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DDXMLElement, NSArray, XMPPCapabilities, XMPPJID;

@protocol XMPPCapabilitiesDelegate

@optional
- (void)xmppCapabilities:(XMPPCapabilities *)arg1 didDiscoverCapabilities:(DDXMLElement *)arg2 forJID:(XMPPJID *)arg3;
- (NSArray *)myFeaturesForXMPPCapabilities:(XMPPCapabilities *)arg1;
- (void)xmppCapabilities:(XMPPCapabilities *)arg1 collectingMyCapabilities:(DDXMLElement *)arg2;
@end

