//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGTouchViewController.h"

#import "AVAudioPlayerDelegate-Protocol.h"
#import "BottomBarAudioViewControllerDelegate-Protocol.h"
#import "SCRecorderDelegate-Protocol.h"

@class ANGFullScreenTooltip, ANGShadowLabel, ANGSong, AVAudioPlayer, AVPlayer, BottomBarAudioViewController, CIDetector, CircleProgressBar, NSLayoutConstraint, NSString, NSTimer, NSURL, SCRecordSession, SCRecorder, SCRecorderToolsView, SCSwipeableFilterView, UIButton, UIImage, UILabel, UIView;

@interface SCRecorderViewController : ANGTouchViewController <SCRecorderDelegate, BottomBarAudioViewControllerDelegate, AVAudioPlayerDelegate>
{
    SCRecorder *_recorder;
    UIImage *_photo;
    SCRecordSession *_recordSession;
    CDStruct_1b6d18a9 recordedTime;
    BottomBarAudioViewController *bottomTabViewController;
    AVPlayer *mainPlayer;
    id timeObserverToken;
    _Bool shouldBePlaying;
    CDStruct_1b6d18a9 startPlayingTime;
    ANGFullScreenTooltip *_fullscreenTooltip;
    _Bool _shouldCountDown;
    _Bool _isCountdownPlay;
    _Bool _frontFlashMode;
    float _startFrom;
    int _countdownCounter;
    float _rate;
    int _selectedFilter;
    UIView *_speedView;
    UIButton *_countdownButtonP;
    ANGShadowLabel *_filterNameLbl;
    UIView *_bottomContainerView;
    UIView *_recordView;
    UIButton *_recordButton;
    UIButton *_retakeButton;
    UIView *_previewView;
    UIButton *_retakeButtonP;
    UIView *_downBar;
    UIButton *_reverseCamera;
    UIButton *_flashModeButton;
    UIButton *_stopButtonP;
    CircleProgressBar *_timeLimitView;
    UIButton *_speedButtonP;
    NSLayoutConstraint *_progressViewSize;
    UILabel *_waveformTooltipLabel;
    UILabel *_doneButtonTooltip;
    UIButton *_closeButton;
    SCSwipeableFilterView *_filterSwitcherView;
    NSURL *_audioURL;
    ANGSong *_song;
    NSString *_inspiredVideoId;
    AVAudioPlayer *_tmpAudioPlayer;
    NSTimer *_countdownTimer;
    NSTimer *_playerTimer;
    UILabel *_countdownLabel;
    UIButton *_slowSpeedButtonP;
    UIButton *_normalSpeedButtonP;
    UIButton *_fastSpeedButtonP;
    UIButton *_previouseFilterButtonP;
    UIButton *_nextFilterButtonP;
    UILabel *_customTitleLabel;
    SCRecorderToolsView *_focusView;
    UIView *_tapView;
    UIImage *_borderImage;
    CIDetector *_faceDetector;
    UIView *_flashOverlayView;
    double _oldBrightness;
}

