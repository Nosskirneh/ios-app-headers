//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaybackPreferencesProtocol-Protocol.h"

@class NSString;
@protocol SPTPlaybackPreferencesProtocol;

@interface SPTPlaybackPreferencesObserver : NSObject <SPTPlaybackPreferencesProtocol>
{
    id <SPTPlaybackPreferencesProtocol> _delegate;
}

@property(nonatomic) __weak id <SPTPlaybackPreferencesProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)settingsSection:(id)arg1 didUpdatePreferences:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

