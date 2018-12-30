//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class ANGPhonebookContactOption, ANGPlaylist;

@interface ANGCollaborativeInviteLoader : Loader
{
    ANGPhonebookContactOption *_contactOption;
    ANGPlaylist *_playlist;
}

@property(retain, nonatomic) ANGPlaylist *playlist; // @synthesize playlist=_playlist;
@property(retain, nonatomic) ANGPhonebookContactOption *contactOption; // @synthesize contactOption=_contactOption;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (int)type;
- (id)initWithContactOption:(id)arg1 playlist:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

