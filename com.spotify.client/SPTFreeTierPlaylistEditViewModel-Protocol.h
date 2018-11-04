//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, NSURL;

@protocol SPTFreeTierPlaylistEditViewModel <NSObject>
@property(readonly, nonatomic) _Bool renameEnabled;
@property(readonly, nonatomic) _Bool editAnnotationEnabled;
@property(copy, nonatomic) NSString *editedDescription;
@property(readonly, copy, nonatomic) NSString *originalDescription;
@property(readonly, nonatomic) _Bool reorderEnabled;
@property(copy, nonatomic) NSString *editedPlaylistName;
@property(readonly, copy, nonatomic) NSString *originalPlaylistName;
@property(readonly, nonatomic) unsigned long long countOfTracks;
@property(readonly, nonatomic) NSURL *playlistImageURL;
@property(nonatomic) __weak id <SPTFreeTierPlaylistEditViewModelDelegate> delegate;
@property(readonly, nonatomic) NSURL *playlistURL;
- (void)saveWithCompletion:(void (^)(_Bool, _Bool))arg1;
- (void)moveTrackAtIndexPath:(NSIndexPath *)arg1 toIndexPath:(NSIndexPath *)arg2;
- (void)removeTrackAtIndexPath:(NSIndexPath *)arg1;
- (id <SPTFreeTierPlaylistTrackViewModel>)trackViewModelAtIndexPath:(NSIndexPath *)arg1;
- (void)viewDidLoad;
@end
