//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOAdViewDelegate-Protocol.h"
#import "GADOClearcutCommandExecuting-Protocol.h"

@class GADOAdView, NSString;
@protocol OS_dispatch_queue;

@interface GADOClearcutAdViewCommandExecutor : NSObject <GADOAdViewDelegate, GADOClearcutCommandExecuting>
{
    GADOAdView *_adView;
    _Bool _loaded;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (void).cxx_destruct;
- (void)adViewWebProcessDidTerminate:(id)arg1;
- (void)adViewDidFinishLoad:(id)arg1;
- (_Bool)isLoaded;
- (void)asynchronouslyExecuteCommands:(id)arg1;
- (void)dealloc;
- (id)initWithScript:(id)arg1 baseURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

