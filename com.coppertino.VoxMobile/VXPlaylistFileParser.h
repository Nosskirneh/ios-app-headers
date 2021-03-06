//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface VXPlaylistFileParser : NSObject
{
    NSURL *_containerFileURL;
    double _containerFileDuration;
    NSString *_playlistContent;
    NSURL *_playlistFileURL;
}

+ (void)initialize;
@property(readonly) NSURL *playlistFileURL; // @synthesize playlistFileURL=_playlistFileURL;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *parsePlaylist;
- (id)_parseM3uExtInfTag:(id)arg1;
- (id)_URLForPlaylistEntityWithPath:(id)arg1 baseURL:(id)arg2;
- (id)_checkIfFileExistsAndReturnExistingOne:(id)arg1;
- (id)_findExistingFileInFolder:(id)arg1 withName:(id)arg2 andExtensions:(id)arg3;
- (double)_timeInSecondsFromCueIndexString:(id)arg1;
- (id)_clearStringFromUnnecessaryChars:(id)arg1;
- (int)_playlistFileType;
- (id)initWithContainerFileURL:(id)arg1 containerFileDuration:(double)arg2 andPlaylistContent:(id)arg3;
- (id)initWithPlaylistFileURL:(id)arg1;

@end

