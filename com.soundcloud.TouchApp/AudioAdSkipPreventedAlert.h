//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AudioAdSkipPreventedAlertShowing-Protocol.h"

@class AdSkipCalculator, NSString, PlaybackService, RACDisposable, UIAlertController;

@interface AudioAdSkipPreventedAlert : NSObject <AudioAdSkipPreventedAlertShowing>
{
    PlaybackService *_playbackService;
    AdSkipCalculator *_adSkipCalculator;
    RACDisposable *_progressDisposable;
    UIAlertController *_alertController;
}

@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) RACDisposable *progressDisposable; // @synthesize progressDisposable=_progressDisposable;
@property(readonly, nonatomic) AdSkipCalculator *adSkipCalculator; // @synthesize adSkipCalculator=_adSkipCalculator;
@property(readonly, nonatomic) PlaybackService *playbackService; // @synthesize playbackService=_playbackService;
- (void).cxx_destruct;
- (void)hideAlertViewIfSkipEnabled;
- (id)subscribeTrackProgress;
- (void)attachAlertController:(id)arg1;
- (double)timeUntilSkip;
- (id)alertMessage;
- (void)showFromViewController:(id)arg1;
- (id)initWithPlaybackService:(id)arg1 adSkipCalculator:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

