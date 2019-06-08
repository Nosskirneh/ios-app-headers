//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RHPlaylistMO, UIAlertController;

@interface RHPlaylistNameEditorController : NSObject
{
    RHPlaylistMO *_playlist;
    CDUnknownBlockType _dismissalHandler;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    UIAlertController *_alert;
}

+ (id)activeControllers;
@property(retain, nonatomic) UIAlertController *alert; // @synthesize alert=_alert;
@property(copy, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(retain, nonatomic) RHPlaylistMO *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (void)choseNewPlaylistName:(id)arg1;
- (void)choseName:(id)arg1 forPlaylist:(id)arg2;
- (id)enteredName;
- (id)userModel;
- (void)show;
- (id)initForRenamingPlaylist:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initForNewPlaylistDefaultName:(id)arg1 dismissal:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)initWithPlaylist:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 dismissal:(CDUnknownBlockType)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end

