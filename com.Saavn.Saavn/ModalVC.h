//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SaavnVC_n.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class ModalHeader, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIBlurEffect, UIButton, UIImage, UILabel, UIScrollView, UITableView, UITextField, UIView, UIVisualEffectView;

@interface ModalVC : SaavnVC_n <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UITableViewDataSource, UITableViewDelegate>
{
    int transitionType;
    NSMutableArray *actions;
    NSMutableDictionary *targetMedia;
    _Bool hasHeader;
    _Bool preloadedHeaderImage;
    _Bool closePlayerFirst;
    _Bool introDone;
    double statusBarH;
    UIView *background;
    UIView *modalWrap;
    UIBlurEffect *blur;
    UIVisualEffectView *blurView;
    NSDictionary *titleAttributes;
    NSDictionary *messageAttributes;
    _Bool blurSupported;
    UIView *contentsWrap;
    UIView *tableMask;
    UITableView *contentTable;
    UIScrollView *contentScroller;
    double contentH;
    double contentY;
    ModalHeader *header;
    UIView *headerWrap;
    UIButton *modalCancel;
    double headerOffset;
    double cancelOffset;
    NSString *dialogTitle;
    NSString *dialogMessage;
    UILabel *dialogLabel;
    _Bool buttonTapped;
    _Bool _tapOutsideToDismiss;
    _Bool _blursBackground;
    _Bool _customSheetSizing;
    int _type;
    int _style;
    int _animationType;
    UIImage *_preloadedImage;
    UITextField *_dialogInput;
    SaavnVC_n *_callbackTargetVC;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _tapAction;
    CDUnknownBlockType _modalAction;
    CDUnknownBlockType _cancelled;
}

@property(copy, nonatomic) CDUnknownBlockType cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) CDUnknownBlockType modalAction; // @synthesize modalAction=_modalAction;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak SaavnVC_n *callbackTargetVC; // @synthesize callbackTargetVC=_callbackTargetVC;
@property(retain, nonatomic) UITextField *dialogInput; // @synthesize dialogInput=_dialogInput;
@property(nonatomic) _Bool customSheetSizing; // @synthesize customSheetSizing=_customSheetSizing;
@property(nonatomic) _Bool blursBackground; // @synthesize blursBackground=_blursBackground;
@property(nonatomic) _Bool tapOutsideToDismiss; // @synthesize tapOutsideToDismiss=_tapOutsideToDismiss;
@property(retain, nonatomic) UIImage *preloadedImage; // @synthesize preloadedImage=_preloadedImage;
@property(nonatomic) int animationType; // @synthesize animationType=_animationType;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dismiss;
- (void)dismissWithoutCallbacks;
- (void)dismissCancelTapped;
- (void)tapOutside;
- (id)getTable;
- (id)getActions;
- (id)sectionDivider;
- (void)handleAction:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setSheetTitle:(id)arg1 andMessage:(id)arg2;
- (void)addContentHeader:(id)arg1;
- (void)addAction:(id)arg1;
- (void)addAction:(id)arg1 icon:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addAction:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dialogButtonTapped:(id)arg1;
- (void)initDialogContents;
- (id)getDialogAttributedString;
- (double)getDialogHeight:(double)arg1;
- (void)setDialogTitle:(id)arg1 andMessage:(id)arg2;
- (void)updateKeyboard;
- (void)updateUIMode;
- (void)storeContentValues;
- (void)adjustActionSheetSize;
- (void)addModalCancel;
- (void)initActionsTable;
- (void)initActionsData;
- (void)initContents;
- (void)initModalWrap;
- (void)initBackground;
- (void)setLabelStyles;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

