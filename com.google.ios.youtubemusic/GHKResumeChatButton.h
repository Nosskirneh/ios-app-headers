//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCFloatingButton.h"

@class GHKUnreadMessagesBadgeView, NSTimer;

@interface GHKResumeChatButton : MDCFloatingButton
{
    _Bool _buttonWasDragged;
    double _downAnchorY;
    double _downFrameY;
    double _verticalPositionYRatio;
    GHKUnreadMessagesBadgeView *_badgeView;
    NSTimer *_queueStateFadeTimer;
    long long _unreadMessageCount;
}

+ (id)button;
@property(nonatomic) long long unreadMessageCount; // @synthesize unreadMessageCount=_unreadMessageCount;
- (void).cxx_destruct;
- (void)invalidateQueueStateFadeTimer;
- (double)desiredFrameOriginY;
- (struct CGRect)clampFrameVertically:(struct CGRect)arg1;
- (struct CGRect)onScreenFrame;
- (struct CGRect)offscreenFrame;
- (void)orientationUpdated;
- (void)fadeButtonOpacity;
- (void)setChatState:(unsigned long long)arg1;
- (void)setUnreadMessagesCount:(unsigned long long)arg1;
- (void)incrementUnreadMessagesCount;
- (void)updateButtonState;
- (void)animateOffScreenAndRemove;
- (void)animateOnScreen;
- (_Bool)onButtonUp;
- (void)onButtonDrag:(id)arg1 withEvent:(id)arg2;
- (void)onButtonDown:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 shape:(long long)arg2;

@end
