//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

@class ANGAsyncImageView, UIButton, UILabel, UIView;

@interface _TtC7Anghami34AudioRecognitionPageViewController : UIPageViewController
{
    // Error parsing type: , name: pages
    // Error parsing type: , name: animatedBackgroundView
    // Error parsing type: , name: navigationButtonsView
    // Error parsing type: , name: audioRecognitionNavButton
    // Error parsing type: , name: voiceRecordingNavButton
    // Error parsing type: , name: navSelector
    // Error parsing type: , name: sponsorsView
    // Error parsing type: , name: sponsorsLabel
    // Error parsing type: , name: sponsorsImageView
    // Error parsing type: , name: adImageView
    // Error parsing type: , name: initialScrollIndex
    // Error parsing type: , name: lastScrollOffset
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: hideRadar
    // Error parsing type: , name: pageWasSet
    // Error parsing type: , name: initialPage
    // Error parsing type: , name: listenOnLaunch
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)dealloc;
- (void)close;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)goToAudioScreen;
- (void)goToVoiceScreen;
- (void)tapAd;
- (void)restartAnimation;
- (void)viewDidLoad;
@property(nonatomic) _Bool listenOnLaunch; // @synthesize listenOnLaunch;
@property(nonatomic) long long initialPage; // @synthesize initialPage;
@property(nonatomic) __weak ANGAsyncImageView *sponsorsImageView; // @synthesize sponsorsImageView;
@property(nonatomic) __weak UILabel *sponsorsLabel; // @synthesize sponsorsLabel;
@property(nonatomic) __weak UIView *sponsorsView; // @synthesize sponsorsView;
@property(nonatomic) __weak UIView *navSelector; // @synthesize navSelector;
@property(nonatomic) __weak UIButton *voiceRecordingNavButton; // @synthesize voiceRecordingNavButton;
@property(nonatomic) __weak UIButton *audioRecognitionNavButton; // @synthesize audioRecognitionNavButton;
@property(nonatomic) __weak UIView *navigationButtonsView; // @synthesize navigationButtonsView;

@end

