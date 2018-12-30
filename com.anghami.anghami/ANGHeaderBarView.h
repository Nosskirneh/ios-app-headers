//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ANGAsyncImageViewDelegate-Protocol.h"
#import "ANGHeaderButtonOnOffDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class ANGAsyncImageView, ANGHeaderBarButton, ANGOverrideDeeplinksContainer, ANGSwitchButton, AnimatedGradientButton, CAGradientLayer, NSArray, NSAttributedString, NSLayoutConstraint, NSNumber, NSString, UIButton, UIColor, UIFont, UIImage, UIImageView, UILabel, UISearchBar, UITapGestureRecognizer;
@protocol ANGHeaderBarViewDataSource, ANGHeaderButtonsDelegate, DownloadButtonProtocol, HashTagButtonDelegate, HeaderImageTapDelegate, HeaderInsideButtonTapDelegate, HeaderMainButtonDelegate, HeaderSearchFieldTapDelegate, TitleLabelTapDelegate;

@interface ANGHeaderBarView : UIView <UIGestureRecognizerDelegate, ANGAsyncImageViewDelegate, ANGHeaderButtonOnOffDelegate>
{
    struct CGRect _rightButtonBounds;
    struct CGRect _leftButtonBounds;
    NSString *_hashtagDescription;
    double imageViewHeight;
    CAGradientLayer *gradient;
    _Bool _firstLayoutDone;
    _Bool _isListeningForDownloadProgress;
    ANGHeaderBarButton *_profileFollowButton;
    ANGHeaderBarButton *_followButton;
    ANGHeaderBarButton *_shareButton;
    ANGHeaderBarButton *_likeButton;
    ANGHeaderBarButton *_playButton;
    ANGHeaderBarButton *_filterButton;
    ANGHeaderBarButton *_inviteFriendsButton;
    ANGHeaderBarButton *_leaveButton;
    ANGHeaderBarButton *_radioButton;
    ANGHeaderBarButton *_shuffleButton;
    ANGHeaderBarButton *_saveButton;
    ANGHeaderBarButton *_downloadButton;
    _Bool _rightButtonEnabled;
    _Bool _leftButtonEnabled;
    _Bool _showInsiderButtonTopLeft;
    _Bool _showIsPrivate;
    _Bool _showExclusiveView;
    _Bool _showExplicitIcon;
    _Bool _circleImage;
    _Bool _hideCoverArts;
    id <HeaderMainButtonDelegate> _headerMainButtonDelegate;
    id <DownloadButtonProtocol> _downloadButtonDelegate;
    id <ANGHeaderBarViewDataSource> _dataSource;
    id <HeaderSearchFieldTapDelegate> _headerSearchFieldTapDelegate;
    id <HashTagButtonDelegate> _hashTagButtonDelegate;
    id <TitleLabelTapDelegate> _titleLabelDelegate;
    id <HeaderInsideButtonTapDelegate> _headerInsideButtonTapDelegate;
    id <HeaderImageTapDelegate> _headerImageTapDelegate;
    CAGradientLayer *_gradient;
    double _horizontalEdgeInset;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    unsigned long long _titleNumberOfLines;
    UIColor *_titleColor;
    UIFont *_titleFont;
    UILabel *_titleLabel;
    UIImage *_titleIcon;
    NSString *_subtitle;
    NSAttributedString *_attributedSubtitle;
    unsigned long long _subtitleNumberOfLines;
    UIColor *_subtitleColor;
    UIView *_headerImageContainerView;
    ANGAsyncImageView *_coverArtImageView;
    NSString *_coverArtID;
    UIImageView *_insideButtonTopLeftShadow;
    UIButton *_insideButtonTopLeft;
    UISearchBar *_headerSearchField;
    UIView *_headerSeachFieldTapView;
    NSArray *_buttonsArray;
    NSArray *_labelsArray;
    UIView *_imageViewButtons;
    UIView *_additionalView;
    NSLayoutConstraint *_additionalViewSpaceHeight;
    NSArray *_headerButtons;
    id <ANGHeaderButtonsDelegate> _headerButtonsDelegate;
    ANGOverrideDeeplinksContainer *_overrideDeeplinksContainer;
    NSArray *_apiHeaderButtons;
    NSNumber *_expectedHeight;
    ANGSwitchButton *_leftButton;
    ANGSwitchButton *_rightButton;
    NSLayoutConstraint *_leftButtonWidth;
    NSLayoutConstraint *_rightButtonWidth;
    NSLayoutConstraint *_leftButtonCenter;
    NSLayoutConstraint *_leftButtonX;
    NSLayoutConstraint *_rightButtonCenter;
    NSLayoutConstraint *_rightButtonX;
    UITapGestureRecognizer *_headerSearchFieldTapGesture;
    UITapGestureRecognizer *_titleLabelTapGesture;
    UITapGestureRecognizer *_subtitleTapGesture;
    NSArray *_hashTags;
    UIImageView *_plusBadgeImageView;
    UIButton *_addImageButton;
    NSLayoutConstraint *_imageViewSpaceHeight;
    NSLayoutConstraint *_buttonsViewSpaceHeight;
    NSLayoutConstraint *_headerSearchFieldHeight;
    NSLayoutConstraint *_hashTagViewSpaceHeight;
    double _hashTagViewNeededHeight;
    NSLayoutConstraint *_leaderBoardViewSpaceHeight;
    NSLayoutConstraint *_shuffleViewSpaceHeight;
    UIView *_backgroundView;
    UIView *_buttonsView;
    UIView *_hashTagView;
    UIView *_leaderBoardView;
    UIView *_imageView;
    UIView *_titleContainer;
    NSLayoutConstraint *_titleLabelHeight;
    NSLayoutConstraint *_titleLabelIconWidth;
    UIImageView *_titleLabelIcon;
    UIView *_imageViewLabels;
    NSLayoutConstraint *_imageViewButtonsHeight;
    NSLayoutConstraint *_imageViewLabelsHeight;
    NSLayoutConstraint *_imageViewButtonsWidthConstraint;
    NSLayoutConstraint *_imageViewLabelsWidthConstraint;
    NSLayoutConstraint *_titleLabelPublicPrivateIconWidth;
    UIImageView *_titleLabelPublicPrivateIcon;
    UIView *_exclusiveContainer;
    NSLayoutConstraint *_exclusiveContainerWidth;
    NSLayoutConstraint *_exclusiveContainerHeight;
    UILabel *_subtitleLabel;
    UIImageView *_subtitleIcon1;
    NSLayoutConstraint *_subtitleIcon1Width;
    NSLayoutConstraint *_subtitleIconCenterY;
    UIImageView *_subtitleIcon2;
    NSLayoutConstraint *_subtitleIcon2Width;
    ANGAsyncImageView *_subtitleImageView;
    NSLayoutConstraint *_subtitleContainerHeightConstraint;
    NSLayoutConstraint *_subtitleImageWidthConstraint;
    AnimatedGradientButton *_mainButton;
    NSLayoutConstraint *_headerImageContainerViewHeightConstraint;
    NSLayoutConstraint *_mainButtonWidthConstraint;
    NSLayoutConstraint *_mainButtonHeightConstraint;
    UIImageView *_maximizedImageView;
    UIImageView *_explicitIndicatorImageView;
    UIImageView *_explicitIndicatorImageViewMaximized;
}

