//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTAppProtocolWAMPMessage.h"

#import "SPTWAMPEventMessage-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SPTAppProtocolEventMessage : SPTAppProtocolWAMPMessage <SPTWAMPEventMessage>
{
    unsigned long long _triggeringSubscriptionID;
    unsigned long long _publicationID;
    NSDictionary *_details;
    NSArray *_arguments;
    NSDictionary *_namedArguments;
}

+ (_Bool)rawMessageFormatIsValid:(id)arg1;
@property(readonly, nonatomic) NSDictionary *namedArguments; // @synthesize namedArguments=_namedArguments;
@property(readonly, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(readonly, nonatomic) NSDictionary *details; // @synthesize details=_details;
@property(readonly, nonatomic) unsigned long long publicationID; // @synthesize publicationID=_publicationID;
@property(readonly, nonatomic) unsigned long long triggeringSubscriptionID; // @synthesize triggeringSubscriptionID=_triggeringSubscriptionID;
- (void).cxx_destruct;
- (_Bool)populateWithRawMessage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *rawMessage;
@property(readonly, nonatomic) long long messageType;
- (id)initWithTriggeringSubscriptionID:(unsigned long long)arg1 publicationID:(unsigned long long)arg2 details:(id)arg3 arguments:(id)arg4 namedArguments:(id)arg5;
- (id)initWithTriggeringSubscriptionID:(unsigned long long)arg1 publicationID:(unsigned long long)arg2 payload:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *jsonRepresentation;
@property(readonly) Class superclass;

@end

