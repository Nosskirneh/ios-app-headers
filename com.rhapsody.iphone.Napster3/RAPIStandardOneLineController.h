//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPIController.h"

#import "RAPIListScreenDelegate-Protocol.h"

@class NSArray, NSString;

@interface RAPIStandardOneLineController : RAPIController <RAPIListScreenDelegate>
{
    unsigned long long _mode;
    NSArray *_featuredPlaylists;
    NSArray *_downloadedArtists;
    NSArray *_genres;
}

@property(retain, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(retain, nonatomic) NSArray *downloadedArtists; // @synthesize downloadedArtists=_downloadedArtists;
@property(retain, nonatomic) NSArray *featuredPlaylists; // @synthesize featuredPlaylists=_featuredPlaylists;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)invalidateImageForRow:(unsigned long long)arg1;
- (void)invalidate;
@property(retain, nonatomic) NSArray *items;
- (long long)getTargetScreenForRow:(long long)arg1 forGroup:(long long)arg2;
- (id)getImageForRow:(long long)arg1 forGroup:(long long)arg2 withPreferredSize:(struct CGSize)arg3;
- (id)getStringForLine:(long long)arg1 forRow:(long long)arg2 forGroup:(long long)arg3;
- (_Bool)canProvideDataImmediately;
- (long long)getItemCountForGroup:(long long)arg1;
- (long long)getGroupCount;
- (id)getTitle;
- (void)handleOnItemClicked:(long long)arg1 forGroup:(long long)arg2;
- (void)fetchItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)getScreenConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

