//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class UIAlertAction;
@protocol SPTFreeTierCreatePlaylistController;

@interface SPTFreeTierCreatePlaylistRenameAction : SPAction
{
    UIAlertAction *_createAction;
    id <SPTFreeTierCreatePlaylistController> _createPlaylistController;
}

@property(retain, nonatomic) id <SPTFreeTierCreatePlaylistController> createPlaylistController; // @synthesize createPlaylistController=_createPlaylistController;
@property(retain, nonatomic) UIAlertAction *createAction; // @synthesize createAction=_createAction;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (long long)style;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithCreatePlaylistController:(id)arg1 logContext:(id)arg2;

@end

