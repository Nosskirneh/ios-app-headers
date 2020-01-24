//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (JNSString)
+ (id)localizeWithEncoding:(id)arg1 encoding:(unsigned long long)arg2;
+ (id)composeTagString:(id)arg1 str2:(id)arg2;
+ (id)composeTagString:(id)arg1 str2:(id)arg2 separator:(id)arg3;
+ (id)stringByNumServers:(int)arg1;
+ (id)stringByNumPodcasts:(int)arg1;
+ (id)stringByNumEpisodes:(int)arg1;
+ (id)stringByNumFilesAndFolders:(int)arg1 numFolders:(int)arg2;
+ (id)stringByNumFolders:(int)arg1;
+ (id)stringByNumFiles:(int)arg1;
+ (id)stringByNumGenres:(int)arg1;
+ (id)stringByNumPlaylists:(int)arg1;
+ (id)stringByNumArtists:(int)arg1;
+ (id)stringByNumAlbums:(int)arg1 forArtist:(_Bool)arg2;
+ (id)stringByNumSongs:(int)arg1;
+ (id)stringByNum:(int)arg1;
+ (id)format_bytesToSz:(long long)arg1;
+ (id)format_bytesToSzKB:(long long)arg1;
+ (id)format_bytesToSzBYTE:(long long)arg1;
+ (id)msec2str_hms:(id)arg1 msec:(long long)arg2;
+ (id)msec2str_ms:(id)arg1 msec:(long long)arg2;
+ (id)stringByMsec2:(long long)arg1 longFormat:(_Bool)arg2;
+ (id)stringByMsec2:(long long)arg1;
+ (id)stringByMsec:(long long)arg1 longFormat:(_Bool)arg2;
+ (id)stringByMsec:(long long)arg1;
+ (_Bool)stringIsEmpty:(id)arg1 shouldCleanWhiteSpace:(_Bool)arg2;
+ (_Bool)stringIsEmpty:(id)arg1;
- (id)replaceCharactersInSet:(id)arg1 replace:(id)arg2;
- (id)removeUrlUserInfo;
- (id)removeUrlScheme;
- (id)substringBeforeSubstring:(id)arg1 include:(_Bool)arg2 defIsEmpty:(_Bool)arg3;
- (id)substringAfterSubstring:(id)arg1 include:(_Bool)arg2 defIsEmpty:(_Bool)arg3;
- (id)localizeWithEncoding:(unsigned long long)arg1;
- (_Bool)containsStringCaseInsensitive:(id)arg1;
- (_Bool)containsString:(id)arg1;
- (id)trim;
@end
