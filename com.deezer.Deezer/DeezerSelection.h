//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DeezerAlbum, DeezerFriend;

@interface DeezerSelection : NSObject
{
    DeezerAlbum *_album;
    DeezerFriend *_editor;
}

@property(retain, nonatomic) DeezerFriend *editor; // @synthesize editor=_editor;
@property(retain, nonatomic) DeezerAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;

@end
