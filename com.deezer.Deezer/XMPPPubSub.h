//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPModule.h"

@class NSMutableDictionary, XMPPJID;

@interface XMPPPubSub : XMPPModule
{
    XMPPJID *serviceJID;
    XMPPJID *myJID;
    NSMutableDictionary *subscribeDict;
    NSMutableDictionary *unsubscribeDict;
    NSMutableDictionary *retrieveSubsDict;
    NSMutableDictionary *configSubDict;
    NSMutableDictionary *createDict;
    NSMutableDictionary *deleteDict;
    NSMutableDictionary *configNodeDict;
    NSMutableDictionary *publishDict;
    NSMutableDictionary *retrieveItemsDict;
}

+ (_Bool)isPubSubMessage:(id)arg1;
@property(readonly, nonatomic) XMPPJID *serviceJID; // @synthesize serviceJID;
- (void).cxx_destruct;
- (id)retrieveItemsFromNode:(id)arg1 withItemIDs:(id)arg2;
- (id)retrieveItemsFromNode:(id)arg1;
- (id)publishToNode:(id)arg1 entry:(id)arg2 withItemID:(id)arg3 options:(id)arg4;
- (id)publishToNode:(id)arg1 entry:(id)arg2 withItemID:(id)arg3;
- (id)publishToNode:(id)arg1 entry:(id)arg2;
- (id)configureNode:(id)arg1 withOptions:(id)arg2;
- (id)configureNode:(id)arg1;
- (id)deleteNode:(id)arg1;
- (id)createNode:(id)arg1 withOptions:(id)arg2;
- (id)createNode:(id)arg1;
- (id)configureSubscriptionToNode:(id)arg1 withJID:(id)arg2 subid:(id)arg3 options:(id)arg4;
- (id)retrieveSubscriptionsForNode:(id)arg1;
- (id)retrieveSubscriptions;
- (id)unsubscribeFromNode:(id)arg1 withJID:(id)arg2 subid:(id)arg3;
- (id)unsubscribeFromNode:(id)arg1 withJID:(id)arg2;
- (id)unsubscribeFromNode:(id)arg1;
- (id)subscribeToNode:(id)arg1 withJID:(id)arg2 options:(id)arg3;
- (id)subscribeToNode:(id)arg1 withJID:(id)arg2;
- (id)subscribeToNode:(id)arg1;
- (id)formForOptions:(id)arg1 withFromType:(id)arg2;
- (void)xmppStreamDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)xmppStream:(id)arg1 didReceiveMessage:(id)arg2;
- (_Bool)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)myJIDDidChange:(id)arg1;
- (void)deactivate;
- (_Bool)activate:(id)arg1;
- (id)initWithServiceJID:(id)arg1 dispatchQueue:(id)arg2;
- (id)initWithServiceJID:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end

