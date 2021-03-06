//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTBrowseServiceObserver-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSMutableArray, NSString;

@interface YTOfflineServiceController : NSObject <YTUserChangedObserver, YTBrowseServiceObserver>
{
    NSMutableArray *_services;
    _Bool _saveOfflineResponsesNeeded;
    _Bool _isPendingRequests;
    GIMMe *_gimme;
}

@property(nonatomic) _Bool isPendingRequests; // @synthesize isPendingRequests=_isPendingRequests;
@property(nonatomic) _Bool saveOfflineResponsesNeeded; // @synthesize saveOfflineResponsesNeeded=_saveOfflineResponsesNeeded;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)finishSavingOfflineResponsesWithSuccess:(_Bool)arg1;
- (void)saveOfflineResponsesFromIndex:(long long)arg1;
- (void)didReceiveAnyBrowseResponseFromNetwork;
- (void)userDidChange;
- (void)saveOfflineResponsesIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

