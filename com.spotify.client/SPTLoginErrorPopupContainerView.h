//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTPopupContainerView.h"

#import "GLUEStyleable.h"

@class GLUEImageView, GLUELabel, NSString, UIStackView;

@interface SPTLoginErrorPopupContainerView : SPTPopupContainerView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_messageLabel;
    GLUEImageView *_imageView;
    UIStackView *_stackView;
}

@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) GLUELabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

