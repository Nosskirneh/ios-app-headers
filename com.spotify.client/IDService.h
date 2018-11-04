//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEtchSession, NSOperationQueue;

@interface IDService : NSObject
{
    long long _handle;
    IDEtchSession *_etchSession;
    NSOperationQueue *_queue;
}

@property(readonly) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly) __weak IDEtchSession *etchSession; // @synthesize etchSession=_etchSession;
@property(readonly) long long handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEtchSession:(id)arg1 handle:(long long)arg2;
- (id)init;

@end

