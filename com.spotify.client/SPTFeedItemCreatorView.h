//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class GLUEImageView, NSArray, NSString, UIButton, UILabel, UITextView;
@protocol SPTFeedCreatorViewDelegate;

@interface SPTFeedItemCreatorView : UIView <UITextViewDelegate>
{
    GLUEImageView *_profileImageView;
    UIButton *_profileButton;
    UITextView *_titleLabel;
    UILabel *_timestampLabel;
    id <SPTFeedCreatorViewDelegate> _delegate;
    UIView *_labelContainerView;
    NSArray *_layoutConstraints;
}

@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) UIView *labelContainerView; // @synthesize labelContainerView=_labelContainerView;
@property(nonatomic) __weak id <SPTFeedCreatorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(retain, nonatomic) UITextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *profileButton; // @synthesize profileButton=_profileButton;
@property(retain, nonatomic) GLUEImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)updateConstraints;
- (void)addViewConstraints;
- (void)setupLabelContainerView;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

