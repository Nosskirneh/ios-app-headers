//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LoaderDelegate-Protocol.h"
#import "SHKAnghamiSharerViewDelegate-Protocol.h"
#import "SHKSharersViewDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, SHKAnghamiSharerView, SHKItem, SHKSharersView, ShareItemLoader, UIButton, UILabel, UIPlaceHolderTextView, UIPopoverController, UIViewController;

@interface CustomSHKActionSheet : UIView <UIPopoverControllerDelegate, SHKSharersViewDelegate, SHKAnghamiSharerViewDelegate, LoaderDelegate, UITextViewDelegate>
{
    _Bool _isSelfDisplayed;
    _Bool _keyboardIsVisible;
    UIView *_containerView;
    UIButton *_cancelArea;
    SHKSharersView *_sharerView;
    SHKAnghamiSharerView *_anghamiSharerView;
    UIPopoverController *_popoverController;
    UIViewController *_containerController;
    UILabel *_shareALinkLabel;
    id _displayFrom;
    UIView *_sharerViewContainer;
    UIView *_anghamiSharerViewContainer;
    UIView *_anghamiSharerViewButtonsContainer;
    NSLayoutConstraint *_anghamiSharerContainerHeightLC;
    UIButton *_sendButton;
    UIButton *_cancelButton;
    ShareItemLoader *_loader;
    SHKItem *_item;
    UIPlaceHolderTextView *_sharingMsgTextView;
    UIView *_separatorView;
}

+ (id)actionSheetForItem:(id)arg1 hideSharers:(id)arg2 extraSharers:(id)arg3;
+ (id)actionSheetForType:(int)arg1 hideSharers:(id)arg2 extraSharers:(id)arg3;
@property(nonatomic) _Bool keyboardIsVisible; // @synthesize keyboardIsVisible=_keyboardIsVisible;
@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak UIPlaceHolderTextView *sharingMsgTextView; // @synthesize sharingMsgTextView=_sharingMsgTextView;
@property(retain, nonatomic) SHKItem *item; // @synthesize item=_item;
@property(retain) ShareItemLoader *loader; // @synthesize loader=_loader;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak NSLayoutConstraint *anghamiSharerContainerHeightLC; // @synthesize anghamiSharerContainerHeightLC=_anghamiSharerContainerHeightLC;
@property(nonatomic) __weak UIView *anghamiSharerViewButtonsContainer; // @synthesize anghamiSharerViewButtonsContainer=_anghamiSharerViewButtonsContainer;
@property(nonatomic) __weak UIView *anghamiSharerViewContainer; // @synthesize anghamiSharerViewContainer=_anghamiSharerViewContainer;
@property(nonatomic) __weak UIView *sharerViewContainer; // @synthesize sharerViewContainer=_sharerViewContainer;
@property(nonatomic) _Bool isSelfDisplayed; // @synthesize isSelfDisplayed=_isSelfDisplayed;
@property(retain, nonatomic) id displayFrom; // @synthesize displayFrom=_displayFrom;
@property(nonatomic) __weak UILabel *shareALinkLabel; // @synthesize shareALinkLabel=_shareALinkLabel;
@property(retain, nonatomic) UIViewController *containerController; // @synthesize containerController=_containerController;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) SHKAnghamiSharerView *anghamiSharerView; // @synthesize anghamiSharerView=_anghamiSharerView;
@property(retain, nonatomic) SHKSharersView *sharerView; // @synthesize sharerView=_sharerView;
@property(retain, nonatomic) UIButton *cancelArea; // @synthesize cancelArea=_cancelArea;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)loadingFinished:(id)arg1;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (void)sendDidStart;
- (void)addFriendsToRecent:(id)arg1;
- (void)sendClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)initAnghamiSharerButtons;
- (void)didReset;
- (void)didSelectFriend:(id)arg1;
- (_Bool)sharerViewIsAboutToShowShareOption;
- (void)sharerViewCancelClicked;
@property(readonly) _Bool isSheetDisplayed;
- (void)nilThePopover;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissAndIsFullyDismissing:(_Bool)arg1;
- (void)dismiss;
- (void)showShareSheet;
- (void)swipeDown:(id)arg1;
- (void)cancelAction;
- (void)layoutSubviews;
- (void)setupView;
- (void)setSharerDelegate:(id)arg1;
- (void)showInView:(id)arg1;
- (void)dealloc;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)initMessageTextView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)hasFriends;
- (_Bool)showFriends;
- (double)getViewHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

