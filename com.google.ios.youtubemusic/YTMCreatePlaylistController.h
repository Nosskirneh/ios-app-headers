//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOAlertViewDelegate-Protocol.h"
#import "YTMCreatePlaylistViewDelegate-Protocol.h"
#import "YTTopController-Protocol.h"

@class GIMMe, GOOAlertView, NSString, YTICommand, YTPlaylistService, YTUserDefaults;
@protocol YTResponder;

@interface YTMCreatePlaylistController : NSObject <GOOAlertViewDelegate, YTMCreatePlaylistViewDelegate, YTTopController>
{
    YTICommand *_navigationEndpoint;
    YTMCreatePlaylistController *_retainedSelf;
    GOOAlertView *_alertView;
    YTPlaylistService *_playlistService;
    YTUserDefaults *_userDefaults;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)alertView;
- (void)showCreatePlaylistDialog;
- (void)createPlaylistView:(id)arg1 didCreatePlaylistWithTitle:(id)arg2 privacyStatus:(int)arg3;
- (void)createPlaylistViewDidCancel:(id)arg1;
- (void)alertViewDidDisappear:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

