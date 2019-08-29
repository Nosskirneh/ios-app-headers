//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class ForceTouch, NSDictionary, NSString, UILongPressGestureRecognizer;

@interface PlayerArtImageView : UIImageView <UIGestureRecognizerDelegate>
{
    ForceTouch *forceTouch;
    UILongPressGestureRecognizer *longPress;
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)handleLongPress:(id)arg1;
- (void)handleForceTouch;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

