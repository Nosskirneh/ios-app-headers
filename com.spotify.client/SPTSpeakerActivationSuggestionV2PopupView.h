//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPopupContainerView.h"

@class GLUEImageView, SPTSpeakerActivationSuggestionV2PopupViewModel, UILabel, UIStackView;
@protocol GLUEImageLoader;

@interface SPTSpeakerActivationSuggestionV2PopupView : SPTPopupContainerView
{
    SPTSpeakerActivationSuggestionV2PopupViewModel *_viewModel;
    GLUEImageView *_artworkImageView;
    UILabel *_suggestionPromptLabel;
    UILabel *_suggestionLabel;
    UIStackView *_stackView;
    id <GLUEImageLoader> _glueImageLoader;
}

@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UILabel *suggestionLabel; // @synthesize suggestionLabel=_suggestionLabel;
@property(retain, nonatomic) UILabel *suggestionPromptLabel; // @synthesize suggestionPromptLabel=_suggestionPromptLabel;
@property(retain, nonatomic) GLUEImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(retain, nonatomic) SPTSpeakerActivationSuggestionV2PopupViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)updateWithViewModel:(id)arg1;
- (void)setupLayout;
- (id)suggestionText;
- (void)setupViews;
- (id)initWithSuggestionPopupViewModel:(id)arg1 glueImageLoader:(id)arg2;

@end

