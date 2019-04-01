//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface AFNetworkActivityIndicatorManager : NSObject
{
    _Bool _enabled;
    long long _activityCount;
    NSTimer *_activityIndicatorVisibilityTimer;
}

+ (id)keyPathsForValuesAffectingIsNetworkActivityIndicatorVisible;
+ (id)sharedManager;
@property(retain, nonatomic) NSTimer *activityIndicatorVisibilityTimer; // @synthesize activityIndicatorVisibilityTimer=_activityIndicatorVisibilityTimer;
@property(nonatomic) long long activityCount; // @synthesize activityCount=_activityCount;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)networkRequestDidFinish:(id)arg1;
- (void)networkRequestDidStart:(id)arg1;
- (void)decrementActivityCount;
- (void)incrementActivityCount;
- (void)updateNetworkActivityIndicatorVisibility;
@property(readonly, nonatomic) _Bool isNetworkActivityIndicatorVisible;
- (void)updateNetworkActivityIndicatorVisibilityDelayed;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic, getter=isNetworkActivityIndicatorVisible) _Bool networkActivityIndicatorVisible; // @dynamic networkActivityIndicatorVisible;

@end

