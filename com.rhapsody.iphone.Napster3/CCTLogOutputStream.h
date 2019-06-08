//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPBCodedOutputStream, NSOutputStream, NSURL;
@protocol CCTClockProtocol;

@interface CCTLogOutputStream : NSObject
{
    _Bool _isClosed;
    long long _creationTimeMilliseconds;
    long long _bytesWritten;
    NSURL *_destination;
    NSURL *_temporaryFile;
    NSOutputStream *_outputStream;
    GPBCodedOutputStream *_protoOutputStream;
    id <CCTClockProtocol> _clock;
}

@property(nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(readonly, nonatomic) id <CCTClockProtocol> clock; // @synthesize clock=_clock;
@property(readonly, nonatomic) GPBCodedOutputStream *protoOutputStream; // @synthesize protoOutputStream=_protoOutputStream;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSURL *temporaryFile; // @synthesize temporaryFile=_temporaryFile;
@property(readonly, nonatomic) NSURL *destination; // @synthesize destination=_destination;
@property(nonatomic) long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(readonly, nonatomic) long long creationTimeMilliseconds; // @synthesize creationTimeMilliseconds=_creationTimeMilliseconds;
- (void).cxx_destruct;
- (void)closeAndMaybeRename;
- (void)dealloc;
- (void)writeLogEvent:(id)arg1;
- (id)initWithURL:(id)arg1 clock:(id)arg2;

@end

