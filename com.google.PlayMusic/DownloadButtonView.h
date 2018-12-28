//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DownloadProgressView, NSString, TouchTargetButton;

@interface DownloadButtonView : UIView
{
    TouchTargetButton *_button;
    DownloadProgressView *_progressView;
    NSString *_normalStateIconName;
    NSString *_pinnedStateIconName;
    NSString *_downloadedStateIconName;
    _Bool _pinned;
}

@property(nonatomic, getter=isPinned) _Bool pinned; // @synthesize pinned=_pinned;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)updatePinButtonStyles;
@property(nonatomic) double downloadProgress;
- (void)layoutSubviews;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 sizeMode:(long long)arg3;
- (id)initWithSizeMode:(long long)arg1;

@end

