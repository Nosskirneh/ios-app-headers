//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCAccountWipeoutHandler-Protocol.h"
#import "SRLService-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface PDLCacheWipeoutHandler : NSObject <SRLService, GSCAccountWipeoutHandler>
{
    NSObject<OS_dispatch_queue> *_accountWipeoutHandlerQueue;
}

- (void).cxx_destruct;
- (void)didDeleteAccountWithId:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
