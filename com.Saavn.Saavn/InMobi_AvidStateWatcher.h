//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol InMobi_AvidStateWatcherDelegate;

@interface InMobi_AvidStateWatcher : NSObject
{
    _Bool _isStarted;
    long long _state;
    id <InMobi_AvidStateWatcherDelegate> _delegate;
}

+ (id)getInstance;
@property(nonatomic) __weak id <InMobi_AvidStateWatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onAppStateChanged;
- (void)onAppDidEnterBackground;
- (void)onAppWillResignActive;
- (void)onAppDidBecomeActive;
- (void)notifyAppStateChanged;
- (void)stop;
- (void)start;
- (void)setup;
@property(readonly, nonatomic) long long appState;
@property(readonly, nonatomic) _Bool appIsActive;

@end