+ (id)loadNibWithExpectedHeight:(double)arg1;
@property(retain, nonatomic) UIImageView *explicitIndicatorImageViewMaximized; // @synthesize explicitIndicatorImageViewMaximized=_explicitIndicatorImageViewMaximized;
@property(retain, nonatomic) UIImageView *explicitIndicatorImageView; // @synthesize explicitIndicatorImageView=_explicitIndicatorImageView;
@property(retain, nonatomic) UIImageView *maximizedImageView; // @synthesize maximizedImageView=_maximizedImageView;
@property(retain, nonatomic) NSLayoutConstraint *mainButtonHeightConstraint; // @synthesize mainButtonHeightConstraint=_mainButtonHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *mainButtonWidthConstraint; // @synthesize mainButtonWidthConstraint=_mainButtonWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerImageContainerViewHeightConstraint; // @synthesize headerImageContainerViewHeightConstraint=_headerImageContainerViewHeightConstraint;
@property(retain, nonatomic) AnimatedGradientButton *mainButton; // @synthesize mainButton=_mainButton;
@property(retain, nonatomic) NSLayoutConstraint *subtitleImageWidthConstraint; // @synthesize subtitleImageWidthConstraint=_subtitleImageWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleContainerHeightConstraint; // @synthesize subtitleContainerHeightConstraint=_subtitleContainerHeightConstraint;
@property(retain, nonatomic) ANGAsyncImageView *subtitleImageView; // @synthesize subtitleImageView=_subtitleImageView;
@property(retain, nonatomic) NSLayoutConstraint *subtitleIcon2Width; // @synthesize subtitleIcon2Width=_subtitleIcon2Width;
@property(retain, nonatomic) UIImageView *subtitleIcon2; // @synthesize subtitleIcon2=_subtitleIcon2;
@property(retain, nonatomic) NSLayoutConstraint *subtitleIconCenterY; // @synthesize subtitleIconCenterY=_subtitleIconCenterY;
@property(retain, nonatomic) NSLayoutConstraint *subtitleIcon1Width; // @synthesize subtitleIcon1Width=_subtitleIcon1Width;
@property(retain, nonatomic) UIImageView *subtitleIcon1; // @synthesize subtitleIcon1=_subtitleIcon1;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) NSLayoutConstraint *exclusiveContainerHeight; // @synthesize exclusiveContainerHeight=_exclusiveContainerHeight;
@property(retain, nonatomic) NSLayoutConstraint *exclusiveContainerWidth; // @synthesize exclusiveContainerWidth=_exclusiveContainerWidth;
@property(retain, nonatomic) UIView *exclusiveContainer; // @synthesize exclusiveContainer=_exclusiveContainer;
@property(retain, nonatomic) UIImageView *titleLabelPublicPrivateIcon; // @synthesize titleLabelPublicPrivateIcon=_titleLabelPublicPrivateIcon;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelPublicPrivateIconWidth; // @synthesize titleLabelPublicPrivateIconWidth=_titleLabelPublicPrivateIconWidth;
@property(nonatomic) __weak NSLayoutConstraint *imageViewLabelsWidthConstraint; // @synthesize imageViewLabelsWidthConstraint=_imageViewLabelsWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewButtonsWidthConstraint; // @synthesize imageViewButtonsWidthConstraint=_imageViewButtonsWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewLabelsHeight; // @synthesize imageViewLabelsHeight=_imageViewLabelsHeight;
@property(retain, nonatomic) NSLayoutConstraint *imageViewButtonsHeight; // @synthesize imageViewButtonsHeight=_imageViewButtonsHeight;
@property(retain, nonatomic) UIView *imageViewLabels; // @synthesize imageViewLabels=_imageViewLabels;
@property(retain, nonatomic) UIImageView *titleLabelIcon; // @synthesize titleLabelIcon=_titleLabelIcon;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelIconWidth; // @synthesize titleLabelIconWidth=_titleLabelIconWidth;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelHeight; // @synthesize titleLabelHeight=_titleLabelHeight;
@property(retain, nonatomic) UIView *titleContainer; // @synthesize titleContainer=_titleContainer;
@property(retain, nonatomic) UIView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *leaderBoardView; // @synthesize leaderBoardView=_leaderBoardView;
@property(retain, nonatomic) UIView *hashTagView; // @synthesize hashTagView=_hashTagView;
@property(retain, nonatomic) UIView *buttonsView; // @synthesize buttonsView=_buttonsView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSLayoutConstraint *shuffleViewSpaceHeight; // @synthesize shuffleViewSpaceHeight=_shuffleViewSpaceHeight;
@property(retain, nonatomic) NSLayoutConstraint *leaderBoardViewSpaceHeight; // @synthesize leaderBoardViewSpaceHeight=_leaderBoardViewSpaceHeight;
@property double hashTagViewNeededHeight; // @synthesize hashTagViewNeededHeight=_hashTagViewNeededHeight;
@property(retain, nonatomic) NSLayoutConstraint *hashTagViewSpaceHeight; // @synthesize hashTagViewSpaceHeight=_hashTagViewSpaceHeight;
@property(retain, nonatomic) NSLayoutConstraint *headerSearchFieldHeight; // @synthesize headerSearchFieldHeight=_headerSearchFieldHeight;
@property(retain, nonatomic) NSLayoutConstraint *buttonsViewSpaceHeight; // @synthesize buttonsViewSpaceHeight=_buttonsViewSpaceHeight;
@property(retain, nonatomic) NSLayoutConstraint *imageViewSpaceHeight; // @synthesize imageViewSpaceHeight=_imageViewSpaceHeight;
@property(retain, nonatomic) UIButton *addImageButton; // @synthesize addImageButton=_addImageButton;
@property(retain, nonatomic) UIImageView *plusBadgeImageView; // @synthesize plusBadgeImageView=_plusBadgeImageView;
@property(retain, nonatomic) NSArray *hashTags; // @synthesize hashTags=_hashTags;
@property(retain, nonatomic) UITapGestureRecognizer *subtitleTapGesture; // @synthesize subtitleTapGesture=_subtitleTapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *titleLabelTapGesture; // @synthesize titleLabelTapGesture=_titleLabelTapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *headerSearchFieldTapGesture; // @synthesize headerSearchFieldTapGesture=_headerSearchFieldTapGesture;
@property(retain, nonatomic) NSLayoutConstraint *rightButtonX; // @synthesize rightButtonX=_rightButtonX;
@property(retain, nonatomic) NSLayoutConstraint *rightButtonCenter; // @synthesize rightButtonCenter=_rightButtonCenter;
@property(retain, nonatomic) NSLayoutConstraint *leftButtonX; // @synthesize leftButtonX=_leftButtonX;
@property(retain, nonatomic) NSLayoutConstraint *leftButtonCenter; // @synthesize leftButtonCenter=_leftButtonCenter;
@property(retain, nonatomic) NSLayoutConstraint *rightButtonWidth; // @synthesize rightButtonWidth=_rightButtonWidth;
@property(retain, nonatomic) NSLayoutConstraint *leftButtonWidth; // @synthesize leftButtonWidth=_leftButtonWidth;
@property(retain, nonatomic) ANGSwitchButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) ANGSwitchButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) NSNumber *expectedHeight; // @synthesize expectedHeight=_expectedHeight;
@property(retain, nonatomic) NSArray *apiHeaderButtons; // @synthesize apiHeaderButtons=_apiHeaderButtons;
@property(retain, nonatomic) ANGOverrideDeeplinksContainer *overrideDeeplinksContainer; // @synthesize overrideDeeplinksContainer=_overrideDeeplinksContainer;
@property(nonatomic) __weak id <ANGHeaderButtonsDelegate> headerButtonsDelegate; // @synthesize headerButtonsDelegate=_headerButtonsDelegate;
@property(readonly, nonatomic) NSArray *headerButtons; // @synthesize headerButtons=_headerButtons;
@property(retain, nonatomic) NSLayoutConstraint *additionalViewSpaceHeight; // @synthesize additionalViewSpaceHeight=_additionalViewSpaceHeight;
@property(retain, nonatomic) UIView *additionalView; // @synthesize additionalView=_additionalView;
@property(retain, nonatomic) UIView *imageViewButtons; // @synthesize imageViewButtons=_imageViewButtons;
@property(retain, nonatomic) NSArray *labelsArray; // @synthesize labelsArray=_labelsArray;
@property(retain, nonatomic) NSArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
@property(retain, nonatomic) UIView *headerSeachFieldTapView; // @synthesize headerSeachFieldTapView=_headerSeachFieldTapView;
@property(retain, nonatomic) UISearchBar *headerSearchField; // @synthesize headerSearchField=_headerSearchField;
@property(nonatomic) _Bool hideCoverArts; // @synthesize hideCoverArts=_hideCoverArts;
@property(nonatomic) _Bool circleImage; // @synthesize circleImage=_circleImage;
@property(nonatomic) _Bool showExplicitIcon; // @synthesize showExplicitIcon=_showExplicitIcon;
@property(nonatomic) _Bool showExclusiveView; // @synthesize showExclusiveView=_showExclusiveView;
@property(nonatomic) _Bool showIsPrivate; // @synthesize showIsPrivate=_showIsPrivate;
@property(nonatomic) _Bool showInsiderButtonTopLeft; // @synthesize showInsiderButtonTopLeft=_showInsiderButtonTopLeft;
@property(nonatomic) __weak UIButton *insideButtonTopLeft; // @synthesize insideButtonTopLeft=_insideButtonTopLeft;
@property(nonatomic) __weak UIImageView *insideButtonTopLeftShadow; // @synthesize insideButtonTopLeftShadow=_insideButtonTopLeftShadow;
@property(retain, nonatomic) NSString *coverArtID; // @synthesize coverArtID=_coverArtID;
@property(retain, nonatomic) ANGAsyncImageView *coverArtImageView; // @synthesize coverArtImageView=_coverArtImageView;
@property(retain, nonatomic) UIView *headerImageContainerView; // @synthesize headerImageContainerView=_headerImageContainerView;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(nonatomic) unsigned long long subtitleNumberOfLines; // @synthesize subtitleNumberOfLines=_subtitleNumberOfLines;
@property(retain, nonatomic) NSAttributedString *attributedSubtitle; // @synthesize attributedSubtitle=_attributedSubtitle;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) UIImage *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) unsigned long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property double horizontalEdgeInset; // @synthesize horizontalEdgeInset=_horizontalEdgeInset;
@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) _Bool leftButtonEnabled; // @synthesize leftButtonEnabled=_leftButtonEnabled;
@property(nonatomic) _Bool rightButtonEnabled; // @synthesize rightButtonEnabled=_rightButtonEnabled;
@property(nonatomic) __weak id <HeaderImageTapDelegate> headerImageTapDelegate; // @synthesize headerImageTapDelegate=_headerImageTapDelegate;
@property(nonatomic) __weak id <HeaderInsideButtonTapDelegate> headerInsideButtonTapDelegate; // @synthesize headerInsideButtonTapDelegate=_headerInsideButtonTapDelegate;
@property(nonatomic) __weak id <TitleLabelTapDelegate> titleLabelDelegate; // @synthesize titleLabelDelegate=_titleLabelDelegate;
@property(nonatomic) __weak id <HashTagButtonDelegate> hashTagButtonDelegate; // @synthesize hashTagButtonDelegate=_hashTagButtonDelegate;
@property(nonatomic) __weak id <HeaderSearchFieldTapDelegate> headerSearchFieldTapDelegate; // @synthesize headerSearchFieldTapDelegate=_headerSearchFieldTapDelegate;
@property(nonatomic) __weak id <ANGHeaderBarViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <DownloadButtonProtocol> downloadButtonDelegate; // @synthesize downloadButtonDelegate=_downloadButtonDelegate;
@property(nonatomic) __weak id <HeaderMainButtonDelegate> headerMainButtonDelegate; // @synthesize headerMainButtonDelegate=_headerMainButtonDelegate;
- (void).cxx_destruct;
- (id)doesHeaderHaveApiButtonOfType:(int)arg1;
- (id)getHeaderMainButton;
- (void)buttonStatusChanged:(id)arg1;
- (void)buttonOnOffSwitched:(id)arg1;
- (void)handleHeaderButtonDeeplink:(id)arg1 andType:(int)arg2;
- (void)superHeaderBarButtonAction:(id)arg1;
- (void)setAudioEngineSourceShuffle;
- (void)setAudioEngineSourcePlay;
- (void)overrideButtonIfNecessary:(id)arg1;
- (id)createButtonOfType:(int)arg1 withOffTitle:(id)arg2 andOnTitle:(id)arg3 statusTitles:(id)arg4;
- (id)createButtonOfType:(int)arg1 statusTitles:(id)arg2;
- (id)createButtonOfType:(int)arg1 withOffTitle:(id)arg2 andOnTitle:(id)arg3;
- (id)createButtonOfType:(int)arg1 withTitle:(id)arg2;
@property(readonly, nonatomic) ANGHeaderBarButton *inviteFriendsButton;
@property(readonly, nonatomic) ANGHeaderBarButton *leaveButton;
@property(readonly, nonatomic) ANGHeaderBarButton *shareButton;
@property(readonly, nonatomic) ANGHeaderBarButton *radioButton;
@property(readonly, nonatomic) ANGHeaderBarButton *filterButton;
@property(readonly, nonatomic) ANGHeaderBarButton *followButton;
@property(readonly, nonatomic) ANGHeaderBarButton *profileFollowButton;
@property(readonly, nonatomic) ANGHeaderBarButton *likeButton;
@property(readonly, nonatomic) ANGHeaderBarButton *downloadButton;
@property(readonly, nonatomic) ANGHeaderBarButton *saveButton;
@property(readonly, nonatomic) ANGHeaderBarButton *shuffleButton;
@property(readonly, nonatomic) ANGHeaderBarButton *playButton;
- (void)setButtonsFromApi:(id)arg1;
- (id)getHeaderButtonForType:(int)arg1;
- (id)getButtonToShowForInviteFriends:(id)arg1;
- (void)showLightSearchBar;
@property(readonly) AnimatedGradientButton *mainHeaderButton;
- (id)getMainButtonTitle;
- (void)refreshMainButton;
- (void)layoutMainButton;
- (void)mainButtonAction:(id)arg1;
- (unsigned long long)downloadingSongsCount;
- (unsigned long long)downloadedSongsCount;
- (id)downloadingSongs;
- (unsigned long long)totalSongCount;
- (_Bool)songsAreDownloading;
- (_Bool)allSongsAreDownloaded;
- (void)downloadSongs;
- (unsigned long long)downloadStatus;
- (id)listOfSongs;
- (void)refreshDownloadStatus;
- (void)refreshDownloadProgress;
- (void)stopListeningForDownloadProgress;
- (void)startListeningForDownloadProgress;
- (void)refreshHeaderHeight;
- (double)idealHeaderHeight;
- (void)asyncImageSet:(id)arg1;
- (void)addLeaderBoard:(id)arg1;
- (void)hashTagPressed:(id)arg1;
- (void)setHashTags:(id)arg1 withDescription:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)headerSearchFieldTapped;
- (void)toggleHeaderSearchFieldTapEnabled:(_Bool)arg1;
- (void)addTapGestureRecognizer;
- (void)addCancelAsRightButtonWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)addPauseResumeAsLeftButtonWithTarget:(id)arg1 selector:(SEL)arg2 isPause:(_Bool)arg3;
@property(readonly, nonatomic) ANGSwitchButton *addSongsButton;
- (void)addAddSongsAsRightButtonWithTarget:(id)arg1 andSelector:(SEL)arg2;
- (void)addDoneAsLeftButtonWithTarget:(id)arg1 andSelector:(SEL)arg2;
- (void)addBottomLineToLabel:(id)arg1 verticalSpacing:(double)arg2;
- (_Bool)isAccessibilityElement;
- (void)buildExclusive;
- (void)setSubtitleIcon2:(id)arg1 withWidth:(double)arg2 yOffset:(double)arg3;
- (void)setSubtitleIcon1:(id)arg1 withWidth:(double)arg2 yOffset:(double)arg3;
- (void)showSubtitleView;
- (double)width;
- (double)subtitleLabelWidth;
- (void)setSubtitleImage:(id)arg1;
- (void)addOrRemoveTitleLabelTapGesture:(_Bool)arg1;
- (void)insideButtonPressed;
- (void)addImageButtonAction:(id)arg1;
- (void)insideButtonTopLeftPressed:(id)arg1;
- (double)titleLabelWidth;
- (_Bool)titleLabelHeightIsZero;
- (void)subtitleLabelTapped;
- (void)titleLabelTapped;
- (void)adjustShadowFrames;
- (void)addShadowLayers;
- (void)layoutRightButton;
- (void)layoutleftButton;
- (void)layoutExplicitIndicator;
- (void)relayoutSubviews;
- (void)layoutSubviews;
- (void)maximizeHeaderImageView;
- (void)minimizeHeaderImageView;
- (void)addCoverArtImageViewGestureRecognizer;
- (void)dealloc;
- (_Bool)isSmallHeader;
- (void)showAddImageButton:(_Bool)arg1;
- (void)showPlusBadge:(_Bool)arg1;
- (void)awakeFromNib;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)requestedWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