@property _Bool frontFlashMode; // @synthesize frontFlashMode=_frontFlashMode;
@property double oldBrightness; // @synthesize oldBrightness=_oldBrightness;
@property(retain, nonatomic) UIView *flashOverlayView; // @synthesize flashOverlayView=_flashOverlayView;
@property(retain, nonatomic) CIDetector *faceDetector; // @synthesize faceDetector=_faceDetector;
@property(retain, nonatomic) UIImage *borderImage; // @synthesize borderImage=_borderImage;
@property _Bool isCountdownPlay; // @synthesize isCountdownPlay=_isCountdownPlay;
@property(retain, nonatomic) UIView *tapView; // @synthesize tapView=_tapView;
@property(retain, nonatomic) SCRecorderToolsView *focusView; // @synthesize focusView=_focusView;
@property(nonatomic) __weak UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(nonatomic) __weak UIButton *nextFilterButtonP; // @synthesize nextFilterButtonP=_nextFilterButtonP;
@property(nonatomic) __weak UIButton *previouseFilterButtonP; // @synthesize previouseFilterButtonP=_previouseFilterButtonP;
@property(nonatomic) __weak UIButton *fastSpeedButtonP; // @synthesize fastSpeedButtonP=_fastSpeedButtonP;
@property(nonatomic) __weak UIButton *normalSpeedButtonP; // @synthesize normalSpeedButtonP=_normalSpeedButtonP;
@property(nonatomic) __weak UIButton *slowSpeedButtonP; // @synthesize slowSpeedButtonP=_slowSpeedButtonP;
@property int selectedFilter; // @synthesize selectedFilter=_selectedFilter;
@property float rate; // @synthesize rate=_rate;
@property int countdownCounter; // @synthesize countdownCounter=_countdownCounter;
@property _Bool shouldCountDown; // @synthesize shouldCountDown=_shouldCountDown;
@property(nonatomic) __weak UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(nonatomic) __weak NSTimer *playerTimer; // @synthesize playerTimer=_playerTimer;
@property(nonatomic) __weak NSTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) AVAudioPlayer *tmpAudioPlayer; // @synthesize tmpAudioPlayer=_tmpAudioPlayer;
@property(retain, nonatomic) NSString *inspiredVideoId; // @synthesize inspiredVideoId=_inspiredVideoId;
@property(retain, nonatomic) ANGSong *song; // @synthesize song=_song;
@property(retain, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
@property(retain, nonatomic) SCSwipeableFilterView *filterSwitcherView; // @synthesize filterSwitcherView=_filterSwitcherView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UILabel *doneButtonTooltip; // @synthesize doneButtonTooltip=_doneButtonTooltip;
@property(nonatomic) __weak UILabel *waveformTooltipLabel; // @synthesize waveformTooltipLabel=_waveformTooltipLabel;
@property(nonatomic) __weak NSLayoutConstraint *progressViewSize; // @synthesize progressViewSize=_progressViewSize;
@property(nonatomic) __weak UIButton *speedButtonP; // @synthesize speedButtonP=_speedButtonP;
@property(retain, nonatomic) CircleProgressBar *timeLimitView; // @synthesize timeLimitView=_timeLimitView;
@property(nonatomic) __weak UIButton *stopButtonP; // @synthesize stopButtonP=_stopButtonP;
@property(nonatomic) __weak UIButton *flashModeButton; // @synthesize flashModeButton=_flashModeButton;
@property(nonatomic) __weak UIButton *reverseCamera; // @synthesize reverseCamera=_reverseCamera;
@property(nonatomic) __weak UIView *downBar; // @synthesize downBar=_downBar;
@property(nonatomic) __weak UIButton *retakeButtonP; // @synthesize retakeButtonP=_retakeButtonP;
@property(nonatomic) __weak UIView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak UIButton *retakeButton; // @synthesize retakeButton=_retakeButton;
@property(nonatomic) __weak UIButton *recordButton; // @synthesize recordButton=_recordButton;
@property(nonatomic) __weak UIView *recordView; // @synthesize recordView=_recordView;
@property(nonatomic) __weak UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(nonatomic) __weak ANGShadowLabel *filterNameLbl; // @synthesize filterNameLbl=_filterNameLbl;
@property(nonatomic) __weak UIButton *countdownButtonP; // @synthesize countdownButtonP=_countdownButtonP;
@property(nonatomic) __weak UIView *speedView; // @synthesize speedView=_speedView;
@property float startFrom; // @synthesize startFrom=_startFrom;
- (void).cxx_destruct;
- (void)playerPause;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (_Bool)hidesNavigationBar;
- (_Bool)hidesStatusBar;
- (void)animateBottomViewSetHidden:(_Bool)arg1 keepingRecordView:(_Bool)arg2;
- (id)optionViews;
- (void)animateOptionViewSetHidden:(_Bool)arg1;
- (_Bool)shouldDisableFlashButtonForCurrentState;
- (void)fastSpeedButton:(id)arg1;
- (void)normalSpeedButton:(id)arg1;
- (void)slowSpeedButton:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dismiss;
- (void)didBeginTouch;
- (void)stopTmpPlayer;
- (void)stopPulseEffect;
- (void)startPulseEffect;
- (void)playTmpPlayerAt:(float)arg1;
- (void)didEndTouchAtValue:(float)arg1;
- (void)didSelectFilter:(int)arg1;
- (void)didChangeSpeedValue:(float)arg1;
- (void)didChangeValue:(float)arg1;
- (id)prewittKernel;
- (void)selectFilter:(int)arg1;
- (void)setUpLiveFilter;
- (void)stopTimerAndStartRecordingImmediately;
- (void)_timerFired:(id)arg1;
- (void)stopPlayerTimer;
- (void)stopCountdownTimerCancled:(_Bool)arg1;
- (void)startPlayerTimer;
- (void)startCountdownTimer;
- (void)updateLoadingLimit;
- (void)previouseFilterButton:(id)arg1;
- (void)nextFilterButton:(id)arg1;
- (void)cutButton:(id)arg1;
- (void)changeSpeed:(id)arg1;
- (void)updateViewAfterSegmentChange;
- (void)removeAllSegments;
- (void)cutLastSegment;
- (void)setFastRecorderSpeed;
- (void)setNormalRecorderSpeed;
- (void)setSlowRecorderSpeed;
- (void)setRecorderSpeed:(float)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)handleTouchDetected:(id)arg1;
- (void)stopRecording;
- (_Bool)doneButtonElligibleToShow;
- (void)setFrontFlashModeOn:(_Bool)arg1;
- (void)startRecording;
- (_Bool)checkIfMaxTimeExceeded;
- (void)recorder:(id)arg1 didAppendVideoSampleBufferInSession:(id)arg2;
- (void)updateTimeRecordedLabel;
- (void)recorder:(id)arg1 didCompleteSegment:(id)arg2 inSession:(id)arg3 error:(id)arg4;
- (void)recorder:(id)arg1 didBeginSegmentInSession:(id)arg2 error:(id)arg3;
- (void)recorder:(id)arg1 didInitializeVideoInSession:(id)arg2 error:(id)arg3;
- (void)recorder:(id)arg1 didInitializeAudioInSession:(id)arg2 error:(id)arg3;
- (void)recorder:(id)arg1 didCompleteSession:(id)arg2;
- (void)prepareSession;
- (void)switchFlash:(id)arg1;
- (void)countdownButton:(id)arg1;
- (void)closeButton:(id)arg1;
- (void)saveAndShowSession:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)handleStopButtonTapped:(id)arg1;
- (void)updateSpeedButtonImage;
- (void)updateFlashButtonImage;
- (void)handleReverseCameraTapped:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)showVideo;
- (void)showBottomBarTooltip;
- (void)possiblyShowTooltip;
- (void)possiblyShowTooltipAfterDelay;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)recorder:(id)arg1 didReconfigureVideoInput:(id)arg2;
- (void)recorder:(id)arg1 didReconfigureAudioInput:(id)arg2;
- (void)recorder:(id)arg1 didSkipVideoSampleBufferInSession:(id)arg2;
- (void)pauseMusic;
- (void)playMusic;
- (void)cancelTimeObserver;
- (void)initMusic;
- (void)initRecorder;
- (void)prepareRecorder;
- (void)addRecordingProgressView;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

