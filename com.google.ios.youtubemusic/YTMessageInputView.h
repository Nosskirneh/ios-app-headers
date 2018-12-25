//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTMessageInputProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTPlaceholderTextViewDelegate-Protocol.h"

@class NSString, YTIMessageInputSectionV15Renderer, YTImageView, YTPlaceholderTextView;

@interface YTMessageInputView : UIView <YTMessageInputProtocol, YTPageStyling, YTPlaceholderTextViewDelegate>
{
    YTIMessageInputSectionV15Renderer *_renderer;
    YTImageView *_sharerImage;
    YTPlaceholderTextView *_messageTextView;
    UIView *_topSeparatorLine;
}

- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)didBecomeFirstResponder;
- (id)text;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)closeKeyboard;
- (void)setRenderer:(id)arg1;
- (id)sharerImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

