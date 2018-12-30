//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@interface PostUserMusicLoader : Loader
{
    _Bool _isSyncAllowed;
}

+ (id)songsTitlesFromItems:(id)arg1;
+ (id)songsAndPlaylistsHash;
@property(nonatomic) _Bool isSyncAllowed; // @synthesize isSyncAllowed=_isSyncAllowed;
- (_Bool)hideSocketIDHeader;
- (_Bool)processData:(id)arg1;
- (void)startLoadInternal:(id)arg1 libraryDataLocation:(id)arg2;
- (void)startLoad;
- (void)uploadMusicLibraryToS3:(id)arg1;
- (id)libraryDict;
- (id)songsArrayFromMediaItems:(id)arg1;
- (id)songDictFromMediaItem:(id)arg1;
- (int)type;

@end

