//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSString;

@interface DeletePlaylistLoader : Loader
{
    NSString *_playlistId;
}

@property(retain, nonatomic) NSString *playlistId; // @synthesize playlistId=_playlistId;
- (void).cxx_destruct;
- (void)removeDeletionRecord;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (int)type;
- (id)initWithPlaylistId:(id)arg1;

@end

