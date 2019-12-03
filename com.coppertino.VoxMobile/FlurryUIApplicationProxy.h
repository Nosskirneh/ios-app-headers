//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FlurryActor.h"

@class FlurryDeferredQueue;

@interface FlurryUIApplicationProxy : FlurryActor
{
    long long _statusBarOrientation;
    long long _applicationState;
    FlurryDeferredQueue *_deferredQ;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FlurryDeferredQueue *deferredQ; // @synthesize deferredQ=_deferredQ;
@property long long applicationState; // @synthesize applicationState=_applicationState;
@property long long statusBarOrientation; // @synthesize statusBarOrientation=_statusBarOrientation;
- (void).cxx_destruct;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)getApplicationState;
- (void)getStatusBarOrientation;
- (void)statusBarOrientationChange:(id)arg1;
- (id)initPrivate;

@end
