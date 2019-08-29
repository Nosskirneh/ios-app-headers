//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AKFContentViewController.h"

@class NSString, UIImageView;

@interface AKFSendingEmailViewController : AKFContentViewController
{
    _Bool _isRotating;
    _Bool _isVisible;
    UIImageView *_sendingImageView;
    UIImageView *_sentImageView;
    _Bool _sending;
    NSString *_email;
}

@property(nonatomic, getter=isSending) _Bool sending; // @synthesize sending=_sending;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (void)_updateImageViews;
- (void)_endRotating;
- (void)_beginRotating;
- (void)applyTheme:(id)arg1;
- (id)defaultBodyView;
- (void)addViewConstraints;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)loginFlowState;
- (id)appEventViewName;
- (id)initWithEmail:(id)arg1 appEventsLogger:(id)arg2 loginType:(unsigned long long)arg3;

@end

