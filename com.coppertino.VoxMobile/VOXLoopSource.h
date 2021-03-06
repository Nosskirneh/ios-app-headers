//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXMediaLibrarySource.h"

@class NSObject, UIAlertView;
@protocol OS_dispatch_queue;

@interface VOXLoopSource : VOXMediaLibrarySource
{
    double _lastSaveTime;
    _Bool _isSynchronizing;
    _Bool _cancelled;
    _Bool _errorAlertWasPresented;
    NSObject<OS_dispatch_queue> *_syncQueue;
    UIAlertView *_currentErrorAlertView;
}

@property(retain) UIAlertView *currentErrorAlertView; // @synthesize currentErrorAlertView=_currentErrorAlertView;
@property _Bool errorAlertWasPresented; // @synthesize errorAlertWasPresented=_errorAlertWasPresented;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool isSynchronizing; // @synthesize isSynchronizing=_isSynchronizing;
@property(retain) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
- (void).cxx_destruct;
- (void)cleanedLocalStorage:(id)arg1;
- (void)deleteAllLoopItems;
- (void)getTracksForAlbumIds:(id)arg1 inCompletion:(CDUnknownBlockType)arg2;
- (void)_showAlertWithErrorIfNeeded:(id)arg1;
- (void)updateAlbums;
- (void)savePrivateContextIfNeeded;
- (void)synchronize;
- (void)migrateIfNeeded;
- (unsigned long long)countOfTracksAddedToCollections;
- (void)loopMediaLibraryShouldCheckForUpdatesNotification:(id)arg1;
- (void)loopLoginStateChangedNotification:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 delegateQueue:(id)arg2;

@end

