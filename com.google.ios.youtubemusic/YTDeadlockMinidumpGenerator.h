//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTDeadlockObserver-Protocol.h"

@class GIMMe, GoogleBreakpadController, NSString, YTUserDefaults;

@interface YTDeadlockMinidumpGenerator : NSObject <YTDeadlockObserver>
{
    GoogleBreakpadController *_breakpadController;
    YTUserDefaults *_userDefaults;
    _Bool _alreadyGeneratedMinidumpForCurrentDeadlock;
    unsigned long long _minidumpsGenerated;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)appDidRecover;
- (void)deadlockDetected:(double)arg1;
- (void)generateMinidump;
- (void)maybeStartDeadlockMinidumpGenerator;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

