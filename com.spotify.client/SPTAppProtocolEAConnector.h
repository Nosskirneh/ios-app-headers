//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAppProtocolConnector-Protocol.h"

@class NSMutableSet, NSString, SPSession;
@protocol SPTAppProtocolConnectorDelegate;

@interface SPTAppProtocolEAConnector : NSObject <SPTAppProtocolConnector>
{
    _Bool _acceptingConnections;
    id <SPTAppProtocolConnectorDelegate> _delegate;
    SPSession *_currentSession;
    NSMutableSet *_accessoriesToConnect;
}

@property(readonly, nonatomic) NSMutableSet *accessoriesToConnect; // @synthesize accessoriesToConnect=_accessoriesToConnect;
@property(nonatomic) __weak SPSession *currentSession; // @synthesize currentSession=_currentSession;
@property(readonly, nonatomic, getter=isAcceptingConnections) _Bool acceptingConnections; // @synthesize acceptingConnections=_acceptingConnections;
@property(nonatomic) __weak id <SPTAppProtocolConnectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_tryToConnectToAccessory:(id)arg1;
- (void)tryToConnectToAccessory:(id)arg1;
- (void)accessoryConnected:(id)arg1;
- (void)establishConnectionsToConnectedAccessories;
- (void)stopAcceptingConnections;
- (void)startAcceptingConnections;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

