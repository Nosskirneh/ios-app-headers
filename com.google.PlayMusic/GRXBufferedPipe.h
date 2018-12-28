//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GRXWriter.h"

#import "GRXWriteable-Protocol.h"

@class NSError, NSObject, NSString;
@protocol GRXWriteable, OS_dispatch_queue;

@interface GRXBufferedPipe : GRXWriter <GRXWriteable>
{
    NSError *_errorOrNil;
    NSObject<OS_dispatch_queue> *_writeQueue;
    long long _state;
    id <GRXWriteable> _writeable;
}

+ (id)pipe;
@property(retain) id <GRXWriteable> writeable; // @synthesize writeable=_writeable;
- (long long)state;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)startWithWriteable:(id)arg1;
- (void)setState:(long long)arg1;
- (void)writesFinishedWithError:(id)arg1;
- (void)writeValue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

