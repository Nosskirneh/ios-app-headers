//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP8Features12SkipBlocking_-Protocol.h"

@class Environment;

@interface AdSkipCalculator : NSObject <_TtP8Features12SkipBlocking_>
{
    Environment *_environment;
}

@property(readonly, nonatomic) Environment *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (double)skipThresholdForAd:(id)arg1;
- (_Bool)shouldEnableSkipForItem:(id)arg1 withProgress:(double)arg2;
- (double)skipCounterSecondsLeftForAd:(id)arg1 withProgress:(double)arg2;
- (id)initWithEnvironment:(id)arg1;
- (id)init;

@end

