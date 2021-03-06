//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol OS_dispatch_queue;

@interface GADOUserPreferences : NSObject
{
    NSNumber *_NPA;
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _adRequested;
    NSNumber *_lastRequestLevelTFCD;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *NPA;
- (void)updateLastRequestTFCD:(id)arg1;
- (void)updateNPA;
- (id)currentNPAValue;
- (void)updateNPACache:(_Bool)arg1;
- (void)updateLastAdRequest:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

@end

