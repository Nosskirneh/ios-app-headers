//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTVoiceNowPlayingContentInfoViewModelDelegate-Protocol.h"

@class NSString, SPTVoiceNowPlayingContentInfoViewModel, UILabel;

@interface SPTVoiceNowPlayingContentInfoView : UIView <SPTVoiceNowPlayingContentInfoViewModelDelegate>
{
    SPTVoiceNowPlayingContentInfoViewModel *_viewModel;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) SPTVoiceNowPlayingContentInfoViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)voiceNowPlayingContentInfoViewModelDidUpdate:(id)arg1;
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

