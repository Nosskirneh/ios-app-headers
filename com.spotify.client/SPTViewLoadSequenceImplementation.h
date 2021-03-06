//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTViewLoadSequence-Protocol.h"

@class NSDictionary, NSString;

@interface SPTViewLoadSequenceImplementation : NSObject <SPTViewLoadSequence>
{
    NSString *_sequenceId;
    NSString *_pageId;
    NSString *_uri;
    long long _terminalState;
    long long _initialConnectionType;
    long long _terminalConnectionType;
    NSDictionary *_steps;
    NSDictionary *_metadata;
}

@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDictionary *steps; // @synthesize steps=_steps;
@property(readonly, nonatomic) long long terminalConnectionType; // @synthesize terminalConnectionType=_terminalConnectionType;
@property(readonly, nonatomic) long long initialConnectionType; // @synthesize initialConnectionType=_initialConnectionType;
@property(readonly, nonatomic) long long terminalState; // @synthesize terminalState=_terminalState;
@property(readonly, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(readonly, nonatomic) NSString *sequenceId; // @synthesize sequenceId=_sequenceId;
- (void).cxx_destruct;
- (id)initWithSequenceId:(id)arg1 pageId:(id)arg2 uri:(id)arg3 terminalState:(long long)arg4 initialConnectionType:(long long)arg5 terminalConnectionType:(long long)arg6 steps:(id)arg7 metadata:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

