//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class ANGLyrics, NSString;

@interface LyricsLoader : Loader
{
    NSString *_songId;
    ANGLyrics *_lyrics;
    NSString *_errorMessage;
}

@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) ANGLyrics *lyrics; // @synthesize lyrics=_lyrics;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (int)type;
- (id)initWithSongId:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;

@end

