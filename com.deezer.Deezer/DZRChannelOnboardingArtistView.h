//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DZRChannelOnboardingSwipeCardView, NSArray, NSMutableArray, UIButton, UILabel, UIPanGestureRecognizer;
@protocol DZRChannelOnboardingArtistViewDelegate;

@interface DZRChannelOnboardingArtistView : UIView
{
    _Bool _dragging;
    _Bool _leftRightFlag;
    _Bool _playing;
    id <DZRChannelOnboardingArtistViewDelegate> _logicDelegate;
    NSArray *_artists;
    long long _currentIndex;
    NSMutableArray *_swipeStack;
    NSMutableArray *_selectedArtists;
    UIView *_swipeCardReferenceView;
    DZRChannelOnboardingSwipeCardView *_firstCardView;
    NSMutableArray *_tempCardViews;
    UIView *_equalizerAndLabelView;
    UIButton *_equalizerButton;
    UILabel *_artisteNameLabel;
    UIPanGestureRecognizer *_panGestureRecognizer;
    long long _swipeState;
    long long _previousSwipeState;
}

@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool leftRightFlag; // @synthesize leftRightFlag=_leftRightFlag;
@property(nonatomic) long long previousSwipeState; // @synthesize previousSwipeState=_previousSwipeState;
@property(nonatomic) long long swipeState; // @synthesize swipeState=_swipeState;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UILabel *artisteNameLabel; // @synthesize artisteNameLabel=_artisteNameLabel;
@property(retain, nonatomic) UIButton *equalizerButton; // @synthesize equalizerButton=_equalizerButton;
@property(retain, nonatomic) UIView *equalizerAndLabelView; // @synthesize equalizerAndLabelView=_equalizerAndLabelView;
@property(retain, nonatomic) NSMutableArray *tempCardViews; // @synthesize tempCardViews=_tempCardViews;
@property(retain, nonatomic) DZRChannelOnboardingSwipeCardView *firstCardView; // @synthesize firstCardView=_firstCardView;
@property(retain, nonatomic) UIView *swipeCardReferenceView; // @synthesize swipeCardReferenceView=_swipeCardReferenceView;
@property(retain, nonatomic) NSMutableArray *selectedArtists; // @synthesize selectedArtists=_selectedArtists;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(retain, nonatomic) NSMutableArray *swipeStack; // @synthesize swipeStack=_swipeStack;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(nonatomic) __weak id <DZRChannelOnboardingArtistViewDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void).cxx_destruct;
- (void)setEqualizerEnabled:(_Bool)arg1;
- (void)setPlayingState:(long long)arg1;
- (void)showEqualizer:(_Bool)arg1 animated:(_Bool)arg2;
- (void)toggleEqualizer;
- (void)backToCenterWhileRotating;
- (_Bool)isPresentingArtist;
- (_Bool)isInLandscapeMode;
- (void)populateCardView:(id)arg1 withArtist:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)swipeFrameForIndex:(int)arg1;
- (void)addSwipeStack;
- (struct CGRect)artistNameFrame;
- (void)addEqualizerAndArtistName;
- (void)setArtistName:(id)arg1;
- (void)animateToProgress:(double)arg1;
- (void)didPan:(id)arg1;
- (void)hideEndOfSwipeStackIfNeeded;
- (void)swapCards;
- (double)targetX;
@property(readonly) DZRChannelOnboardingSwipeCardView *tempCardView;
@property(readonly) DZRChannelOnboardingSwipeCardView *secondCardView;
- (void)populateSwipeCardWithIndex:(long long)arg1;
- (void)populateWithArtists:(id)arg1;
- (void)addPanGesture;
- (void)setupCardViews;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)baseInit;

@end

