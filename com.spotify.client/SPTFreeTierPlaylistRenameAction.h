//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, NSURL, UITextField;
@protocol SPTAlertAction, SPTAlertInterface, SPTPlaylistModel;

@interface SPTFreeTierPlaylistRenameAction : SPAction <UITextFieldDelegate>
{
    NSURL *_playlistURL;
    id <SPTPlaylistModel> _playlistModel;
    NSString *_currentName;
    id <SPTAlertInterface> _alertInterface;
    id <SPTAlertAction> _createAction;
    UITextField *_actionTextField;
}

@property(retain, nonatomic) UITextField *actionTextField; // @synthesize actionTextField=_actionTextField;
@property(retain, nonatomic) id <SPTAlertAction> createAction; // @synthesize createAction=_createAction;
@property(nonatomic) __weak id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(readonly, copy, nonatomic) NSString *currentName; // @synthesize currentName=_currentName;
@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)execute:(id)arg1;
- (long long)style;
- (long long)icon;
- (id)title;
- (id)initWithPlaylistURL:(id)arg1 playlistModel:(id)arg2 currentName:(id)arg3 alertInterface:(id)arg4 logContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

