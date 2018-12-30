//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGAddToPlaylistGeneralViewController.h"

#import "ANGAsyncImageViewDelegate-Protocol.h"
#import "RSKImageCropViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class ANGAsyncImageView, ANGPlaylist, NSLayoutConstraint, NSString, UIButton, UILabel, UITextField, UIView;

@interface ANGAddToPlaylistNameViewController : ANGAddToPlaylistGeneralViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, RSKImageCropViewControllerDelegate, ANGAsyncImageViewDelegate>
{
    _Bool _defaultToCollab;
    ANGPlaylist *_playlist;
    UITextField *_playlistNameTextField;
    ANGAsyncImageView *_songImageView;
    UILabel *_chooseNameLabel;
    UILabel *_titleLabel;
    UIButton *_backButton;
    UIButton *_doneButton;
    NSLayoutConstraint *_switchButtonContainerBottomConstraint;
    UIButton *_backgroundButton;
    UIButton *_cancelButton;
    UIView *_container;
    UIView *_bottomView;
    UIView *_editButtonContainer;
    UIButton *_editButton;
    NSString *_playlistImageUrl;
}

@property(retain, nonatomic) NSString *playlistImageUrl; // @synthesize playlistImageUrl=_playlistImageUrl;
@property _Bool defaultToCollab; // @synthesize defaultToCollab=_defaultToCollab;
@property(nonatomic) __weak UIButton *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) __weak UIView *editButtonContainer; // @synthesize editButtonContainer=_editButtonContainer;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UIView *container; // @synthesize container=_container;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic) __weak NSLayoutConstraint *switchButtonContainerBottomConstraint; // @synthesize switchButtonContainerBottomConstraint=_switchButtonContainerBottomConstraint;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *chooseNameLabel; // @synthesize chooseNameLabel=_chooseNameLabel;
@property(nonatomic) __weak ANGAsyncImageView *songImageView; // @synthesize songImageView=_songImageView;
@property(nonatomic) __weak UITextField *playlistNameTextField; // @synthesize playlistNameTextField=_playlistNameTextField;
@property(retain, nonatomic) ANGPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)imageCropViewController:(id)arg1 didCropImage:(id)arg2 usingCropRect:(struct CGRect)arg3;
- (void)imageCropViewControllerDidCancelCrop:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)setPhotoAction;
- (void)s3UploadFailed;
- (void)s3UploadSucceededToUrl:(id)arg1 data:(id)arg2;
- (void)showKeyboard;
- (void)dismissKeyboard;
- (void)uploadImage:(id)arg1;
- (void)editButtonClicked:(id)arg1;
- (void)createPlaylist:(id)arg1 name:(id)arg2 songs:(id)arg3 source:(id)arg4 collaborative:(_Bool)arg5;
- (void)performAddPlaylist;
- (void)doneClicked:(id)arg1;
- (void)dismissClicked:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)initPhotoButton;
- (void)initView;
- (id)placeholderName;
- (void)asyncImageSet:(id)arg1;
- (void)setBackButtonAsCancel;
- (void)addShadowToContainer;
- (void)setDoneButtonEnabled:(_Bool)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)initPlaylistNameTextField;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initFromGenericObject;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

