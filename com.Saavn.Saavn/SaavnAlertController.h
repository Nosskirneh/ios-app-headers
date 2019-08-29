//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SaavnVCAdaptor.h"

#import "FBSDKSharingDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SLComposeViewController, UIButton, UIColor, UIImage, UIImageView, UIScrollView, UIView, UIViewController;

@interface SaavnAlertController : SaavnVCAdaptor <UIViewControllerTransitioningDelegate, UIScrollViewDelegate, TTTAttributedLabelDelegate, UITextFieldDelegate, UITextViewDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, FBSDKSharingDelegate>
{
    UIView *contents;
    UIView *scrollFade;
    UIView *background;
    NSMutableArray *actions;
    float sheetHeight;
    float consumedHeight;
    UIScrollView *btnScroller;
    UIScrollView *pageScroller;
    _Bool hasContentHeader;
    _Bool shouldLazyLoadImage;
    UIImage *headerImage;
    UIImageView *headerImageView;
    NSString *headerImageUrl;
    NSString *copyBlock;
    UIScrollView *tutorialScrollView;
    UIView *pager;
    UIView *pagerDotContainer;
    NSMutableArray *pages;
    NSMutableArray *pagerDots;
    unsigned long long scrollPage;
    UIButton *nextBtn;
    UIButton *prevBtn;
    UIButton *doneBtn;
    _Bool isDragging;
    NSString *shareUrl;
    NSString *title;
    NSString *meta;
    NSString *artist;
    NSString *imageURL;
    NSString *shareTypeString;
    _Bool userPlaylist;
    int songCount;
    UIViewController *parentVC;
    SLComposeViewController *twitter;
    NSString *testVersion;
    NSString *trackString;
    _Bool _tapOutsideToDismiss;
    int _type;
    int _trigger;
    int _style;
    int _shareType;
    NSMutableDictionary *_shareObject;
    UIColor *_backgroundColor;
    UIColor *_fillColor;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _canceled;
    NSString *_alertTitle;
    NSString *_alertMessage;
    NSString *_dismissButtonLabel;
}

+ (id)controllerOfType:(int)arg1;
@property(nonatomic) _Bool tapOutsideToDismiss; // @synthesize tapOutsideToDismiss=_tapOutsideToDismiss;
@property(retain, nonatomic) NSString *dismissButtonLabel; // @synthesize dismissButtonLabel=_dismissButtonLabel;
@property(retain, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(copy, nonatomic) CDUnknownBlockType canceled; // @synthesize canceled=_canceled;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) NSMutableDictionary *shareObject; // @synthesize shareObject=_shareObject;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) int trigger; // @synthesize trigger=_trigger;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dismissAlertAndSkipBlocks:(_Bool)arg1 and:(_Bool)arg2;
- (void)dismissAlert;
- (void)dismissAlertViaButton:(id)arg1;
- (void)iPadRefreshLayout;
- (id)shareTypeToString;
- (id)triggerToString;
- (void)postEventSuccess:(id)arg1;
- (void)postEventFail:(id)arg1;
- (id)generateEmailBody;
- (id)generateEmailSubject;
- (id)generateGenericMessage;
- (id)generateTweet;
- (void)presentTwitterSheetOniPad;
- (void)shareToFB;
- (void)shareVia:(id)arg1;
- (void)prevPage;
- (void)nextPage;
- (void)updatePage:(id)arg1;
- (void)sharer:(id)arg1 didFailWithError:(id)arg2;
- (void)sharerDidCancel:(id)arg1;
- (void)sharer:(id)arg1 didCompleteWithResults:(id)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)addTapOutsideToCancel;
- (void)buildTutorialPager;
- (_Bool)sheetNeedsHeader;
- (id)buildCopyBlock;
- (id)buildHeader;
- (void)buildHeaderForWrapper:(id)arg1;
- (void)addMotion;
- (float)addLabelsTo:(id)arg1 withWidth:(float)arg2;
- (void)initTutorial;
- (void)initShareSheet;
- (void)initImageActionSheet;
- (void)initActionSheet;
- (void)initDialog;
- (void)initIntegrationAlertModal;
- (void)initProActionModal;
- (void)initLoginModal;
- (void)dismissLoginView;
- (void)setSheetHeight:(double)arg1;
- (id)getContentView;
- (void)initWithShareObj:(id)arg1 ofType:(int)arg2 inParentVC:(id)arg3;
- (id)getImageString:(id)arg1;
- (void)initActionsForShare;
- (void)initContents;
- (void)addTutorialPageWithTitle:(id)arg1 copy:(id)arg2 andImage:(id)arg3;
- (void)addTutorialPageWithTitle:(id)arg1 andCopy:(id)arg2;
- (void)addTutorialPageWithTitle:(id)arg1;
- (void)addCopyBlock:(id)arg1;
- (void)loadContentHeader:(id)arg1 withTitle:(id)arg2 andMeta:(id)arg3;
- (void)addContentHeader:(id)arg1 withTitle:(id)arg2 andMeta:(id)arg3;
- (void)addAction:(id)arg1 style:(int)arg2 withDivider:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)addAction:(id)arg1 style:(int)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addAction:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)removeObservers;
- (void)registerObservers;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

