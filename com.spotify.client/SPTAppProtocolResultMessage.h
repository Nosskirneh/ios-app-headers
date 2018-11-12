//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTAppProtocolWAMPMessage.h"

#import "SPTWAMPResultMessage-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SPTAppProtocolResultMessage : SPTAppProtocolWAMPMessage <SPTWAMPResultMessage>
{
    unsigned long long _triggeringRequestID;
    NSDictionary *_details;
    NSDictionary *_namedArguments;
}

+ (_Bool)rawMessageFormatIsValid:(id)arg1;
@property(readonly, nonatomic) NSDictionary *namedArguments; // @synthesize namedArguments=_namedArguments;
@property(readonly, nonatomic) NSDictionary *details; // @synthesize details=_details;
@property(readonly, nonatomic) unsigned long long triggeringRequestID; // @synthesize triggeringRequestID=_triggeringRequestID;
- (void).cxx_destruct;
- (_Bool)populateWithRawMessage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *rawMessage;
@property(readonly, nonatomic) long long messageType;
@property(readonly, nonatomic) NSDictionary *result;
- (id)initWithTriggeringRequestID:(unsigned long long)arg1 details:(id)arg2 namedArguments:(id)arg3;
- (id)initWithTriggeringRequestID:(unsigned long long)arg1 result:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *jsonRepresentation;
@property(readonly) Class superclass;

@end

