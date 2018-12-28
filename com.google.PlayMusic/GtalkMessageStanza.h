//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GtalkErrorInfo, NSMutableArray, NSString;

@interface GtalkMessageStanza : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long accountId; // @dynamic accountId;
@property(copy, nonatomic) NSString *body; // @dynamic body;
@property(retain, nonatomic) GtalkErrorInfo *error; // @dynamic error;
@property(retain, nonatomic) NSMutableArray *extensionArray; // @dynamic extensionArray;
@property(readonly, nonatomic) unsigned long long extensionArray_Count; // @dynamic extensionArray_Count;
@property(copy, nonatomic) NSString *from; // @dynamic from;
@property(nonatomic) _Bool hasAccountId; // @dynamic hasAccountId;
@property(nonatomic) _Bool hasBody; // @dynamic hasBody;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasFrom; // @dynamic hasFrom;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasLastStreamIdReceived; // @dynamic hasLastStreamIdReceived;
@property(nonatomic) _Bool hasNosave; // @dynamic hasNosave;
@property(nonatomic) _Bool hasPersistentId; // @dynamic hasPersistentId;
@property(nonatomic) _Bool hasRead; // @dynamic hasRead;
@property(nonatomic) _Bool hasRmqId; // @dynamic hasRmqId;
@property(nonatomic) _Bool hasStreamId; // @dynamic hasStreamId;
@property(nonatomic) _Bool hasSubject; // @dynamic hasSubject;
@property(nonatomic) _Bool hasThread; // @dynamic hasThread;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) _Bool hasTo; // @dynamic hasTo;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int lastStreamIdReceived; // @dynamic lastStreamIdReceived;
@property(nonatomic) _Bool nosave; // @dynamic nosave;
@property(copy, nonatomic) NSString *persistentId; // @dynamic persistentId;
@property(nonatomic) _Bool read; // @dynamic read;
@property(nonatomic) long long rmqId; // @dynamic rmqId;
@property(nonatomic) int streamId; // @dynamic streamId;
@property(copy, nonatomic) NSString *subject; // @dynamic subject;
@property(copy, nonatomic) NSString *thread; // @dynamic thread;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *to; // @dynamic to;
@property(nonatomic) int type; // @dynamic type;

@end

