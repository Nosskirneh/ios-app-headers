//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"
#import "VOXBackgroundPresentableViewController-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITextField, UIView, VOXCollectionContentSetupModel, VOXTransitionAnimator;

@interface VOXCreateCollectionViewController : UIViewController <UITextFieldDelegate, VOXBackgroundPresentableViewController>
{
    CDUnknownBlockType backgroundPresentableControllerDidFinishCallback;
    VOXCollectionContentSetupModel *_contentModel;
    VOXTransitionAnimator *_presentingAnimator;
    CDUnknownBlockType _completionBlock;
    UIView *_contentContainerView;
    UITextField *_collectionNametextField;
    UIImageView *_collectionArtImageView;
    UIView *_artworkContainerView;
    UIButton *_doneButton;
    UILabel *_headerLabel;
}

@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak UIView *artworkContainerView; // @synthesize artworkContainerView=_artworkContainerView;
@property(nonatomic) __weak UIImageView *collectionArtImageView; // @synthesize collectionArtImageView=_collectionArtImageView;
@property(nonatomic) __weak UITextField *collectionNametextField; // @synthesize collectionNametextField=_collectionNametextField;
@property(nonatomic) __weak UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak VOXTransitionAnimator *presentingAnimator; // @synthesize presentingAnimator=_presentingAnimator;
@property(retain, nonatomic) VOXCollectionContentSetupModel *contentModel; // @synthesize contentModel=_contentModel;
@property(copy, nonatomic) CDUnknownBlockType backgroundPresentableControllerDidFinishCallback; // @synthesize backgroundPresentableControllerDidFinishCallback;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)forceDismissNotification;
- (void)_ceateCollection;
- (void)doneButtonDidClicked:(id)arg1;
- (void)collectionNameTextChanged:(id)arg1;
- (void)_setUpArtwork;
- (void)_setUpTextView;
- (void)_updateDoneButton;
- (void)_setUpViewBorder;
- (void)_setupHeaderTitleAppearance;
- (void)_setupLayout;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

