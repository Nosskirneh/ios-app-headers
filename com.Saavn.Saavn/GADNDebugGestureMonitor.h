//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class GADNAd, NSString, UIGestureRecognizer, UIView;

@interface GADNDebugGestureMonitor : NSObject <UIGestureRecognizerDelegate>
{
    UIView *_view;
    GADNAd *_ad;
    NSString *_adUnitID;
    NSString *_debugDialogString;
    UIGestureRecognizer *_gestureRecognizer;
}

+ (void)addMonitorToAd:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 view:(id)arg3;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)presentDebugDialog;
- (void)setView:(id)arg1;
- (id)initWithAd:(id)arg1 adView:(id)arg2 adUnitID:(id)arg3 debugDialogString:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

