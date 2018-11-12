//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTEntityCancelationToken-Protocol.h"

@class NSString, SPTEntityService;

@interface SPTEntityCancelationToken : NSObject <SPTEntityCancelationToken>
{
    SPTEntityService *_service;
    shared_ptr_6008c08c _task;
    _Bool _cancelledBeforeTaskSet;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct MetadataTask *)getTask;
- (_Bool)wasCancelled;
- (_Bool)isCancelledBeforeBecomesValid;
- (void)setTask:(const shared_ptr_6008c08c *)arg1;
- (void)cancel;
- (void)invalidate;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

