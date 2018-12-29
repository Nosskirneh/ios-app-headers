//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WoodstockSession;
@protocol OS_dispatch_group;

@interface WoodstockSessionTransaction : NSObject
{
    WoodstockSession *_session;
    NSObject<OS_dispatch_group> *_group;
    _Bool _finished;
}

@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (void)wait;
- (void)endTransaction;
- (void)updateSessionToken:(id)arg1 currentTimestamp:(id)arg2 skipHistory:(id)arg3 radioConstraints:(id)arg4;
@property(nonatomic) long long resetReason;
@property(copy, nonatomic) NSString *sessionToken;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end
