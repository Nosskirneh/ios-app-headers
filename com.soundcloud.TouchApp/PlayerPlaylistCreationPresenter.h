//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PlaylistCreationTextFieldDelegate, PlaylistCreationViewModel;

@interface PlayerPlaylistCreationPresenter : NSObject
{
    PlaylistCreationViewModel *_viewModel;
    PlaylistCreationTextFieldDelegate *_playlistCreationTextFieldDelegate;
}

@property(nonatomic) __weak PlaylistCreationTextFieldDelegate *playlistCreationTextFieldDelegate; // @synthesize playlistCreationTextFieldDelegate=_playlistCreationTextFieldDelegate;
@property(nonatomic) __weak PlaylistCreationViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)animateImageViewAlongsideKeyboard:(id)arg1;
- (void)setupImageViewWithCellSize:(struct CGSize)arg1 trackUrn:(id)arg2;
- (void)setupNavigationBarTexts;
- (void)animateOverlayHidden:(_Bool)arg1;
- (void)indicateSuccessfulSubmission;
- (void)enableInteraction;
- (void)disableInteraction;
- (void)prepareForKeyboardShow:(id)arg1;
- (void)prepareForKeyboardHide:(id)arg1;
- (void)setupViewWithTrackUrn:(id)arg1 cellSize:(struct CGSize)arg2;

@end

