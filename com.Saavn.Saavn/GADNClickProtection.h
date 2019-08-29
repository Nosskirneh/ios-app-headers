//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class GADNAd, NSString;

@interface GADNClickProtection : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _autoClickEnabled;
    // Error parsing type: AB, name: _touched
    NSString *_debugDialogString;
    GADNAd *_ad;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)reportBlockedOpenActionWithNavigationURL:(id)arg1 sourceURL:(id)arg2;
- (_Bool)shouldAllowClickAction;
- (id)initWithAd:(id)arg1 view:(id)arg2 autoClickProtectionEnabled:(_Bool)arg3 debugDialogString:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

