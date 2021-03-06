//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIButton, YTCropImageView, YTLabel;
@protocol YTCommonButton, YTImageEditorViewDelegate;

@interface YTImageEditorView : UIView <UIScrollViewDelegate>
{
    UIButton<YTCommonButton> *_cancelButton;
    UIButton<YTCommonButton> *_chooseButton;
    YTLabel *_disclaimerText;
    YTCropImageView *_cropView;
    id <YTImageEditorViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YTImageEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTCropImageView *cropView; // @synthesize cropView=_cropView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutNavigationButtons;
- (void)layoutDisclaimerText;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

