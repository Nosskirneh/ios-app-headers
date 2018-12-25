//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HAMDataLoadTaskDelegate-Protocol.h"

@class NSString, NSURLResponse;
@protocol OS_dispatch_data, OS_dispatch_queue;

@interface HAMCompletionBlockDataLoadTaskDelegate : NSObject <HAMDataLoadTaskDelegate>
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    NSURLResponse *_response;
    NSObject<OS_dispatch_data> *_data;
}

- (void).cxx_destruct;
- (void)dataLoadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)dataLoadTask:(id)arg1 didReceiveData:(id)arg2;
- (void)dataLoadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

