//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTVoiceErrorViewModelDelegate-Protocol.h"

@class NSString, SPTVoiceErrorViewModel, UIButton, UILabel;

@interface SPTVoiceErrorView : UIView <SPTVoiceErrorViewModelDelegate>
{
    SPTVoiceErrorViewModel *_viewModel;
    UILabel *_headerLabel;
    UILabel *_bodyLabel;
    UIButton *_okButton;
    UIButton *_closeButton;
    UIButton *_microphoneButton;
}

@property(retain, nonatomic) UIButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(readonly, nonatomic) SPTVoiceErrorViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)errorViewModelDidUpdate:(id)arg1;
- (void)didTapMicrophoneButton;
- (void)didTapCloseButton;
- (void)didTapOkButton;
- (void)updateWithViewModel:(id)arg1;
- (void)setupLayout;
- (void)setupViews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

