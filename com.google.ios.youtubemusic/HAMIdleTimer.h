//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, UIApplication;

@interface HAMIdleTimer : NSObject
{
    UIApplication *_application;
    long long _idleTimerCounter;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)asyncSetIdleTimerDisabled:(_Bool)arg1;
- (void)setIdleTimerDisabled:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithApplication:(id)arg1;

@end

