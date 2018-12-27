//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AnimatableTickView, ImageSwappingView, NSLayoutConstraint, UIActivityIndicatorView, UIButton, UILabel, UITextField, UIView;

@interface PlaylistCreationViewModel : NSObject
{
    UILabel *_titleLabel;
    UIButton *_cancelButton;
    UIButton *_doneButton;
    ImageSwappingView *_imageView;
    UIView *_imageViewOverlay;
    UITextField *_textField;
    UIView *_view;
    NSLayoutConstraint *_containerViewBottomConstraint;
    NSLayoutConstraint *_dividerLineHeightConstraint;
    NSLayoutConstraint *_imageViewWidthConstraint;
    UIActivityIndicatorView *_activityIndicator;
    AnimatableTickView *_tickView;
}

@property(retain, nonatomic) AnimatableTickView *tickView; // @synthesize tickView=_tickView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSLayoutConstraint *imageViewWidthConstraint; // @synthesize imageViewWidthConstraint=_imageViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dividerLineHeightConstraint; // @synthesize dividerLineHeightConstraint=_dividerLineHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerViewBottomConstraint; // @synthesize containerViewBottomConstraint=_containerViewBottomConstraint;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIView *imageViewOverlay; // @synthesize imageViewOverlay=_imageViewOverlay;
@property(retain, nonatomic) ImageSwappingView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;

@end

