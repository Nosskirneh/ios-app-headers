//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC4WiMP18CreateCutBaseScene.h"

@class UIButton, UILabel, UIView, _TtC4WiMP14BorderedButton;

@interface _TtC4WiMP18CreateCutEditScene : _TtC4WiMP18CreateCutBaseScene
{
    // Error parsing type: , name: setStartButton
    // Error parsing type: , name: setEndButton
    // Error parsing type: , name: startSetAtLabel
    // Error parsing type: , name: endSetAtLabel
    // Error parsing type: , name: loadingViewLabel
    // Error parsing type: , name: discardButton
    // Error parsing type: , name: nextButton
    // Error parsing type: , name: loadingView
    // Error parsing type: , name: kMaxCutLengthInSeconds
    // Error parsing type: , name: maxCutLengthSnackbar
    // Error parsing type: , name: playlistUuid
    // Error parsing type: , name: itemPositionInPlaylist
    // Error parsing type: , name: kMinimumCutLengthInSeconds
    // Error parsing type: , name: itemUuid
    // Error parsing type: , name: pageDidFinishPresentingContent
}

+ (id)getInstanceWithMode:(long long)arg1 itemUuid:(id)arg2 playlistUuid:(id)arg3 position:(long long)arg4;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)playerItemDidReachEnd;
- (void)dismissSceneWithSender:(id)arg1;
- (void)presentEffectsSceneWithSender:(id)arg1;
- (void)didTapSetEndButtonWithSender:(id)arg1;
- (void)didTapSetStartButtonWithSender:(id)arg1;
- (void)didTapPlayButtonWithSender:(id)arg1;
- (void)didTapSkipToEndButton:(id)arg1;
- (void)didTapSkipToStartButton:(id)arg1;
- (void)didDoubleTapSkipToStartButton:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UIView *loadingView; // @synthesize loadingView;
@property(nonatomic) __weak UIButton *nextButton; // @synthesize nextButton;
@property(nonatomic) __weak UIButton *discardButton; // @synthesize discardButton;
@property(nonatomic) __weak UILabel *loadingViewLabel; // @synthesize loadingViewLabel;
@property(nonatomic) __weak UILabel *endSetAtLabel; // @synthesize endSetAtLabel;
@property(nonatomic) __weak UILabel *startSetAtLabel; // @synthesize startSetAtLabel;
@property(nonatomic) __weak _TtC4WiMP14BorderedButton *setEndButton; // @synthesize setEndButton;
@property(nonatomic) __weak _TtC4WiMP14BorderedButton *setStartButton; // @synthesize setStartButton;

@end

